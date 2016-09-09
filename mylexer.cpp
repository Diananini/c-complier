/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 75 of your 30 day trial period.
* 
* This file was produced by an UNREGISTERED COPY of Parser Generator. It is
* for evaluation purposes only. If you continue to use Parser Generator 30
* days after installation then you are required to purchase a license. For
* more information see the online help or go to the Bumble-Bee Software
* homepage at:
* 
* http://www.bumblebeesoftware.com
* 
* This notice must remain present in the file. It cannot be removed.
****************************************************************************/

/****************************************************************************
* mylexer.cpp
* C++ source file generated from mylexer.l.
* 
* Date: 12/22/15
* Time: 21:05:03
* 
* ALex Version: 2.07
****************************************************************************/

#include <yyclex.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#line 1 ".\\mylexer.l"

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



#line 65 "mylexer.cpp"
// repeated because of possible precompiled header
#include <yyclex.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#include ".\mylexer.h"

/////////////////////////////////////////////////////////////////////////////
// constructor

YYLEXERNAME::YYLEXERNAME()
{
	yytables();
#line 40 ".\\mylexer.l"

	// place any extra initialisation code here

#line 89 "mylexer.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYLEXERNAME::~YYLEXERNAME()
{
#line 45 ".\\mylexer.l"

	// place any extra cleanup code here

#line 101 "mylexer.cpp"
}

#ifndef YYTEXT_SIZE
#define YYTEXT_SIZE 100
#endif
#ifndef YYUNPUT_SIZE
#define YYUNPUT_SIZE YYTEXT_SIZE
#endif
#ifndef YYTEXT_MAX
#define YYTEXT_MAX 0
#endif
#ifndef YYUNPUT_MAX
#define YYUNPUT_MAX YYTEXT_MAX
#endif

/****************************************************************************
* N O T E
* 
* If the compiler generates a YYLEXERNAME error then you have not declared
* the name of the lexical analyser. The easiest way to do this is to use a
* name declaration. This is placed in the declarations section of your Lex
* source file and is introduced with the %name keyword. For instance, the
* following name declaration declares the lexer mylexer:
* 
* %name mylexer
* 
* For more information see help.
****************************************************************************/

// backwards compatability with lex
#ifdef input
int YYLEXERNAME::yyinput()
{
	return input();
}
#else
#define input yyinput
#endif

#ifdef output
void YYLEXERNAME::yyoutput(int ch)
{
	output(ch);
}
#else
#define output yyoutput
#endif

#ifdef unput
void YYLEXERNAME::yyunput(int ch)
{
	unput(ch);
}
#else
#define unput yyunput
#endif

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn -rch		// <warning: unreachable code> off
#endif
#endif

int YYLEXERNAME::yyaction(int action)
{
#line 61 ".\\mylexer.l"

	// extract yylval for use later on in actions
	YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;

#line 172 "mylexer.cpp"
	yyreturnflg = yytrue;
	switch (action) {
	case 1:
		{
#line 67 ".\\mylexer.l"
return INT;
#line 179 "mylexer.cpp"
		}
		break;
	case 2:
		{
#line 68 ".\\mylexer.l"
return CHAR;
#line 186 "mylexer.cpp"
		}
		break;
	case 3:
		{
#line 69 ".\\mylexer.l"
return IF;
#line 193 "mylexer.cpp"
		}
		break;
	case 4:
		{
#line 70 ".\\mylexer.l"
return ELSE;
#line 200 "mylexer.cpp"
		}
		break;
	case 5:
		{
#line 71 ".\\mylexer.l"
return WHILE;
#line 207 "mylexer.cpp"
		}
		break;
	case 6:
		{
#line 72 ".\\mylexer.l"
return INPUT;
#line 214 "mylexer.cpp"
		}
		break;
	case 7:
		{
#line 73 ".\\mylexer.l"
return PRINT;
#line 221 "mylexer.cpp"
		}
		break;
	case 8:
		{
#line 74 ".\\mylexer.l"
return MAIN;
#line 228 "mylexer.cpp"
		}
		break;
	case 9:
		{
#line 75 ".\\mylexer.l"
return EQ;
#line 235 "mylexer.cpp"
		}
		break;
	case 10:
		{
#line 76 ".\\mylexer.l"
return LE;
#line 242 "mylexer.cpp"
		}
		break;
	case 11:
		{
#line 77 ".\\mylexer.l"
return GE;
#line 249 "mylexer.cpp"
		}
		break;
	case 12:
		{
#line 78 ".\\mylexer.l"
return NE;
#line 256 "mylexer.cpp"
		}
		break;
	case 13:
		{
#line 79 ".\\mylexer.l"
return ASSIGN;
#line 263 "mylexer.cpp"
		}
		break;
	case 14:
		{
#line 80 ".\\mylexer.l"
return LT;
#line 270 "mylexer.cpp"
		}
		break;
	case 15:
		{
#line 81 ".\\mylexer.l"
return GT;
#line 277 "mylexer.cpp"
		}
		break;
	case 16:
		{
#line 82 ".\\mylexer.l"
return PLUS;
#line 284 "mylexer.cpp"
		}
		break;
	case 17:
		{
#line 83 ".\\mylexer.l"
return MINUS;
#line 291 "mylexer.cpp"
		}
		break;
	case 18:
		{
#line 84 ".\\mylexer.l"
return TIMES;
#line 298 "mylexer.cpp"
		}
		break;
	case 19:
		{
#line 85 ".\\mylexer.l"
return OVER;
#line 305 "mylexer.cpp"
		}
		break;
	case 20:
		{
#line 86 ".\\mylexer.l"
return SEMICOLON;
#line 312 "mylexer.cpp"
		}
		break;
	case 21:
		{
#line 87 ".\\mylexer.l"
return COMMA;
#line 319 "mylexer.cpp"
		}
		break;
	case 22:
		{
#line 88 ".\\mylexer.l"
return LPAREN;
#line 326 "mylexer.cpp"
		}
		break;
	case 23:
		{
#line 89 ".\\mylexer.l"
return RPAREN;
#line 333 "mylexer.cpp"
		}
		break;
	case 24:
		{
#line 90 ".\\mylexer.l"
return LBRACE;
#line 340 "mylexer.cpp"
		}
		break;
	case 25:
		{
#line 91 ".\\mylexer.l"
return RBRACE;
#line 347 "mylexer.cpp"
		}
		break;
	case 26:
		{
#line 92 ".\\mylexer.l"
return OR;
#line 354 "mylexer.cpp"
		}
		break;
	case 27:
		{
#line 93 ".\\mylexer.l"
 return AND;
#line 361 "mylexer.cpp"
		}
		break;
	case 28:
		{
#line 94 ".\\mylexer.l"
 return NOT;
#line 368 "mylexer.cpp"
		}
		break;
	case 29:
		{
#line 95 ".\\mylexer.l"
//注释的处理
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
            
#line 395 "mylexer.cpp"
		}
		break;
	case 30:
		{
#line 116 ".\\mylexer.l"
//标识符
				int p;
				
				p = symtbl.lookup(yytext);//查找在符号表中的位置
				if (p == -1)//还未在符号表
					p = symtbl.insert(yytext, ID);//加入
				else//已在符号表中
					dummy.type = symtbl.get_type(p);//得到类型
				yylval = &dummy;
				yylval->attr.symtbl_seq = p;//给树节点
				return ID;
			
#line 413 "mylexer.cpp"
		}
		break;
	case 31:
		{
#line 128 ".\\mylexer.l"
//数
				yylval = &dummy;
				yylval->attr.vali = atoi(yytext);//atoi(ASCII to integer)，把字符串转换成长整型数
				return NUM;
#line 423 "mylexer.cpp"
		}
		break;
	case 32:
		{
#line 132 ".\\mylexer.l"
//字符
				yylval = &dummy;
				yylval->attr.valc = yytext[0];
				return CONSTCHAR;
#line 433 "mylexer.cpp"
		}
		break;
	case 33:
		{
#line 136 ".\\mylexer.l"
//行
				lineno++;
			
#line 442 "mylexer.cpp"
		}
		break;
	case 34:
		{
#line 139 ".\\mylexer.l"
/* skip whitespace */
#line 449 "mylexer.cpp"
		}
		break;
	default:
		yyassert(0);
		break;
	}
	yyreturnflg = yyfalse;
	return 0;
}

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn .rch		// <warning: unreachable code> to the old state
#endif
#endif

void YYLEXERNAME::yytables()
{
	yystext_size = YYTEXT_SIZE;
	yysunput_size = YYUNPUT_SIZE;
	yytext_max = YYTEXT_MAX;
	yyunput_max = YYUNPUT_MAX;

	static const yymatch_t YYNEARFAR YYBASED_CODE match[] = {
		0
	};
	yymatch = match;

	yytransitionmax = 193;
	static const yytransition_t YYNEARFAR YYBASED_CODE transition[] = {
		{ 0, 0 },
		{ 3, 1 },
		{ 4, 1 },
		{ 3, 3 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 50, 42 },
		{ 3, 1 },
		{ 5, 1 },
		{ 3, 3 },
		{ 51, 42 },
		{ 31, 5 },
		{ 36, 18 },
		{ 6, 1 },
		{ 7, 1 },
		{ 8, 1 },
		{ 9, 1 },
		{ 10, 1 },
		{ 11, 1 },
		{ 12, 1 },
		{ 13, 1 },
		{ 37, 19 },
		{ 14, 1 },
		{ 15, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 41, 24 },
		{ 17, 1 },
		{ 18, 1 },
		{ 19, 1 },
		{ 20, 1 },
		{ 38, 20 },
		{ 39, 22 },
		{ 40, 23 },
		{ 42, 24 },
		{ 32, 6 },
		{ 43, 25 },
		{ 44, 26 },
		{ 45, 27 },
		{ 46, 29 },
		{ 47, 33 },
		{ 0, 7 },
		{ 48, 39 },
		{ 49, 40 },
		{ 0, 13 },
		{ 52, 43 },
		{ 53, 44 },
		{ 54, 45 },
		{ 55, 48 },
		{ 56, 49 },
		{ 57, 50 },
		{ 58, 52 },
		{ 59, 53 },
		{ 60, 54 },
		{ 61, 57 },
		{ 62, 59 },
		{ 63, 60 },
		{ 34, 14 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 22, 1 },
		{ 0, 0 },
		{ 23, 1 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 24, 1 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 25, 1 },
		{ 0, 0 },
		{ 0, 0 },
		{ 26, 1 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 27, 1 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 28, 1 },
		{ 29, 1 },
		{ 30, 1 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 21, 63 },
		{ 0, 0 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 },
		{ 21, 63 }
	};
	yytransition = transition;

	static const yystate_t YYNEARFAR YYBASED_CODE state[] = {
		{ 0, 0, 0 },
		{ 63, -8, 0 },
		{ 1, 0, 0 },
		{ 0, -6, 34 },
		{ 0, 0, 33 },
		{ 0, -33, 28 },
		{ 0, 21, 0 },
		{ -33, 55, 0 },
		{ 0, 0, 22 },
		{ 0, 0, 23 },
		{ 0, 0, 18 },
		{ 0, 0, 16 },
		{ 0, 0, 21 },
		{ 16, 20, 17 },
		{ 0, 39, 19 },
		{ 0, 0, 31 },
		{ 35, -35, 31 },
		{ 0, 0, 20 },
		{ 0, -32, 14 },
		{ 0, -23, 13 },
		{ 0, -6, 15 },
		{ 63, 0, 30 },
		{ 63, -48, 30 },
		{ 63, -51, 30 },
		{ 63, -52, 30 },
		{ 63, -37, 30 },
		{ 63, -53, 30 },
		{ 63, -42, 30 },
		{ 0, 0, 24 },
		{ 0, -61, 0 },
		{ 0, 0, 25 },
		{ 0, 0, 12 },
		{ 0, 0, 27 },
		{ 0, 25, 0 },
		{ 0, 0, 29 },
		{ 0, -44, 31 },
		{ 0, 0, 10 },
		{ 0, 0, 9 },
		{ 0, 0, 11 },
		{ 63, -31, 30 },
		{ 63, -48, 30 },
		{ 63, 0, 3 },
		{ 63, -89, 30 },
		{ 63, -36, 30 },
		{ 63, -35, 30 },
		{ 63, -34, 30 },
		{ 0, 0, 26 },
		{ 0, 0, 32 },
		{ 63, -42, 30 },
		{ 63, -28, 30 },
		{ 63, -43, 30 },
		{ 63, 0, 1 },
		{ 63, -35, 30 },
		{ 63, -34, 30 },
		{ 63, -31, 30 },
		{ 63, 0, 2 },
		{ 63, 0, 4 },
		{ 63, -38, 30 },
		{ 63, 0, 8 },
		{ 63, -37, 30 },
		{ 63, -21, 30 },
		{ 63, 0, 6 },
		{ 63, 0, 7 },
		{ 0, 70, 5 }
	};
	yystate = state;

	static const yybackup_t YYNEARFAR YYBASED_CODE backup[] = {
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0
	};
	yybackup = backup;
}
#line 141 ".\\mylexer.l"


/////////////////////////////////////////////////////////////////////////////
// programs section

