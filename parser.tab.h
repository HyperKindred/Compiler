
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     ID = 259,
     RELOP = 260,
     TYPE = 261,
     CHAR = 262,
     FLOAT = 263,
     DPLUS = 264,
     DMINUS = 265,
     LP = 266,
     RP = 267,
     LB = 268,
     RB = 269,
     LC = 270,
     RC = 271,
     LS = 272,
     RS = 273,
     SEMI = 274,
     COMMA = 275,
     PLUS = 276,
     MINUS = 277,
     STAR = 278,
     DIV = 279,
     ASSIGNOP = 280,
     AND = 281,
     OR = 282,
     NOT = 283,
     IF = 284,
     ELSE = 285,
     RETURN = 286,
     STRUCT = 287,
     EXT_DEF_LIST = 288,
     EXT_VAR_DEF = 289,
     FUNC_DEF = 290,
     FUNC_DEC = 291,
     ARRAY_DEF = 292,
     EXT_DEC_LIST = 293,
     PARAM_LIST = 294,
     PARAM_DEC = 295,
     VAR_DEF = 296,
     DEC_LIST = 297,
     DEF_LIST = 298,
     COMP_STM = 299,
     STM_LIST = 300,
     EXP_STMT = 301,
     IF_THEN = 302,
     IF_THEN_ELSE = 303,
     INDICE = 304,
     INDICES = 305,
     FUNC_CALL = 306,
     ARGS = 307,
     FUNCTION = 308,
     PARAM = 309,
     ARG = 310,
     CALL = 311,
     LABEL = 312,
     GOTO = 313,
     JLT = 314,
     JLE = 315,
     JGT = 316,
     JGE = 317,
     EQ = 318,
     NEQ = 319,
     WHILE = 320,
     FOR = 321,
     CONTINUE = 322,
     BREAK = 323,
     UMINUS = 324,
     LOWER_THEN_ELSE = 325
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 16 "parser.y"

    int    type_int;
    float  type_float;
    char   type_char;
    char   type_id[32];
    struct ASTNode *ptr;



/* Line 1676 of yacc.c  */
#line 132 "parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif

extern YYLTYPE yylloc;

