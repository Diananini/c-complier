%{
/****************************************************************************
mylexer.l
ParserWizard generated Lex file.

Date: 2015年11月24日
****************************************************************************/


#include <string>
#include <fstream>

using namespace std;

#include "myparser.h"
#include "symbol.h"
#include "tree.h"

extern symbol_table symtbl;//符号表

Node dummy;//临时存储树节点

int lineno = 1;//行号，用于报错


%}

/////////////////////////////////////////////////////////////////////////////
// declarations section

// lexical analyser name
%name mylexer

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

// place any declarations here
id          [a-zA-Z_]+[a-zA-Z0-9_]*
num         (-?[1-9]+[0-9]*)|(-?[1-9])|0
constchar	'.'
newline     \n
whitespace  [ \t]+

%%

/////////////////////////////////////////////////////////////////////////////
// rules section

%{
	// extract yylval for use later on in actions
	YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;
%}

// place your Lex rules here
"int"       {return INT;}
"char"      {return CHAR;}
"if"        {return IF;}
"else"      {return ELSE;}
"while"     {return WHILE;}
"input"		{return INPUT;}
"print"		{return PRINT;}
"main"		{return MAIN;}
"=="        {return EQ;}
"<="        {return LE;}
">="        {return GE;}
"!="        {return NE;}
"="         {return ASSIGN;}
"<"         {return LT;}
">"         {return GT;}
"+"         {return PLUS;}
"-"         {return MINUS;}
"*"         {return TIMES;}
"/"         {return OVER;}
";"         {return SEMICOLON;}
","         {return COMMA;}
"("         {return LPAREN;}
")"         {return RPAREN;}
"{"         {return LBRACE;}
"}"         {return RBRACE;}
"||"        {return OR;}
"&&"        { return AND;}
"!"         { return NOT;}
"/*"        {//注释的处理
                char c;
                LABEL:
                do
                {
                    c = input();
                    if( c == '\n')
                    	lineno++;
                }while(c != '*');
                
                do
                {
                    c = input();
                    if(c == '/')
                        break;
                    if( c == '\n')
                    	lineno++;
                    if(c != '*')
                        goto LABEL;
                }while(c == '*');
            }
{id}        {//标识符
				int p;
				
				p = symtbl.lookup(yytext);//查找在符号表中的位置
				if (p == -1)//还未在符号表
					p = symtbl.insert(yytext, ID);//加入
				else//已在符号表中
					dummy.type = symtbl.get_type(p);//得到类型
				yylval = &dummy;
				yylval->attr.symtbl_seq = p;//给树节点
				return ID;
			}
{num}       {//数
				yylval = &dummy;
				yylval->attr.vali = atoi(yytext);//atoi(ASCII to integer)，把字符串转换成长整型数
				return NUM;}
{constchar}	{//字符
				yylval = &dummy;
				yylval->attr.valc = yytext[0];
				return CONSTCHAR;}
{newline}   {//行
				lineno++;
			}
{whitespace} {/* skip whitespace */}

%%

/////////////////////////////////////////////////////////////////////////////
// programs section
