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
* myparser.h
* C++ header file generated from myparser.y.
* 
* Date: 12/22/15
* Time: 21:05:03
* 
* AYACC Version: 2.07
****************************************************************************/

#ifndef _MYPARSER_H
#define _MYPARSER_H

#include <yycpars.h>

/////////////////////////////////////////////////////////////////////////////
// myparser

#ifndef YYEXPPARSER
#define YYEXPPARSER
#endif

class YYEXPPARSER YYFAR myparser : public _YL yyfparser {
public:
	myparser();
	virtual ~myparser();

protected:
	void yytables();
	virtual void yyaction(int action);
#ifdef YYDEBUG
	void YYFAR* yyattribute1(int index) const;
	void yyinitdebug(void YYFAR** p, int count) const;
#endif

	// attribute functions
	virtual void yystacktoval(int index);
	virtual void yyvaltostack(int index);
	virtual void yylvaltoval();
	virtual void yyvaltolval();
	virtual void yylvaltostack(int index);

	virtual void YYFAR* yynewattribute(int count);
	virtual void yydeleteattribute(void YYFAR* attribute);
	virtual void yycopyattribute(void YYFAR* dest, const void YYFAR* src, int count);

public:
#line 43 ".\\myparser.y"

	// place any extra class members here

#line 69 "myparser.h"
};

#ifndef YYPARSERNAME
#define YYPARSERNAME myparser
#endif

#line 58 ".\\myparser.y"

#ifndef YYSTYPE
#define YYSTYPE Node *//Ê÷½Úµã
#endif

#line 82 "myparser.h"
#define INT 257
#define CHAR 258
#define IF 259
#define ELSE 260
#define WHILE 261
#define INPUT 262
#define PRINT 263
#define ID 264
#define NUM 265
#define CONSTCHAR 266
#define MAIN 267
#define AND 268
#define OR 269
#define NOT 270
#define ASSIGN 271
#define EQ 272
#define LT 273
#define LE 274
#define GT 275
#define GE 276
#define NE 277
#define PLUS 278
#define MINUS 279
#define TIMES 280
#define OVER 281
#define LPAREN 282
#define RPAREN 283
#define SEMICOLON 284
#define COMMA 285
#define LBRACE 286
#define RBRACE 287
#endif
