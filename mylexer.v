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
# mylexer.v
# Lex verbose file generated from mylexer.l.
# 
# Date: 12/22/15
# Time: 21:05:03
# 
# ALex Version: 2.07
#############################################################################


#############################################################################
# Expressions
#############################################################################

    1  "int"

    2  "char"

    3  "if"

    4  "else"

    5  "while"

    6  "input"

    7  "print"

    8  "main"

    9  "=="

   10  "<="

   11  ">="

   12  "!="

   13  "="

   14  "<"

   15  ">"

   16  "+"

   17  "-"

   18  "*"

   19  "/"

   20  ";"

   21  ","

   22  "("

   23  ")"

   24  "{"

   25  "}"

   26  "||"

   27  "&&"

   28  "!"

   29  "/*"

   30  [a-zA-Z_]+[a-zA-Z0-9_]*

   31  (-?[1-9]+[0-9]*)|(-?[1-9])|0

   32  '.'

   33  \n

   34  [ \t]+


#############################################################################
# States
#############################################################################

state 1
	INITIAL

	0x09               goto 3
	0x0a               goto 4
	0x20               goto 3
	0x21               goto 5
	0x26               goto 6
	0x27               goto 7
	0x28               goto 8
	0x29               goto 9
	0x2a               goto 10
	0x2b               goto 11
	0x2c               goto 12
	0x2d               goto 13
	0x2f               goto 14
	0x30               goto 15
	0x31 - 0x39 (9)    goto 16
	0x3b               goto 17
	0x3c               goto 18
	0x3d               goto 19
	0x3e               goto 20
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x62 (2)    goto 21
	0x63               goto 22
	0x64               goto 21
	0x65               goto 23
	0x66 - 0x68 (3)    goto 21
	0x69               goto 24
	0x6a - 0x6c (3)    goto 21
	0x6d               goto 25
	0x6e - 0x6f (2)    goto 21
	0x70               goto 26
	0x71 - 0x76 (6)    goto 21
	0x77               goto 27
	0x78 - 0x7a (3)    goto 21
	0x7b               goto 28
	0x7c               goto 29
	0x7d               goto 30


state 2
	^INITIAL

	0x09               goto 3
	0x0a               goto 4
	0x20               goto 3
	0x21               goto 5
	0x26               goto 6
	0x27               goto 7
	0x28               goto 8
	0x29               goto 9
	0x2a               goto 10
	0x2b               goto 11
	0x2c               goto 12
	0x2d               goto 13
	0x2f               goto 14
	0x30               goto 15
	0x31 - 0x39 (9)    goto 16
	0x3b               goto 17
	0x3c               goto 18
	0x3d               goto 19
	0x3e               goto 20
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x62 (2)    goto 21
	0x63               goto 22
	0x64               goto 21
	0x65               goto 23
	0x66 - 0x68 (3)    goto 21
	0x69               goto 24
	0x6a - 0x6c (3)    goto 21
	0x6d               goto 25
	0x6e - 0x6f (2)    goto 21
	0x70               goto 26
	0x71 - 0x76 (6)    goto 21
	0x77               goto 27
	0x78 - 0x7a (3)    goto 21
	0x7b               goto 28
	0x7c               goto 29
	0x7d               goto 30


state 3
	0x09               goto 3
	0x20               goto 3

	match 34


state 4
	match 33


state 5
	0x3d               goto 31

	match 28


state 6
	0x26               goto 32


state 7
	0x00 - 0x09 (10)   goto 33
	0x0b - 0xff (245)  goto 33


state 8
	match 22


state 9
	match 23


state 10
	match 18


state 11
	match 16


state 12
	match 21


state 13
	0x31 - 0x39 (9)    goto 16

	match 17


state 14
	0x2a               goto 34

	match 19


state 15
	match 31


state 16
	0x30               goto 35
	0x31 - 0x39 (9)    goto 16

	match 31


state 17
	match 20


state 18
	0x3d               goto 36

	match 14


state 19
	0x3d               goto 37

	match 13


state 20
	0x3d               goto 38

	match 15


state 21
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 30


state 22
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x67 (7)    goto 21
	0x68               goto 39
	0x69 - 0x7a (18)   goto 21

	match 30


state 23
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x6b (11)   goto 21
	0x6c               goto 40
	0x6d - 0x7a (14)   goto 21

	match 30


state 24
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x65 (5)    goto 21
	0x66               goto 41
	0x67 - 0x6d (7)    goto 21
	0x6e               goto 42
	0x6f - 0x7a (12)   goto 21

	match 30


state 25
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61               goto 43
	0x62 - 0x7a (25)   goto 21

	match 30


state 26
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x71 (17)   goto 21
	0x72               goto 44
	0x73 - 0x7a (8)    goto 21

	match 30


state 27
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x67 (7)    goto 21
	0x68               goto 45
	0x69 - 0x7a (18)   goto 21

	match 30


state 28
	match 24


state 29
	0x7c               goto 46


state 30
	match 25


state 31
	match 12


state 32
	match 27


state 33
	0x27               goto 47


state 34
	match 29


state 35
	0x30 - 0x39 (10)   goto 35

	match 31


state 36
	match 10


state 37
	match 9


state 38
	match 11


state 39
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61               goto 48
	0x62 - 0x7a (25)   goto 21

	match 30


state 40
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x72 (18)   goto 21
	0x73               goto 49
	0x74 - 0x7a (7)    goto 21

	match 30


state 41
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 3


state 42
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x6f (15)   goto 21
	0x70               goto 50
	0x71 - 0x73 (3)    goto 21
	0x74               goto 51
	0x75 - 0x7a (6)    goto 21

	match 30


state 43
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x68 (8)    goto 21
	0x69               goto 52
	0x6a - 0x7a (17)   goto 21

	match 30


state 44
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x68 (8)    goto 21
	0x69               goto 53
	0x6a - 0x7a (17)   goto 21

	match 30


state 45
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x68 (8)    goto 21
	0x69               goto 54
	0x6a - 0x7a (17)   goto 21

	match 30


state 46
	match 26


state 47
	match 32


state 48
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x71 (17)   goto 21
	0x72               goto 55
	0x73 - 0x7a (8)    goto 21

	match 30


state 49
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x64 (4)    goto 21
	0x65               goto 56
	0x66 - 0x7a (21)   goto 21

	match 30


state 50
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x74 (20)   goto 21
	0x75               goto 57
	0x76 - 0x7a (5)    goto 21

	match 30


state 51
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 1


state 52
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x6d (13)   goto 21
	0x6e               goto 58
	0x6f - 0x7a (12)   goto 21

	match 30


state 53
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x6d (13)   goto 21
	0x6e               goto 59
	0x6f - 0x7a (12)   goto 21

	match 30


state 54
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x6b (11)   goto 21
	0x6c               goto 60
	0x6d - 0x7a (14)   goto 21

	match 30


state 55
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 2


state 56
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 4


state 57
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x73 (19)   goto 21
	0x74               goto 61
	0x75 - 0x7a (6)    goto 21

	match 30


state 58
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 8


state 59
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x73 (19)   goto 21
	0x74               goto 62
	0x75 - 0x7a (6)    goto 21

	match 30


state 60
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x64 (4)    goto 21
	0x65               goto 63
	0x66 - 0x7a (21)   goto 21

	match 30


state 61
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 6


state 62
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 7


state 63
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 5


#############################################################################
# Summary
#############################################################################

1 start state(s)
34 expression(s), 63 state(s)


#############################################################################
# End of File
#############################################################################
