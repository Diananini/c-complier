#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 75 of your 30 day trial period.
# 
# This file was produced by an UNREGISTERED COPY of Parser Generator. It is
# for evaluation purposes only. If you continue to use Parser Generator 30
# days after installation then you are required to purchase a license. For
# more information see the online help or go to the Bumble-Bee Software
# homepage at:
# 
# http://www.bumblebeesoftware.com
# 
# This notice must remain present in the file. It cannot be removed.
#############################################################################

#############################################################################
# myparser.v
# YACC verbose file generated from myparser.y.
# 
# Date: 12/22/15
# Time: 21:05:03
# 
# AYACC Version: 2.07
#############################################################################


##############################################################################
# Rules
##############################################################################

    0  $accept : program $end

    1  program : MAIN LPAREN RPAREN compound_stmt

    2  var_declaration : type_specifier idlist SEMICOLON

    3  idlist : idlist COMMA id
    4         | id

    5  type_specifier : INT
    6                 | CHAR

    7  id : ID

    8  compound_stmt : LBRACE local_declarations statement_list RBRACE
    9                | LBRACE statement_list RBRACE

   10  local_declarations : local_declarations var_declaration
   11                     | var_declaration

   12  statement_list : statement_list statement
   13                 | statement

   14  statement : expression_stmt
   15            | compound_stmt
   16            | selection_stmt
   17            | while_stmt
   18            | input_stmt
   19            | print_stmt

   20  expression_stmt : expression SEMICOLON
   21                  | SEMICOLON

   22  selection_stmt : IF LPAREN expression RPAREN statement ELSE statement
   23                 | IF LPAREN expression RPAREN statement

   24  while_stmt : WHILE LPAREN expression RPAREN statement

   25  input_stmt : INPUT LPAREN var RPAREN

   26  print_stmt : PRINT LPAREN var RPAREN

   27  expression : var ASSIGN expression
   28             | or_expression

   29  var : ID

   30  or_expression : or_expression OR and_expression
   31                | and_expression

   32  and_expression : and_expression AND rel_expression
   33                 | rel_expression

   34  rel_expression : rel_expression EQ additive_expression
   35                 | rel_expression LT additive_expression
   36                 | rel_expression GT additive_expression
   37                 | rel_expression LE additive_expression
   38                 | rel_expression GE additive_expression
   39                 | rel_expression NE additive_expression
   40                 | additive_expression

   41  additive_expression : additive_expression PLUS term
   42                      | additive_expression MINUS term
   43                      | term

   44  term : term TIMES factor
   45       | term OVER factor
   46       | factor

   47  factor : LPAREN expression RPAREN
   48         | var
   49         | NUM
   50         | CONSTCHAR
   51         | NOT factor


##############################################################################
# States
##############################################################################

state 0
	$accept : . program $end

	MAIN  shift 1

	program  goto 2


state 1
	program : MAIN . LPAREN RPAREN compound_stmt

	LPAREN  shift 3


state 2
	$accept : program . $end  (0)

	$end  accept


state 3
	program : MAIN LPAREN . RPAREN compound_stmt

	RPAREN  shift 4


state 4
	program : MAIN LPAREN RPAREN . compound_stmt

	LBRACE  shift 5

	compound_stmt  goto 6


state 5
	compound_stmt : LBRACE . local_declarations statement_list RBRACE
	compound_stmt : LBRACE . statement_list RBRACE

	INT  shift 7
	CHAR  shift 8
	IF  shift 9
	WHILE  shift 10
	INPUT  shift 11
	PRINT  shift 12
	ID  shift 13
	NUM  shift 14
	CONSTCHAR  shift 15
	NOT  shift 16
	LPAREN  shift 17
	SEMICOLON  shift 18
	LBRACE  shift 5

	and_expression  goto 19
	additive_expression  goto 20
	term  goto 21
	factor  goto 22
	or_expression  goto 23
	rel_expression  goto 24
	compound_stmt  goto 25
	var_declaration  goto 26
	type_specifier  goto 27
	while_stmt  goto 28
	selection_stmt  goto 29
	var  goto 30
	input_stmt  goto 31
	statement  goto 32
	print_stmt  goto 33
	expression  goto 34
	expression_stmt  goto 35
	local_declarations  goto 36
	statement_list  goto 37


state 6
	program : MAIN LPAREN RPAREN compound_stmt .  (1)

	.  reduce 1


state 7
	type_specifier : INT .  (5)

	.  reduce 5


state 8
	type_specifier : CHAR .  (6)

	.  reduce 6


state 9
	selection_stmt : IF . LPAREN expression RPAREN statement ELSE statement
	selection_stmt : IF . LPAREN expression RPAREN statement

	LPAREN  shift 38


state 10
	while_stmt : WHILE . LPAREN expression RPAREN statement

	LPAREN  shift 39


state 11
	input_stmt : INPUT . LPAREN var RPAREN

	LPAREN  shift 40


state 12
	print_stmt : PRINT . LPAREN var RPAREN

	LPAREN  shift 41


state 13
	var : ID .  (29)

	.  reduce 29


state 14
	factor : NUM .  (49)

	.  reduce 49


state 15
	factor : CONSTCHAR .  (50)

	.  reduce 50


state 16
	factor : NOT . factor

	ID  shift 13
	NUM  shift 14
	CONSTCHAR  shift 15
	NOT  shift 16
	LPAREN  shift 17

	factor  goto 42
	var  goto 43


state 17
	factor : LPAREN . expression RPAREN

	ID  shift 13
	NUM  shift 14
	CONSTCHAR  shift 15
	NOT  shift 16
	LPAREN  shift 17

	and_expression  goto 19
	additive_expression  goto 20
	term  goto 21
	factor  goto 22
	or_expression  goto 23
	rel_expression  goto 24
	var  goto 30
	expression  goto 44


state 18
	expression_stmt : SEMICOLON .  (21)

	.  reduce 21


state 19
	or_expression : and_expression .  (31)
	and_expression : and_expression . AND rel_expression

	AND  shift 45
	.  reduce 31


state 20
	additive_expression : additive_expression . MINUS term
	additive_expression : additive_expression . PLUS term
	rel_expression : additive_expression .  (40)

	PLUS  shift 46
	MINUS  shift 47
	.  reduce 40


state 21
	term : term . TIMES factor
	term : term . OVER factor
	additive_expression : term .  (43)

	TIMES  shift 48
	OVER  shift 49
	.  reduce 43


state 22
	term : factor .  (46)

	.  reduce 46


state 23
	expression : or_expression .  (28)
	or_expression : or_expression . OR and_expression

	OR  shift 50
	.  reduce 28


state 24
	rel_expression : rel_expression . GT additive_expression
	rel_expression : rel_expression . NE additive_expression
	rel_expression : rel_expression . LE additive_expression
	rel_expression : rel_expression . EQ additive_expression
	rel_expression : rel_expression . LT additive_expression
	rel_expression : rel_expression . GE additive_expression
	and_expression : rel_expression .  (33)

	EQ  shift 51
	LT  shift 52
	LE  shift 53
	GT  shift 54
	GE  shift 55
	NE  shift 56
	.  reduce 33


state 25
	statement : compound_stmt .  (15)

	.  reduce 15


state 26
	local_declarations : var_declaration .  (11)

	.  reduce 11


state 27
	var_declaration : type_specifier . idlist SEMICOLON

	ID  shift 57

	idlist  goto 58
	id  goto 59


state 28
	statement : while_stmt .  (17)

	.  reduce 17


state 29
	statement : selection_stmt .  (16)

	.  reduce 16


state 30
	expression : var . ASSIGN expression
	factor : var .  (48)

	ASSIGN  shift 60
	.  reduce 48


state 31
	statement : input_stmt .  (18)

	.  reduce 18


state 32
	statement_list : statement .  (13)

	.  reduce 13


state 33
	statement : print_stmt .  (19)

	.  reduce 19


state 34
	expression_stmt : expression . SEMICOLON

	SEMICOLON  shift 61


state 35
	statement : expression_stmt .  (14)

	.  reduce 14


state 36
	compound_stmt : LBRACE local_declarations . statement_list RBRACE
	local_declarations : local_declarations . var_declaration

	INT  shift 7
	CHAR  shift 8
	IF  shift 9
	WHILE  shift 10
	INPUT  shift 11
	PRINT  shift 12
	ID  shift 13
	NUM  shift 14
	CONSTCHAR  shift 15
	NOT  shift 16
	LPAREN  shift 17
	SEMICOLON  shift 18
	LBRACE  shift 5

	and_expression  goto 19
	additive_expression  goto 20
	term  goto 21
	factor  goto 22
	or_expression  goto 23
	rel_expression  goto 24
	compound_stmt  goto 25
	var_declaration  goto 62
	type_specifier  goto 27
	while_stmt  goto 28
	selection_stmt  goto 29
	var  goto 30
	input_stmt  goto 31
	statement  goto 32
	print_stmt  goto 33
	expression  goto 34
	expression_stmt  goto 35
	statement_list  goto 63


state 37
	compound_stmt : LBRACE statement_list . RBRACE
	statement_list : statement_list . statement

	IF  shift 9
	WHILE  shift 10
	INPUT  shift 11
	PRINT  shift 12
	ID  shift 13
	NUM  shift 14
	CONSTCHAR  shift 15
	NOT  shift 16
	LPAREN  shift 17
	SEMICOLON  shift 18
	LBRACE  shift 5
	RBRACE  shift 64

	and_expression  goto 19
	additive_expression  goto 20
	term  goto 21
	factor  goto 22
	or_expression  goto 23
	rel_expression  goto 24
	compound_stmt  goto 25
	while_stmt  goto 28
	selection_stmt  goto 29
	var  goto 30
	input_stmt  goto 31
	statement  goto 65
	print_stmt  goto 33
	expression  goto 34
	expression_stmt  goto 35


state 38
	selection_stmt : IF LPAREN . expression RPAREN statement ELSE statement
	selection_stmt : IF LPAREN . expression RPAREN statement

	ID  shift 13
	NUM  shift 14
	CONSTCHAR  shift 15
	NOT  shift 16
	LPAREN  shift 17

	and_expression  goto 19
	additive_expression  goto 20
	term  goto 21
	factor  goto 22
	or_expression  goto 23
	rel_expression  goto 24
	var  goto 30
	expression  goto 66


state 39
	while_stmt : WHILE LPAREN . expression RPAREN statement

	ID  shift 13
	NUM  shift 14
	CONSTCHAR  shift 15
	NOT  shift 16
	LPAREN  shift 17

	and_expression  goto 19
	additive_expression  goto 20
	term  goto 21
	factor  goto 22
	or_expression  goto 23
	rel_expression  goto 24
	var  goto 30
	expression  goto 67


state 40
	input_stmt : INPUT LPAREN . var RPAREN

	ID  shift 13

	var  goto 68


state 41
	print_stmt : PRINT LPAREN . var RPAREN

	ID  shift 13

	var  goto 69


state 42
	factor : NOT factor .  (51)

	.  reduce 51


state 43
	factor : var .  (48)

	.  reduce 48


state 44
	factor : LPAREN expression . RPAREN

	RPAREN  shift 70


state 45
	and_expression : and_expression AND . rel_expression

	ID  shift 13
	NUM  shift 14
	CONSTCHAR  shift 15
	NOT  shift 16
	LPAREN  shift 17

	additive_expression  goto 20
	term  goto 21
	factor  goto 22
	rel_expression  goto 71
	var  goto 43


state 46
	additive_expression : additive_expression PLUS . term

	ID  shift 13
	NUM  shift 14
	CONSTCHAR  shift 15
	NOT  shift 16
	LPAREN  shift 17

	term  goto 72
	factor  goto 22
	var  goto 43


state 47
	additive_expression : additive_expression MINUS . term

	ID  shift 13
	NUM  shift 14
	CONSTCHAR  shift 15
	NOT  shift 16
	LPAREN  shift 17

	term  goto 73
	factor  goto 22
	var  goto 43


state 48
	term : term TIMES . factor

	ID  shift 13
	NUM  shift 14
	CONSTCHAR  shift 15
	NOT  shift 16
	LPAREN  shift 17

	factor  goto 74
	var  goto 43


state 49
	term : term OVER . factor

	ID  shift 13
	NUM  shift 14
	CONSTCHAR  shift 15
	NOT  shift 16
	LPAREN  shift 17

	factor  goto 75
	var  goto 43


state 50
	or_expression : or_expression OR . and_expression

	ID  shift 13
	NUM  shift 14
	CONSTCHAR  shift 15
	NOT  shift 16
	LPAREN  shift 17

	and_expression  goto 76
	additive_expression  goto 20
	term  goto 21
	factor  goto 22
	rel_expression  goto 24
	var  goto 43


state 51
	rel_expression : rel_expression EQ . additive_expression

	ID  shift 13
	NUM  shift 14
	CONSTCHAR  shift 15
	NOT  shift 16
	LPAREN  shift 17

	additive_expression  goto 77
	term  goto 21
	factor  goto 22
	var  goto 43


state 52
	rel_expression : rel_expression LT . additive_expression

	ID  shift 13
	NUM  shift 14
	CONSTCHAR  shift 15
	NOT  shift 16
	LPAREN  shift 17

	additive_expression  goto 78
	term  goto 21
	factor  goto 22
	var  goto 43


state 53
	rel_expression : rel_expression LE . additive_expression

	ID  shift 13
	NUM  shift 14
	CONSTCHAR  shift 15
	NOT  shift 16
	LPAREN  shift 17

	additive_expression  goto 79
	term  goto 21
	factor  goto 22
	var  goto 43


state 54
	rel_expression : rel_expression GT . additive_expression

	ID  shift 13
	NUM  shift 14
	CONSTCHAR  shift 15
	NOT  shift 16
	LPAREN  shift 17

	additive_expression  goto 80
	term  goto 21
	factor  goto 22
	var  goto 43


state 55
	rel_expression : rel_expression GE . additive_expression

	ID  shift 13
	NUM  shift 14
	CONSTCHAR  shift 15
	NOT  shift 16
	LPAREN  shift 17

	additive_expression  goto 81
	term  goto 21
	factor  goto 22
	var  goto 43


state 56
	rel_expression : rel_expression NE . additive_expression

	ID  shift 13
	NUM  shift 14
	CONSTCHAR  shift 15
	NOT  shift 16
	LPAREN  shift 17

	additive_expression  goto 82
	term  goto 21
	factor  goto 22
	var  goto 43


state 57
	id : ID .  (7)

	.  reduce 7


state 58
	var_declaration : type_specifier idlist . SEMICOLON
	idlist : idlist . COMMA id

	SEMICOLON  shift 83
	COMMA  shift 84


state 59
	idlist : id .  (4)

	.  reduce 4


state 60
	expression : var ASSIGN . expression

	ID  shift 13
	NUM  shift 14
	CONSTCHAR  shift 15
	NOT  shift 16
	LPAREN  shift 17

	and_expression  goto 19
	additive_expression  goto 20
	term  goto 21
	factor  goto 22
	or_expression  goto 23
	rel_expression  goto 24
	var  goto 30
	expression  goto 85


state 61
	expression_stmt : expression SEMICOLON .  (20)

	.  reduce 20


state 62
	local_declarations : local_declarations var_declaration .  (10)

	.  reduce 10


state 63
	compound_stmt : LBRACE local_declarations statement_list . RBRACE
	statement_list : statement_list . statement

	IF  shift 9
	WHILE  shift 10
	INPUT  shift 11
	PRINT  shift 12
	ID  shift 13
	NUM  shift 14
	CONSTCHAR  shift 15
	NOT  shift 16
	LPAREN  shift 17
	SEMICOLON  shift 18
	LBRACE  shift 5
	RBRACE  shift 86

	and_expression  goto 19
	additive_expression  goto 20
	term  goto 21
	factor  goto 22
	or_expression  goto 23
	rel_expression  goto 24
	compound_stmt  goto 25
	while_stmt  goto 28
	selection_stmt  goto 29
	var  goto 30
	input_stmt  goto 31
	statement  goto 65
	print_stmt  goto 33
	expression  goto 34
	expression_stmt  goto 35


state 64
	compound_stmt : LBRACE statement_list RBRACE .  (9)

	.  reduce 9


state 65
	statement_list : statement_list statement .  (12)

	.  reduce 12


state 66
	selection_stmt : IF LPAREN expression . RPAREN statement ELSE statement
	selection_stmt : IF LPAREN expression . RPAREN statement

	RPAREN  shift 87


state 67
	while_stmt : WHILE LPAREN expression . RPAREN statement

	RPAREN  shift 88


state 68
	input_stmt : INPUT LPAREN var . RPAREN

	RPAREN  shift 89


state 69
	print_stmt : PRINT LPAREN var . RPAREN

	RPAREN  shift 90


state 70
	factor : LPAREN expression RPAREN .  (47)

	.  reduce 47


state 71
	rel_expression : rel_expression . GT additive_expression
	rel_expression : rel_expression . NE additive_expression
	rel_expression : rel_expression . LE additive_expression
	rel_expression : rel_expression . EQ additive_expression
	rel_expression : rel_expression . LT additive_expression
	rel_expression : rel_expression . GE additive_expression
	and_expression : and_expression AND rel_expression .  (32)

	EQ  shift 51
	LT  shift 52
	LE  shift 53
	GT  shift 54
	GE  shift 55
	NE  shift 56
	.  reduce 32


state 72
	term : term . TIMES factor
	additive_expression : additive_expression PLUS term .  (41)
	term : term . OVER factor

	TIMES  shift 48
	OVER  shift 49
	.  reduce 41


state 73
	term : term . TIMES factor
	additive_expression : additive_expression MINUS term .  (42)
	term : term . OVER factor

	TIMES  shift 48
	OVER  shift 49
	.  reduce 42


state 74
	term : term TIMES factor .  (44)

	.  reduce 44


state 75
	term : term OVER factor .  (45)

	.  reduce 45


state 76
	or_expression : or_expression OR and_expression .  (30)
	and_expression : and_expression . AND rel_expression

	AND  shift 45
	.  reduce 30


state 77
	additive_expression : additive_expression . MINUS term
	rel_expression : rel_expression EQ additive_expression .  (34)
	additive_expression : additive_expression . PLUS term

	PLUS  shift 46
	MINUS  shift 47
	.  reduce 34


state 78
	additive_expression : additive_expression . MINUS term
	rel_expression : rel_expression LT additive_expression .  (35)
	additive_expression : additive_expression . PLUS term

	PLUS  shift 46
	MINUS  shift 47
	.  reduce 35


state 79
	rel_expression : rel_expression LE additive_expression .  (37)
	additive_expression : additive_expression . MINUS term
	additive_expression : additive_expression . PLUS term

	PLUS  shift 46
	MINUS  shift 47
	.  reduce 37


state 80
	rel_expression : rel_expression GT additive_expression .  (36)
	additive_expression : additive_expression . MINUS term
	additive_expression : additive_expression . PLUS term

	PLUS  shift 46
	MINUS  shift 47
	.  reduce 36


state 81
	additive_expression : additive_expression . MINUS term
	rel_expression : rel_expression GE additive_expression .  (38)
	additive_expression : additive_expression . PLUS term

	PLUS  shift 46
	MINUS  shift 47
	.  reduce 38


state 82
	rel_expression : rel_expression NE additive_expression .  (39)
	additive_expression : additive_expression . MINUS term
	additive_expression : additive_expression . PLUS term

	PLUS  shift 46
	MINUS  shift 47
	.  reduce 39


state 83
	var_declaration : type_specifier idlist SEMICOLON .  (2)

	.  reduce 2


state 84
	idlist : idlist COMMA . id

	ID  shift 57

	id  goto 91


state 85
	expression : var ASSIGN expression .  (27)

	.  reduce 27


state 86
	compound_stmt : LBRACE local_declarations statement_list RBRACE .  (8)

	.  reduce 8


state 87
	selection_stmt : IF LPAREN expression RPAREN . statement ELSE statement
	selection_stmt : IF LPAREN expression RPAREN . statement

	IF  shift 9
	WHILE  shift 10
	INPUT  shift 11
	PRINT  shift 12
	ID  shift 13
	NUM  shift 14
	CONSTCHAR  shift 15
	NOT  shift 16
	LPAREN  shift 17
	SEMICOLON  shift 18
	LBRACE  shift 5

	and_expression  goto 19
	additive_expression  goto 20
	term  goto 21
	factor  goto 22
	or_expression  goto 23
	rel_expression  goto 24
	compound_stmt  goto 25
	while_stmt  goto 28
	selection_stmt  goto 29
	var  goto 30
	input_stmt  goto 31
	statement  goto 92
	print_stmt  goto 33
	expression  goto 34
	expression_stmt  goto 35


state 88
	while_stmt : WHILE LPAREN expression RPAREN . statement

	IF  shift 9
	WHILE  shift 10
	INPUT  shift 11
	PRINT  shift 12
	ID  shift 13
	NUM  shift 14
	CONSTCHAR  shift 15
	NOT  shift 16
	LPAREN  shift 17
	SEMICOLON  shift 18
	LBRACE  shift 5

	and_expression  goto 19
	additive_expression  goto 20
	term  goto 21
	factor  goto 22
	or_expression  goto 23
	rel_expression  goto 24
	compound_stmt  goto 25
	while_stmt  goto 28
	selection_stmt  goto 29
	var  goto 30
	input_stmt  goto 31
	statement  goto 93
	print_stmt  goto 33
	expression  goto 34
	expression_stmt  goto 35


state 89
	input_stmt : INPUT LPAREN var RPAREN .  (25)

	.  reduce 25


state 90
	print_stmt : PRINT LPAREN var RPAREN .  (26)

	.  reduce 26


state 91
	idlist : idlist COMMA id .  (3)

	.  reduce 3


92: shift-reduce conflict (shift 94, reduce 23) on ELSE
state 92
	selection_stmt : IF LPAREN expression RPAREN statement . ELSE statement
	selection_stmt : IF LPAREN expression RPAREN statement .  (23)

	ELSE  shift 94
	.  reduce 23


state 93
	while_stmt : WHILE LPAREN expression RPAREN statement .  (24)

	.  reduce 24


state 94
	selection_stmt : IF LPAREN expression RPAREN statement ELSE . statement

	IF  shift 9
	WHILE  shift 10
	INPUT  shift 11
	PRINT  shift 12
	ID  shift 13
	NUM  shift 14
	CONSTCHAR  shift 15
	NOT  shift 16
	LPAREN  shift 17
	SEMICOLON  shift 18
	LBRACE  shift 5

	and_expression  goto 19
	additive_expression  goto 20
	term  goto 21
	factor  goto 22
	or_expression  goto 23
	rel_expression  goto 24
	compound_stmt  goto 25
	while_stmt  goto 28
	selection_stmt  goto 29
	var  goto 30
	input_stmt  goto 31
	statement  goto 95
	print_stmt  goto 33
	expression  goto 34
	expression_stmt  goto 35


state 95
	selection_stmt : IF LPAREN expression RPAREN statement ELSE statement .  (22)

	.  reduce 22


##############################################################################
# Summary
##############################################################################

State 92 contains 1 shift-reduce conflict(s)


33 token(s), 23 nonterminal(s)
52 grammar rule(s), 96 state(s)


##############################################################################
# End of File
##############################################################################
