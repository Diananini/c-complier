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
* myparser.cpp
* C++ source file generated from myparser.y.
* 
* Date: 12/22/15
* Time: 21:05:03
* 
* AYACC Version: 2.07
****************************************************************************/

#include <yycpars.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#line 1 ".\\myparser.y"

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

#line 73 "myparser.cpp"
// repeated because of possible precompiled header
#include <yycpars.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#include ".\myparser.h"

/////////////////////////////////////////////////////////////////////////////
// constructor

YYPARSERNAME::YYPARSERNAME()
{
	yytables();
#line 48 ".\\myparser.y"

	// place any extra initialisation code here

#line 97 "myparser.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYPARSERNAME::~YYPARSERNAME()
{
	// allows virtual functions to be called properly for correct cleanup
	yydestroy();
#line 53 ".\\myparser.y"

	// place any extra cleanup code here

#line 111 "myparser.cpp"
}

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#ifndef YYSTACK_SIZE
#define YYSTACK_SIZE 100
#endif
#ifndef YYSTACK_MAX
#define YYSTACK_MAX 0
#endif

/****************************************************************************
* N O T E
* 
* If the compiler generates a YYPARSERNAME error then you have not declared
* the name of the parser. The easiest way to do this is to use a name
* declaration. This is placed in the declarations section of your YACC
* source file and is introduced with the %name keyword. For instance, the
* following name declaration declares the parser myparser:
* 
* %name myparser
* 
* For more information see help.
****************************************************************************/

// yyattribute
#ifdef YYDEBUG
void YYFAR* YYPARSERNAME::yyattribute1(int index) const
{
	YYSTYPE YYFAR* p = &((YYSTYPE YYFAR*)yyattributestackptr)[yytop + index];
	return p;
}
#define yyattribute(index) (*(YYSTYPE YYFAR*)yyattribute1(index))
#else
#define yyattribute(index) (((YYSTYPE YYFAR*)yyattributestackptr)[yytop + (index)])
#endif

void YYPARSERNAME::yystacktoval(int index)
{
	yyassert(index >= 0);
	*(YYSTYPE YYFAR*)yyvalptr = ((YYSTYPE YYFAR*)yyattributestackptr)[index];
}

void YYPARSERNAME::yyvaltostack(int index)
{
	yyassert(index >= 0);
	((YYSTYPE YYFAR*)yyattributestackptr)[index] = *(YYSTYPE YYFAR*)yyvalptr;
}

void YYPARSERNAME::yylvaltoval()
{
	*(YYSTYPE YYFAR*)yyvalptr = *(YYSTYPE YYFAR*)yylvalptr;
}

void YYPARSERNAME::yyvaltolval()
{
	*(YYSTYPE YYFAR*)yylvalptr = *(YYSTYPE YYFAR*)yyvalptr;
}

void YYPARSERNAME::yylvaltostack(int index)
{
	yyassert(index >= 0);
	((YYSTYPE YYFAR*)yyattributestackptr)[index] = *(YYSTYPE YYFAR*)yylvalptr;
}

void YYFAR* YYPARSERNAME::yynewattribute(int count)
{
	yyassert(count >= 0);
	return new YYFAR YYSTYPE[count];
}

void YYPARSERNAME::yydeleteattribute(void YYFAR* attribute)
{
	delete[] (YYSTYPE YYFAR*)attribute;
}

void YYPARSERNAME::yycopyattribute(void YYFAR* dest, const void YYFAR* src, int count)
{
	for (int i = 0; i < count; i++) {
		((YYSTYPE YYFAR*)dest)[i] = ((YYSTYPE YYFAR*)src)[i];
	}
}

#ifdef YYDEBUG
void YYPARSERNAME::yyinitdebug(void YYFAR** p, int count) const
{
	yyassert(p != NULL);
	yyassert(count >= 1);

	YYSTYPE YYFAR** p1 = (YYSTYPE YYFAR**)p;
	for (int i = 0; i < count; i++) {
		p1[i] = &((YYSTYPE YYFAR*)yyattributestackptr)[yytop + i - (count - 1)];
	}
}
#endif

void YYPARSERNAME::yyaction(int action)
{
	switch (action) {
	case 0:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 76 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(4 - 4); 
#line 221 "myparser.cpp"
			}
		}
		break;
	case 1:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 79 ".\\myparser.y"

						Node *p;//变量声明
						(*(YYSTYPE YYFAR*)yyvalptr) = parse_tree.NewRoot(DECL_NODE, VAR_DECL, 0, Notype, yyattribute(1 - 3), yyattribute(2 - 3));//创建树节点
						for (p = yyattribute(2 - 3); p; p = p->sibling)
						{
							p->type = yyattribute(1 - 3)->type;
							symtbl.set_type(p->attr.symtbl_seq, p->type);
						}
                      
#line 242 "myparser.cpp"
			}
		}
		break;
	case 2:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 90 ".\\myparser.y"
                      //标识符列表
							YYSTYPE t = yyattribute(1 - 3);
							if (t!=NULL){
								while (t->sibling!=NULL)//兄弟组成的链表
									t=t->sibling;
								t->sibling = yyattribute(3 - 3);//$3=NULL
								(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 3);//指向第一个标识符
							}
							else //只有一个标识符
								(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(3 - 3);
						
#line 265 "myparser.cpp"
			}
		}
		break;
	case 3:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 102 ".\\myparser.y"

							(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
						
#line 280 "myparser.cpp"
			}
		}
		break;
	case 4:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 107 ".\\myparser.y"
       //类型说明符
						(*(YYSTYPE YYFAR*)yyvalptr) = parse_tree.NewRoot(EXPR_NODE, TYPE_EXPR, 0, Integer);
                      
#line 295 "myparser.cpp"
			}
		}
		break;
	case 5:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 111 ".\\myparser.y"
 
						(*(YYSTYPE YYFAR*)yyvalptr) = parse_tree.NewRoot(EXPR_NODE, TYPE_EXPR, 0, Char);
                      
#line 310 "myparser.cpp"
			}
		}
		break;
	case 6:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 116 ".\\myparser.y"
//标识符
							(*(YYSTYPE YYFAR*)yyvalptr) = parse_tree.NewRoot(EXPR_NODE, ID_EXPR, yyattribute(1 - 1)->attr.symtbl_seq, yyattribute(1 - 1)->type);
						
#line 325 "myparser.cpp"
			}
		}
		break;
	case 7:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 121 ".\\myparser.y"
//块语句，包括变量声明和语句
                        YYSTYPE t = yyattribute(2 - 4);
                        if (t != NULL)
                        { 
                          while (t->sibling != NULL)
                            t = t->sibling;
                          t->sibling = yyattribute(3 - 4);
                          (*(YYSTYPE YYFAR*)yyvalptr) = parse_tree.NewRoot(STMT_NODE, COMP_STMT, 0, Notype, yyattribute(2 - 4));
                        }
                        else 
                        {
						  (*(YYSTYPE YYFAR*)yyvalptr) = parse_tree.NewRoot(STMT_NODE, COMP_STMT, 0, Notype, yyattribute(3 - 4));
                        }
                      
#line 351 "myparser.cpp"
			}
		}
		break;
	case 8:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 136 ".\\myparser.y"
//只包含语句
						(*(YYSTYPE YYFAR*)yyvalptr) = parse_tree.NewRoot(STMT_NODE, COMP_STMT, 0, Notype, yyattribute(2 - 3));
                      
#line 366 "myparser.cpp"
			}
		}
		break;
	case 9:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 141 ".\\myparser.y"
 
                        YYSTYPE t = yyattribute(1 - 2);
                        if (t != NULL)
                        { 
                          while (t->sibling != NULL)
                            t = t->sibling;
                          t->sibling = yyattribute(2 - 2);
                          (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2); 
                        }
                        else //只声明一个变量
                          (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(2 - 2);
                      
#line 390 "myparser.cpp"
			}
		}
		break;
	case 10:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 154 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1); 
#line 403 "myparser.cpp"
			}
		}
		break;
	case 11:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 157 ".\\myparser.y"
 //多语句
                        YYSTYPE t = yyattribute(1 - 2);
                        if (t != NULL)
                        { 
                          while (t->sibling != NULL)
                            t = t->sibling;
                          t->sibling = yyattribute(2 - 2);
                          (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2); 
                        }
                        else 
                          (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(2 - 2);
                      
#line 427 "myparser.cpp"
			}
		}
		break;
	case 12:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 170 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1); 
#line 440 "myparser.cpp"
			}
		}
		break;
	case 13:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 173 ".\\myparser.y"
//表达式语句
                        (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
                      
#line 455 "myparser.cpp"
			}
		}
		break;
	case 14:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 177 ".\\myparser.y"
//块语句
                        (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
                      
#line 470 "myparser.cpp"
			}
		}
		break;
	case 15:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 181 ".\\myparser.y"
//条件语句
                        (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
                      
#line 485 "myparser.cpp"
			}
		}
		break;
	case 16:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 185 ".\\myparser.y"
//while循环
                        (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
                      
#line 500 "myparser.cpp"
			}
		}
		break;
	case 17:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 189 ".\\myparser.y"
//输入
						(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
					  
#line 515 "myparser.cpp"
			}
		}
		break;
	case 18:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 193 ".\\myparser.y"
//输出
						(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
					  
#line 530 "myparser.cpp"
			}
		}
		break;
	case 19:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 198 ".\\myparser.y"

                        (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
                      
#line 545 "myparser.cpp"
			}
		}
		break;
	case 20:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 202 ".\\myparser.y"
//单个分号
                        (*(YYSTYPE YYFAR*)yyvalptr) = NULL;
                      
#line 560 "myparser.cpp"
			}
		}
		break;
	case 21:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 207 ".\\myparser.y"

						(*(YYSTYPE YYFAR*)yyvalptr) = parse_tree.NewRoot(STMT_NODE, IF_STMT, 0, Notype, yyattribute(3 - 7), yyattribute(5 - 7), yyattribute(7 - 7));
                      
#line 575 "myparser.cpp"
			}
		}
		break;
	case 22:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 211 ".\\myparser.y"

						(*(YYSTYPE YYFAR*)yyvalptr) = parse_tree.NewRoot(STMT_NODE, IF_STMT, 0, Notype, yyattribute(3 - 5), yyattribute(5 - 5));
                      
#line 590 "myparser.cpp"
			}
		}
		break;
	case 23:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 216 ".\\myparser.y"

						(*(YYSTYPE YYFAR*)yyvalptr) = parse_tree.NewRoot(STMT_NODE, WHILE_STMT, 0, Notype, yyattribute(3 - 5), yyattribute(5 - 5));
                      
#line 605 "myparser.cpp"
			}
		}
		break;
	case 24:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 221 ".\\myparser.y"

						(*(YYSTYPE YYFAR*)yyvalptr) = parse_tree.NewRoot(STMT_NODE, INPUT_STMT, 0, Notype, yyattribute(3 - 4));
                      
#line 620 "myparser.cpp"
			}
		}
		break;
	case 25:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 226 ".\\myparser.y"

						(*(YYSTYPE YYFAR*)yyvalptr) = parse_tree.NewRoot(STMT_NODE, PRINT_STMT, 0, Notype, yyattribute(3 - 4));
                      
#line 635 "myparser.cpp"
			}
		}
		break;
	case 26:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 231 ".\\myparser.y"

						(*(YYSTYPE YYFAR*)yyvalptr) = parse_tree.NewRoot(EXPR_NODE, OP_EXPR, ASSIGN, Notype, yyattribute(1 - 3), yyattribute(3 - 3));
                      
#line 650 "myparser.cpp"
			}
		}
		break;
	case 27:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 235 ".\\myparser.y"

                        (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
                      
#line 665 "myparser.cpp"
			}
		}
		break;
	case 28:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 240 ".\\myparser.y"

						(*(YYSTYPE YYFAR*)yyvalptr) = parse_tree.NewRoot(EXPR_NODE, ID_EXPR, yyattribute(1 - 1)->attr.symtbl_seq, yyattribute(1 - 1)->type);
                      
#line 680 "myparser.cpp"
			}
		}
		break;
	case 29:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 245 ".\\myparser.y"

						(*(YYSTYPE YYFAR*)yyvalptr) = parse_tree.NewRoot(EXPR_NODE, OP_EXPR, OR, Notype, yyattribute(1 - 3), yyattribute(3 - 3));
                      
#line 695 "myparser.cpp"
			}
		}
		break;
	case 30:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 249 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1); 
#line 708 "myparser.cpp"
			}
		}
		break;
	case 31:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 252 ".\\myparser.y"

						(*(YYSTYPE YYFAR*)yyvalptr) = parse_tree.NewRoot(EXPR_NODE, OP_EXPR, AND, Notype, yyattribute(1 - 3), yyattribute(3 - 3));
                      
#line 723 "myparser.cpp"
			}
		}
		break;
	case 32:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 256 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1); 
#line 736 "myparser.cpp"
			}
		}
		break;
	case 33:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 260 ".\\myparser.y"

						(*(YYSTYPE YYFAR*)yyvalptr) = parse_tree.NewRoot(EXPR_NODE, OP_EXPR, EQ, Notype, yyattribute(1 - 3), yyattribute(3 - 3));
					
#line 751 "myparser.cpp"
			}
		}
		break;
	case 34:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 264 ".\\myparser.y"

						(*(YYSTYPE YYFAR*)yyvalptr) = parse_tree.NewRoot(EXPR_NODE, OP_EXPR, LT, Notype, yyattribute(1 - 3), yyattribute(3 - 3));
					
#line 766 "myparser.cpp"
			}
		}
		break;
	case 35:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 268 ".\\myparser.y"

						(*(YYSTYPE YYFAR*)yyvalptr) = parse_tree.NewRoot(EXPR_NODE, OP_EXPR, GT, Notype, yyattribute(1 - 3), yyattribute(3 - 3));
					
#line 781 "myparser.cpp"
			}
		}
		break;
	case 36:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 272 ".\\myparser.y"

						(*(YYSTYPE YYFAR*)yyvalptr) = parse_tree.NewRoot(EXPR_NODE, OP_EXPR, LE, Notype, yyattribute(1 - 3), yyattribute(3 - 3));
					
#line 796 "myparser.cpp"
			}
		}
		break;
	case 37:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 276 ".\\myparser.y"

						(*(YYSTYPE YYFAR*)yyvalptr) = parse_tree.NewRoot(EXPR_NODE, OP_EXPR, GE, Notype, yyattribute(1 - 3), yyattribute(3 - 3));
					
#line 811 "myparser.cpp"
			}
		}
		break;
	case 38:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 280 ".\\myparser.y"

						(*(YYSTYPE YYFAR*)yyvalptr) = parse_tree.NewRoot(EXPR_NODE, OP_EXPR, NE, Notype, yyattribute(1 - 3), yyattribute(3 - 3));
					
#line 826 "myparser.cpp"
			}
		}
		break;
	case 39:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 284 ".\\myparser.y"

						(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
					
#line 841 "myparser.cpp"
			}
		}
		break;
	case 40:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 290 ".\\myparser.y"

						(*(YYSTYPE YYFAR*)yyvalptr) = parse_tree.NewRoot(EXPR_NODE, OP_EXPR, PLUS, Notype, yyattribute(1 - 3), yyattribute(3 - 3));
                      
#line 856 "myparser.cpp"
			}
		}
		break;
	case 41:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 294 ".\\myparser.y"

						(*(YYSTYPE YYFAR*)yyvalptr) = parse_tree.NewRoot(EXPR_NODE, OP_EXPR, MINUS, Notype, yyattribute(1 - 3), yyattribute(3 - 3));
                      
#line 871 "myparser.cpp"
			}
		}
		break;
	case 42:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 298 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1); 
#line 884 "myparser.cpp"
			}
		}
		break;
	case 43:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 302 ".\\myparser.y"

						(*(YYSTYPE YYFAR*)yyvalptr) = parse_tree.NewRoot(EXPR_NODE, OP_EXPR, TIMES, Notype, yyattribute(1 - 3), yyattribute(3 - 3));
                      
#line 899 "myparser.cpp"
			}
		}
		break;
	case 44:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 306 ".\\myparser.y"

						(*(YYSTYPE YYFAR*)yyvalptr) = parse_tree.NewRoot(EXPR_NODE, OP_EXPR, OVER, Notype, yyattribute(1 - 3), yyattribute(3 - 3));
                      
#line 914 "myparser.cpp"
			}
		}
		break;
	case 45:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 310 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1); 
#line 927 "myparser.cpp"
			}
		}
		break;
	case 46:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 314 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(2 - 3); 
#line 940 "myparser.cpp"
			}
		}
		break;
	case 47:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 316 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1); 
#line 953 "myparser.cpp"
			}
		}
		break;
	case 48:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 318 ".\\myparser.y"
 
						(*(YYSTYPE YYFAR*)yyvalptr) = parse_tree.NewRoot(EXPR_NODE, CONST_EXPR, yyattribute(1 - 1)->attr.vali, Integer);
                      
#line 968 "myparser.cpp"
			}
		}
		break;
	case 49:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 322 ".\\myparser.y"

						(*(YYSTYPE YYFAR*)yyvalptr) = parse_tree.NewRoot(EXPR_NODE, CONST_EXPR, yyattribute(1 - 1)->attr.valc, Char);
                   	  
#line 983 "myparser.cpp"
			}
		}
		break;
	case 50:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 326 ".\\myparser.y"
 
						(*(YYSTYPE YYFAR*)yyvalptr) = parse_tree.NewRoot(EXPR_NODE, NOT_EXPR, NOT, Notype, yyattribute(2 - 2));
                      
#line 998 "myparser.cpp"
			}
		}
		break;
	default:
		yyassert(0);
		break;
	}
}

void YYPARSERNAME::yytables()
{
	yyattribute_size = sizeof(YYSTYPE);
	yysstack_size = YYSTACK_SIZE;
	yystack_max = YYSTACK_MAX;

#ifdef YYDEBUG
	static const yysymbol_t YYNEARFAR YYBASED_CODE symbol[] = {
		{ "$end", 0 },
		{ "error", 256 },
		{ "INT", 257 },
		{ "CHAR", 258 },
		{ "IF", 259 },
		{ "ELSE", 260 },
		{ "WHILE", 261 },
		{ "INPUT", 262 },
		{ "PRINT", 263 },
		{ "ID", 264 },
		{ "NUM", 265 },
		{ "CONSTCHAR", 266 },
		{ "MAIN", 267 },
		{ "AND", 268 },
		{ "OR", 269 },
		{ "NOT", 270 },
		{ "ASSIGN", 271 },
		{ "EQ", 272 },
		{ "LT", 273 },
		{ "LE", 274 },
		{ "GT", 275 },
		{ "GE", 276 },
		{ "NE", 277 },
		{ "PLUS", 278 },
		{ "MINUS", 279 },
		{ "TIMES", 280 },
		{ "OVER", 281 },
		{ "LPAREN", 282 },
		{ "RPAREN", 283 },
		{ "SEMICOLON", 284 },
		{ "COMMA", 285 },
		{ "LBRACE", 286 },
		{ "RBRACE", 287 },
		{ NULL, 0 }
	};
	yysymbol = symbol;

	static const char* const YYNEARFAR YYBASED_CODE rule[] = {
		"$accept: program",
		"program: MAIN LPAREN RPAREN compound_stmt",
		"var_declaration: type_specifier idlist SEMICOLON",
		"idlist: idlist COMMA id",
		"idlist: id",
		"type_specifier: INT",
		"type_specifier: CHAR",
		"id: ID",
		"compound_stmt: LBRACE local_declarations statement_list RBRACE",
		"compound_stmt: LBRACE statement_list RBRACE",
		"local_declarations: local_declarations var_declaration",
		"local_declarations: var_declaration",
		"statement_list: statement_list statement",
		"statement_list: statement",
		"statement: expression_stmt",
		"statement: compound_stmt",
		"statement: selection_stmt",
		"statement: while_stmt",
		"statement: input_stmt",
		"statement: print_stmt",
		"expression_stmt: expression SEMICOLON",
		"expression_stmt: SEMICOLON",
		"selection_stmt: IF LPAREN expression RPAREN statement ELSE statement",
		"selection_stmt: IF LPAREN expression RPAREN statement",
		"while_stmt: WHILE LPAREN expression RPAREN statement",
		"input_stmt: INPUT LPAREN var RPAREN",
		"print_stmt: PRINT LPAREN var RPAREN",
		"expression: var ASSIGN expression",
		"expression: or_expression",
		"var: ID",
		"or_expression: or_expression OR and_expression",
		"or_expression: and_expression",
		"and_expression: and_expression AND rel_expression",
		"and_expression: rel_expression",
		"rel_expression: rel_expression EQ additive_expression",
		"rel_expression: rel_expression LT additive_expression",
		"rel_expression: rel_expression GT additive_expression",
		"rel_expression: rel_expression LE additive_expression",
		"rel_expression: rel_expression GE additive_expression",
		"rel_expression: rel_expression NE additive_expression",
		"rel_expression: additive_expression",
		"additive_expression: additive_expression PLUS term",
		"additive_expression: additive_expression MINUS term",
		"additive_expression: term",
		"term: term TIMES factor",
		"term: term OVER factor",
		"term: factor",
		"factor: LPAREN expression RPAREN",
		"factor: var",
		"factor: NUM",
		"factor: CONSTCHAR",
		"factor: NOT factor"
	};
	yyrule = rule;
#endif

	static const yyreduction_t YYNEARFAR YYBASED_CODE reduction[] = {
		{ 0, 1, -1 },
		{ 1, 4, 0 },
		{ 2, 3, 1 },
		{ 3, 3, 2 },
		{ 3, 1, 3 },
		{ 4, 1, 4 },
		{ 4, 1, 5 },
		{ 5, 1, 6 },
		{ 6, 4, 7 },
		{ 6, 3, 8 },
		{ 7, 2, 9 },
		{ 7, 1, 10 },
		{ 8, 2, 11 },
		{ 8, 1, 12 },
		{ 9, 1, 13 },
		{ 9, 1, 14 },
		{ 9, 1, 15 },
		{ 9, 1, 16 },
		{ 9, 1, 17 },
		{ 9, 1, 18 },
		{ 10, 2, 19 },
		{ 10, 1, 20 },
		{ 11, 7, 21 },
		{ 11, 5, 22 },
		{ 12, 5, 23 },
		{ 13, 4, 24 },
		{ 14, 4, 25 },
		{ 15, 3, 26 },
		{ 15, 1, 27 },
		{ 16, 1, 28 },
		{ 17, 3, 29 },
		{ 17, 1, 30 },
		{ 18, 3, 31 },
		{ 18, 1, 32 },
		{ 19, 3, 33 },
		{ 19, 3, 34 },
		{ 19, 3, 35 },
		{ 19, 3, 36 },
		{ 19, 3, 37 },
		{ 19, 3, 38 },
		{ 19, 1, 39 },
		{ 20, 3, 40 },
		{ 20, 3, 41 },
		{ 20, 1, 42 },
		{ 21, 3, 43 },
		{ 21, 3, 44 },
		{ 21, 1, 45 },
		{ 22, 3, 46 },
		{ 22, 1, 47 },
		{ 22, 1, 48 },
		{ 22, 1, 49 },
		{ 22, 2, 50 }
	};
	yyreduction = reduction;

	yytokenaction_size = 70;

	static const yytokenaction_t YYNEARFAR YYBASED_CODE tokenaction[] = {
		{ 94, YYAT_SHIFT, 9 },
		{ 92, YYAT_SHIFT, 94 },
		{ 94, YYAT_SHIFT, 10 },
		{ 94, YYAT_SHIFT, 11 },
		{ 94, YYAT_SHIFT, 12 },
		{ 60, YYAT_SHIFT, 14 },
		{ 60, YYAT_SHIFT, 15 },
		{ 82, YYAT_SHIFT, 46 },
		{ 82, YYAT_SHIFT, 47 },
		{ 84, YYAT_SHIFT, 57 },
		{ 60, YYAT_SHIFT, 16 },
		{ 71, YYAT_SHIFT, 51 },
		{ 71, YYAT_SHIFT, 52 },
		{ 71, YYAT_SHIFT, 53 },
		{ 71, YYAT_SHIFT, 54 },
		{ 71, YYAT_SHIFT, 55 },
		{ 71, YYAT_SHIFT, 56 },
		{ 81, YYAT_SHIFT, 46 },
		{ 81, YYAT_SHIFT, 47 },
		{ 80, YYAT_SHIFT, 46 },
		{ 80, YYAT_SHIFT, 47 },
		{ 76, YYAT_SHIFT, 45 },
		{ 60, YYAT_SHIFT, 17 },
		{ 79, YYAT_SHIFT, 46 },
		{ 79, YYAT_SHIFT, 47 },
		{ 94, YYAT_SHIFT, 18 },
		{ 69, YYAT_SHIFT, 90 },
		{ 94, YYAT_SHIFT, 5 },
		{ 24, YYAT_SHIFT, 51 },
		{ 24, YYAT_SHIFT, 52 },
		{ 24, YYAT_SHIFT, 53 },
		{ 24, YYAT_SHIFT, 54 },
		{ 24, YYAT_SHIFT, 55 },
		{ 24, YYAT_SHIFT, 56 },
		{ 78, YYAT_SHIFT, 46 },
		{ 78, YYAT_SHIFT, 47 },
		{ 77, YYAT_SHIFT, 46 },
		{ 77, YYAT_SHIFT, 47 },
		{ 73, YYAT_SHIFT, 48 },
		{ 73, YYAT_SHIFT, 49 },
		{ 72, YYAT_SHIFT, 48 },
		{ 72, YYAT_SHIFT, 49 },
		{ 58, YYAT_SHIFT, 83 },
		{ 58, YYAT_SHIFT, 84 },
		{ 36, YYAT_SHIFT, 7 },
		{ 36, YYAT_SHIFT, 8 },
		{ 21, YYAT_SHIFT, 48 },
		{ 21, YYAT_SHIFT, 49 },
		{ 20, YYAT_SHIFT, 46 },
		{ 20, YYAT_SHIFT, 47 },
		{ 68, YYAT_SHIFT, 89 },
		{ 67, YYAT_SHIFT, 88 },
		{ 66, YYAT_SHIFT, 87 },
		{ 63, YYAT_SHIFT, 86 },
		{ 44, YYAT_SHIFT, 70 },
		{ 41, YYAT_SHIFT, 13 },
		{ 37, YYAT_SHIFT, 64 },
		{ 34, YYAT_SHIFT, 61 },
		{ 30, YYAT_SHIFT, 60 },
		{ 23, YYAT_SHIFT, 50 },
		{ 19, YYAT_SHIFT, 45 },
		{ 12, YYAT_SHIFT, 41 },
		{ 11, YYAT_SHIFT, 40 },
		{ 10, YYAT_SHIFT, 39 },
		{ 9, YYAT_SHIFT, 38 },
		{ 4, YYAT_SHIFT, 5 },
		{ 3, YYAT_SHIFT, 4 },
		{ 2, YYAT_ACCEPT, 0 },
		{ 1, YYAT_SHIFT, 3 },
		{ 0, YYAT_SHIFT, 1 }
	};
	yytokenaction = tokenaction;

	static const yystateaction_t YYNEARFAR YYBASED_CODE stateaction[] = {
		{ -198, 1, YYAT_ERROR, 0 },
		{ -214, 1, YYAT_ERROR, 0 },
		{ 67, 1, YYAT_ERROR, 0 },
		{ -217, 1, YYAT_ERROR, 0 },
		{ -221, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 36 },
		{ 0, 0, YYAT_REDUCE, 1 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ 0, 0, YYAT_REDUCE, 6 },
		{ -218, 1, YYAT_ERROR, 0 },
		{ -219, 1, YYAT_ERROR, 0 },
		{ -220, 1, YYAT_ERROR, 0 },
		{ -221, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 29 },
		{ 0, 0, YYAT_REDUCE, 49 },
		{ 0, 0, YYAT_REDUCE, 50 },
		{ 0, 0, YYAT_DEFAULT, 60 },
		{ 0, 0, YYAT_DEFAULT, 60 },
		{ 0, 0, YYAT_REDUCE, 21 },
		{ -208, 1, YYAT_REDUCE, 31 },
		{ -230, 1, YYAT_REDUCE, 40 },
		{ -234, 1, YYAT_REDUCE, 43 },
		{ 0, 0, YYAT_REDUCE, 46 },
		{ -210, 1, YYAT_REDUCE, 28 },
		{ -244, 1, YYAT_REDUCE, 33 },
		{ 0, 0, YYAT_REDUCE, 15 },
		{ 0, 0, YYAT_REDUCE, 11 },
		{ 0, 0, YYAT_DEFAULT, 84 },
		{ 0, 0, YYAT_REDUCE, 17 },
		{ 0, 0, YYAT_REDUCE, 16 },
		{ -213, 1, YYAT_REDUCE, 48 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ 0, 0, YYAT_REDUCE, 13 },
		{ 0, 0, YYAT_REDUCE, 19 },
		{ -227, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 14 },
		{ -213, 1, YYAT_DEFAULT, 94 },
		{ -231, 1, YYAT_DEFAULT, 94 },
		{ 0, 0, YYAT_DEFAULT, 60 },
		{ 0, 0, YYAT_DEFAULT, 60 },
		{ 0, 0, YYAT_DEFAULT, 41 },
		{ -209, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 51 },
		{ 0, 0, YYAT_REDUCE, 48 },
		{ -229, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 60 },
		{ 0, 0, YYAT_DEFAULT, 60 },
		{ 0, 0, YYAT_DEFAULT, 60 },
		{ 0, 0, YYAT_DEFAULT, 60 },
		{ 0, 0, YYAT_DEFAULT, 60 },
		{ 0, 0, YYAT_DEFAULT, 60 },
		{ 0, 0, YYAT_DEFAULT, 60 },
		{ 0, 0, YYAT_DEFAULT, 60 },
		{ 0, 0, YYAT_DEFAULT, 60 },
		{ 0, 0, YYAT_DEFAULT, 60 },
		{ 0, 0, YYAT_DEFAULT, 60 },
		{ 0, 0, YYAT_DEFAULT, 60 },
		{ 0, 0, YYAT_REDUCE, 7 },
		{ -242, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 4 },
		{ -260, 1, YYAT_DEFAULT, 41 },
		{ 0, 0, YYAT_REDUCE, 20 },
		{ 0, 0, YYAT_REDUCE, 10 },
		{ -234, 1, YYAT_DEFAULT, 94 },
		{ 0, 0, YYAT_REDUCE, 9 },
		{ 0, 0, YYAT_REDUCE, 12 },
		{ -231, 1, YYAT_ERROR, 0 },
		{ -232, 1, YYAT_ERROR, 0 },
		{ -233, 1, YYAT_ERROR, 0 },
		{ -257, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 47 },
		{ -261, 1, YYAT_REDUCE, 32 },
		{ -240, 1, YYAT_REDUCE, 41 },
		{ -242, 1, YYAT_REDUCE, 42 },
		{ 0, 0, YYAT_REDUCE, 44 },
		{ 0, 0, YYAT_REDUCE, 45 },
		{ -247, 1, YYAT_REDUCE, 30 },
		{ -242, 1, YYAT_REDUCE, 34 },
		{ -244, 1, YYAT_REDUCE, 35 },
		{ -255, 1, YYAT_REDUCE, 37 },
		{ -259, 1, YYAT_REDUCE, 36 },
		{ -261, 1, YYAT_REDUCE, 38 },
		{ -271, 1, YYAT_REDUCE, 39 },
		{ 0, 0, YYAT_REDUCE, 2 },
		{ -255, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 27 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ 0, 0, YYAT_DEFAULT, 94 },
		{ 0, 0, YYAT_DEFAULT, 94 },
		{ 0, 0, YYAT_REDUCE, 25 },
		{ 0, 0, YYAT_REDUCE, 26 },
		{ 0, 0, YYAT_REDUCE, 3 },
		{ -259, 1, YYAT_REDUCE, 23 },
		{ 0, 0, YYAT_REDUCE, 24 },
		{ -259, 1, YYAT_DEFAULT, 60 },
		{ 0, 0, YYAT_REDUCE, 22 }
	};
	yystateaction = stateaction;

	yynontermgoto_size = 51;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 94, 25 },
		{ 50, 76 },
		{ 50, 24 },
		{ 94, 95 },
		{ 94, 35 },
		{ 94, 29 },
		{ 94, 28 },
		{ 94, 31 },
		{ 94, 33 },
		{ 94, 34 },
		{ 36, 62 },
		{ 88, 93 },
		{ 36, 27 },
		{ 56, 82 },
		{ 56, 21 },
		{ 56, 22 },
		{ 36, 63 },
		{ 36, 32 },
		{ 60, 85 },
		{ 60, 30 },
		{ 60, 23 },
		{ 60, 19 },
		{ 5, 26 },
		{ 49, 43 },
		{ 27, 58 },
		{ 87, 92 },
		{ 27, 59 },
		{ 5, 36 },
		{ 5, 37 },
		{ 49, 75 },
		{ 47, -1 },
		{ 47, 73 },
		{ 45, 71 },
		{ 45, 20 },
		{ 84, 91 },
		{ 63, 65 },
		{ 55, 81 },
		{ 54, 80 },
		{ 53, 79 },
		{ 52, 78 },
		{ 51, 77 },
		{ 48, 74 },
		{ 46, 72 },
		{ 41, 69 },
		{ 40, 68 },
		{ 39, 67 },
		{ 38, 66 },
		{ 17, 44 },
		{ 16, 42 },
		{ 4, 6 },
		{ 0, 2 }
	};
	yynontermgoto = nontermgoto;

	static const yystategoto_t YYNEARFAR YYBASED_CODE stategoto[] = {
		{ 49, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 43, -1 },
		{ 20, 36 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 26, 49 },
		{ 32, 60 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 21, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 8, 94 },
		{ 0, 63 },
		{ 31, 60 },
		{ 30, 60 },
		{ 28, -1 },
		{ 27, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 13, 56 },
		{ 21, 47 },
		{ 10, 56 },
		{ 19, 49 },
		{ 7, -1 },
		{ -17, 45 },
		{ 20, 56 },
		{ 19, 56 },
		{ 18, 56 },
		{ 17, 56 },
		{ 16, 56 },
		{ -7, 49 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 3, 50 },
		{ 0, -1 },
		{ 0, -1 },
		{ 26, 94 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 29, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 16, 94 },
		{ 2, 94 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ -6, 60 },
		{ 0, -1 }
	};
	yystategoto = stategoto;

	yydestructorptr = NULL;

	yytokendestptr = NULL;
	yytokendest_size = 0;

	yytokendestbaseptr = NULL;
	yytokendestbase_size = 0;
}
#line 331 ".\\myparser.y"


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




