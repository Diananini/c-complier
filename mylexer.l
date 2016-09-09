%{
/****************************************************************************
mylexer.l
ParserWizard generated Lex file.

Date: 2015��11��24��
****************************************************************************/


#include <string>
#include <fstream>

using namespace std;

#include "myparser.h"
#include "symbol.h"
#include "tree.h"

extern symbol_table symtbl;//���ű�

Node dummy;//��ʱ�洢���ڵ�

int lineno = 1;//�кţ����ڱ���


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
"/*"        {//ע�͵Ĵ���
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
{id}        {//��ʶ��
				int p;
				
				p = symtbl.lookup(yytext);//�����ڷ��ű��е�λ��
				if (p == -1)//��δ�ڷ��ű�
					p = symtbl.insert(yytext, ID);//����
				else//���ڷ��ű���
					dummy.type = symtbl.get_type(p);//�õ�����
				yylval = &dummy;
				yylval->attr.symtbl_seq = p;//�����ڵ�
				return ID;
			}
{num}       {//��
				yylval = &dummy;
				yylval->attr.vali = atoi(yytext);//atoi(ASCII to integer)�����ַ���ת���ɳ�������
				return NUM;}
{constchar}	{//�ַ�
				yylval = &dummy;
				yylval->attr.valc = yytext[0];
				return CONSTCHAR;}
{newline}   {//��
				lineno++;
			}
{whitespace} {/* skip whitespace */}

%%

/////////////////////////////////////////////////////////////////////////////
// programs section