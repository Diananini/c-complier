%{
/****************************************************************************
myparser.y
ParserWizard generated YACC file.

Date: 2015年11月24日
****************************************************************************/

/*
支持的语言特性：
1	数据类型：int，char
2	语句：赋值（=），if，while，for
3	算术运算
4	关系运算
5	逻辑运算：&&（与），||（或），!（非）
6	复合语句：{、}括起来的语句
7	注释语句
8	简单的输入输出

*/
#include <fstream>
#include <string>

using namespace std;

#include "symbol.h"//符号表
#include "tree.h"//树

extern symbol_table symtbl;
extern tree parse_tree;//语法树


#include "mylexer.h"
%}

/////////////////////////////////////////////////////////////////////////////
// declarations section

// parser name
%name myparser

// class definition
{
	// place any extra class members here
}

// constructor
{
	// place any extra initialisation code here
}

// destructor
{
	// place any extra cleanup code here
}

// attribute type
%include {
#ifndef YYSTYPE
#define YYSTYPE Node *//树节点
#endif
}

// place any declarations here
%token INT CHAR IF ELSE WHILE INPUT PRINT
%token ID NUM CONSTCHAR MAIN
%token AND OR NOT ASSIGN EQ LT LE GT GE NE PLUS MINUS TIMES OVER LPAREN RPAREN SEMICOLON COMMA LBRACE RBRACE

%%

/////////////////////////////////////////////////////////////////////////////
// rules section

// place your YACC rules here (there must be at least one)
program             : MAIN LPAREN RPAREN compound_stmt
                        { $$ = $4; }
                    ;
var_declaration     : type_specifier idlist SEMICOLON
                      {
						Node *p;//变量声明
						$$ = parse_tree.NewRoot(DECL_NODE, VAR_DECL, 0, Notype, $1, $2);//创建树节点
						for (p = $2; p; p = p->sibling)
						{
							p->type = $1->type;
							symtbl.set_type(p->attr.symtbl_seq, p->type);
						}
                      }
                    ;
idlist				: idlist COMMA id
						{                      //标识符列表
							YYSTYPE t = $1;
							if (t!=NULL){
								while (t->sibling!=NULL)//兄弟组成的链表
									t=t->sibling;
								t->sibling = $3;//$3=NULL
								$$ = $1;//指向第一个标识符
							}
							else //只有一个标识符
								$$ = $3;
						}
					| id
						{
							$$ = $1;
						}
										;
type_specifier      : INT 
                      {       //类型说明符
						$$ = parse_tree.NewRoot(EXPR_NODE, TYPE_EXPR, 0, Integer);
                      }
                    | CHAR
                      { 
						$$ = parse_tree.NewRoot(EXPR_NODE, TYPE_EXPR, 0, Char);
                      }
                    ;
id					: ID
						{//标识符
							$$ = parse_tree.NewRoot(EXPR_NODE, ID_EXPR, $1->attr.symtbl_seq, $1->type);
						}
										;
compound_stmt       : LBRACE local_declarations statement_list RBRACE
                      {//块语句，包括变量声明和语句
                        YYSTYPE t = $2;
                        if (t != NULL)
                        { 
                          while (t->sibling != NULL)
                            t = t->sibling;
                          t->sibling = $3;
                          $$ = parse_tree.NewRoot(STMT_NODE, COMP_STMT, 0, Notype, $2);
                        }
                        else 
                        {
						  $$ = parse_tree.NewRoot(STMT_NODE, COMP_STMT, 0, Notype, $3);
                        }
                      }
                    | LBRACE statement_list RBRACE
                      {//只包含语句
						$$ = parse_tree.NewRoot(STMT_NODE, COMP_STMT, 0, Notype, $2);
                      }
                    ;
local_declarations  : local_declarations var_declaration
                      { 
                        YYSTYPE t = $1;
                        if (t != NULL)
                        { 
                          while (t->sibling != NULL)
                            t = t->sibling;
                          t->sibling = $2;
                          $$ = $1; 
                        }
                        else //只声明一个变量
                          $$ = $2;
                      }
                    | var_declaration
                      { $$ = $1; }
                    ;
statement_list      : statement_list statement
                      { //多语句
                        YYSTYPE t = $1;
                        if (t != NULL)
                        { 
                          while (t->sibling != NULL)
                            t = t->sibling;
                          t->sibling = $2;
                          $$ = $1; 
                        }
                        else 
                          $$ = $2;
                      }
                    | statement
                      { $$ = $1; }
                    ;
statement           : expression_stmt
                      {//表达式语句
                        $$ = $1;
                      }
                    | compound_stmt
                      {//块语句
                        $$ = $1;
                      }
                    | selection_stmt
                      {//条件语句
                        $$ = $1;
                      }
                    | while_stmt
                      {//while循环
                        $$ = $1;
                      }
                    | input_stmt
                      {//输入
						$$ = $1;
					  }
                    | print_stmt
                      {//输出
						$$ = $1;
					  }
                    ;
expression_stmt     : expression SEMICOLON
                      {
                        $$ = $1;
                      }
                    | SEMICOLON
                      {//单个分号
                        $$ = NULL;
                      }
                    ;
selection_stmt      : IF LPAREN expression RPAREN statement ELSE statement
                      {
						$$ = parse_tree.NewRoot(STMT_NODE, IF_STMT, 0, Notype, $3, $5, $7);
                      }
                    | IF LPAREN expression RPAREN statement
                      {
						$$ = parse_tree.NewRoot(STMT_NODE, IF_STMT, 0, Notype, $3, $5);
                      }
                    ;
while_stmt          : WHILE LPAREN expression RPAREN statement
                      {
						$$ = parse_tree.NewRoot(STMT_NODE, WHILE_STMT, 0, Notype, $3, $5);
                      }
                    ;
input_stmt          : INPUT LPAREN var RPAREN
                      {
						$$ = parse_tree.NewRoot(STMT_NODE, INPUT_STMT, 0, Notype, $3);
                      }
                    ;
print_stmt          : PRINT LPAREN var RPAREN
                      {
						$$ = parse_tree.NewRoot(STMT_NODE, PRINT_STMT, 0, Notype, $3);
                      }
                    ;
expression          : var ASSIGN expression
                      {
						$$ = parse_tree.NewRoot(EXPR_NODE, OP_EXPR, ASSIGN, Notype, $1, $3);
                      }
                    | or_expression
                      {
                        $$ = $1;
                      }
                    ;
var                 : ID
                      {
						$$ = parse_tree.NewRoot(EXPR_NODE, ID_EXPR, $1->attr.symtbl_seq, $1->type);
                      }
                    ;
or_expression       : or_expression OR and_expression
                      {
						$$ = parse_tree.NewRoot(EXPR_NODE, OP_EXPR, OR, Notype, $1, $3);
                      }
                    | and_expression
                      { $$ = $1; }
                    ;
and_expression      : and_expression AND rel_expression
                      {
						$$ = parse_tree.NewRoot(EXPR_NODE, OP_EXPR, AND, Notype, $1, $3);
                      }
                    | rel_expression
                      { $$ = $1; }
                    ;
  //关系表达式
rel_expression : rel_expression EQ additive_expression
	 				{
						$$ = parse_tree.NewRoot(EXPR_NODE, OP_EXPR, EQ, Notype, $1, $3);
					}
					| rel_expression LT additive_expression	
					{
						$$ = parse_tree.NewRoot(EXPR_NODE, OP_EXPR, LT, Notype, $1, $3);
					}
					| rel_expression GT additive_expression	
					{
						$$ = parse_tree.NewRoot(EXPR_NODE, OP_EXPR, GT, Notype, $1, $3);
					}
					| rel_expression LE additive_expression	
					{
						$$ = parse_tree.NewRoot(EXPR_NODE, OP_EXPR, LE, Notype, $1, $3);
					}
					| rel_expression GE additive_expression	
					{
						$$ = parse_tree.NewRoot(EXPR_NODE, OP_EXPR, GE, Notype, $1, $3);
					}
					| rel_expression NE additive_expression	
					{
						$$ = parse_tree.NewRoot(EXPR_NODE, OP_EXPR, NE, Notype, $1, $3);
					}
					| additive_expression
					{
						$$ = $1;
					}
					;
		 //加减
additive_expression : additive_expression PLUS term
                      {
						$$ = parse_tree.NewRoot(EXPR_NODE, OP_EXPR, PLUS, Notype, $1, $3);
                      }
                    | additive_expression MINUS term
                      {
						$$ = parse_tree.NewRoot(EXPR_NODE, OP_EXPR, MINUS, Notype, $1, $3);
                      }
                    | term
                      { $$ = $1; }
                    ;
          //乘除
term                : term TIMES factor
                      {
						$$ = parse_tree.NewRoot(EXPR_NODE, OP_EXPR, TIMES, Notype, $1, $3);
                      }
                    | term OVER factor
                      {
						$$ = parse_tree.NewRoot(EXPR_NODE, OP_EXPR, OVER, Notype, $1, $3);
                      }
                    | factor
                      { $$ = $1; }
                    ;
            //因子
factor              : LPAREN expression RPAREN 
                      { $$ = $2; }
                    | var
                      { $$ = $1; }
                    | NUM
                      { 
						$$ = parse_tree.NewRoot(EXPR_NODE, CONST_EXPR, $1->attr.vali, Integer);
                      }
                    | CONSTCHAR
                      {
						$$ = parse_tree.NewRoot(EXPR_NODE, CONST_EXPR, $1->attr.valc, Char);
                   	  }
                    | NOT factor
                      { 
						$$ = parse_tree.NewRoot(EXPR_NODE, NOT_EXPR, NOT, Notype, $2);
                      }
                    ;

%%

/////////////////////////////////////////////////////////////////////////////
// programs section

int main()
{
	int n = 1;
	mylexer lexer;
	myparser parser;
	if (parser.yycreate(&lexer)) {
		if (lexer.yycreate(&parser)) {
			lexer.yyin = new ifstream("tmp.c");
			lexer.yyout = new ofstream("yyout.txt");
			n = parser.yyparse();
			parse_tree.get_label();
			parse_tree.gen_code(*lexer.yyout);
		}
	}
	
	getchar();
	return n;
}



