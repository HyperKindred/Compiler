
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 3 "parser.y"

#include "stdio.h"
#include "math.h"
#include "string.h"
#include "def.h"
extern int yylineno;
extern char *yytext;
extern FILE *yyin;
void yyerror(const char* fmt, ...);
void display(struct ASTNode *, int);
int yylex();


/* Line 189 of yacc.c  */
#line 87 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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

/* Line 214 of yacc.c  */
#line 16 "parser.y"

    int    type_int;
    float  type_float;
    char   type_char;
    char   type_id[32];
    struct ASTNode *ptr;



/* Line 214 of yacc.c  */
#line 203 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

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


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 228 "parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   270

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  58
/* YYNRULES -- Number of states.  */
#define YYNSTATES  116

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   325

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     6,     9,    13,    17,    21,    24,
      26,    28,    32,    34,    39,    43,    45,    49,    52,    57,
      58,    61,    65,    68,    69,    72,    74,    78,    84,    92,
      98,   108,   109,   112,   115,   119,   121,   125,   127,   131,
     135,   139,   143,   147,   151,   155,   159,   163,   167,   170,
     173,   176,   181,   185,   187,   189,   191,   193,   197
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      72,     0,    -1,    73,    -1,    -1,    74,    73,    -1,    75,
      76,    19,    -1,    75,    78,    81,    -1,    75,     4,    84,
      -1,     1,    19,    -1,     6,    -1,    77,    -1,    77,    20,
      76,    -1,     4,    -1,     4,    11,    79,    12,    -1,     4,
      11,    12,    -1,    80,    -1,    80,    20,    79,    -1,    75,
      77,    -1,    15,    86,    82,    16,    -1,    -1,    85,    82,
      -1,    17,    90,    18,    -1,    83,    84,    -1,    -1,    90,
      19,    -1,    81,    -1,    31,    90,    19,    -1,    29,    11,
      90,    12,    85,    -1,    29,    11,    90,    12,    85,    30,
      85,    -1,    65,    11,    90,    12,    85,    -1,    66,    11,
      90,    19,    90,    19,    90,    12,    85,    -1,    -1,    87,
      86,    -1,     1,    19,    -1,    75,    88,    19,    -1,    89,
      -1,    89,    20,    88,    -1,    77,    -1,    77,    25,    90,
      -1,    90,    25,    90,    -1,    90,    26,    90,    -1,    90,
      27,    90,    -1,    90,     5,    90,    -1,    90,    21,    90,
      -1,    90,    22,    90,    -1,    90,    23,    90,    -1,    90,
      24,    90,    -1,    11,    90,    12,    -1,    22,    90,    -1,
      28,    90,    -1,     9,    90,    -1,     4,    11,    91,    12,
      -1,     4,    11,    12,    -1,     4,    -1,     3,    -1,     8,
      -1,     7,    -1,    90,    20,    91,    -1,    90,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    51,    51,    53,    54,    57,    59,    62,    65,    67,
      73,    74,    77,    80,    82,    86,    88,    91,    95,    98,
      99,   103,   111,   118,   122,   124,   125,   127,   129,   131,
     133,   137,   138,   140,   142,   145,   147,   150,   151,   155,
     158,   160,   162,   165,   167,   169,   171,   173,   174,   176,
     178,   180,   182,   184,   186,   188,   190,   193,   196
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "ID", "RELOP", "TYPE", "CHAR",
  "FLOAT", "DPLUS", "DMINUS", "LP", "RP", "LB", "RB", "LC", "RC", "LS",
  "RS", "SEMI", "COMMA", "PLUS", "MINUS", "STAR", "DIV", "ASSIGNOP", "AND",
  "OR", "NOT", "IF", "ELSE", "RETURN", "STRUCT", "EXT_DEF_LIST",
  "EXT_VAR_DEF", "FUNC_DEF", "FUNC_DEC", "ARRAY_DEF", "EXT_DEC_LIST",
  "PARAM_LIST", "PARAM_DEC", "VAR_DEF", "DEC_LIST", "DEF_LIST", "COMP_STM",
  "STM_LIST", "EXP_STMT", "IF_THEN", "IF_THEN_ELSE", "INDICE", "INDICES",
  "FUNC_CALL", "ARGS", "FUNCTION", "PARAM", "ARG", "CALL", "LABEL", "GOTO",
  "JLT", "JLE", "JGT", "JGE", "EQ", "NEQ", "WHILE", "FOR", "CONTINUE",
  "BREAK", "UMINUS", "LOWER_THEN_ELSE", "$accept", "program", "ExtDefList",
  "ExtDef", "Specifier", "ExtDecList", "VarDec", "FuncDec", "VarList",
  "ParamDec", "CompSt", "StmList", "Indice", "Indices", "Stm", "DefList",
  "Def", "DecList", "Dec", "Exp", "Args", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    73,    73,    74,    74,    74,    74,    75,
      76,    76,    77,    78,    78,    79,    79,    80,    81,    82,
      82,    83,    84,    84,    85,    85,    85,    85,    85,    85,
      85,    86,    86,    86,    87,    88,    88,    89,    89,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    91,    91
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     3,     3,     3,     2,     1,
       1,     3,     1,     4,     3,     1,     3,     2,     4,     0,
       2,     3,     2,     0,     2,     1,     3,     5,     7,     5,
       9,     0,     2,     2,     3,     1,     3,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     4,     3,     1,     1,     1,     1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     9,     0,     2,     0,     0,     8,     1,     4,
      23,     0,    10,     0,     0,     0,    23,     7,     5,     0,
       0,     6,    14,     0,     0,    15,    54,    53,    56,    55,
       0,     0,     0,     0,     0,    22,    12,    11,     0,     0,
      19,     0,    17,    13,     0,     0,    50,     0,    48,    49,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    33,
      37,     0,    35,     0,     0,     0,     0,    25,     0,    19,
       0,    32,    16,    52,    58,     0,    47,    42,    43,    44,
      45,    46,    39,    40,    41,     0,    34,     0,     0,     0,
       0,     0,    18,    20,    24,     0,    51,    38,    36,     0,
      26,     0,     0,    57,     0,     0,     0,    27,    29,     0,
       0,     0,    28,     0,     0,    30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    11,    12,    13,    24,    25,
      67,    68,    16,    17,    69,    40,    41,    61,    62,    70,
      75
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -21
static const yytype_int16 yypact[] =
{
      68,     6,   -21,    32,   -21,    68,    29,   -21,   -21,   -21,
     127,    17,    28,    35,     2,    91,    38,   -21,   -21,    48,
      50,   -21,   -21,    48,    59,    40,   -21,    51,   -21,   -21,
      91,    91,    91,    91,    99,   -21,   -21,   -21,    58,    48,
      -2,    50,   -21,   -21,    76,    81,   -21,   106,   -21,   -21,
      91,   -21,    91,    91,    91,    91,    91,    91,    91,   -21,
      61,    64,    67,    86,    91,    90,    94,   -21,    92,    -2,
     129,   -21,   -21,   -21,   137,    95,   -21,     0,   -12,   -12,
     -21,   -21,   237,    23,   244,    91,   -21,    48,    91,   160,
      91,    91,   -21,   -21,   -21,    91,   -21,   229,   -21,   168,
     -21,   191,   183,   -21,    -2,    -2,    91,    80,   -21,   206,
      -2,    91,   -21,   214,    -2,   -21
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -21,   -21,   101,   -21,   -10,    93,   -20,   -21,    70,   -21,
     124,    71,   -21,   123,    31,   102,   -21,    62,   -21,   -15,
      72
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -32
static const yytype_int8 yytable[] =
{
      34,    26,    27,    42,    23,    28,    29,    30,     2,    31,
      39,    54,    55,    20,    22,    46,    47,    48,    49,    60,
      32,    52,    53,    54,    55,     7,    33,    63,    50,    64,
      74,    39,     8,    10,    23,    77,    18,    78,    79,    80,
      81,    82,    83,    84,    52,    53,    54,    55,    19,    89,
      20,    38,    36,   -31,   -31,    15,     2,   -31,   -31,   -31,
      44,   -31,    45,    65,    66,   -31,   -31,    60,    -3,     1,
      97,    43,   -31,    99,     2,   101,   102,    59,   -31,   -31,
      74,   -31,     2,    86,    26,    27,    85,    87,    28,    29,
      30,   109,    31,    73,    26,    27,   113,    88,    28,    29,
      30,    90,    31,    32,    50,    91,     9,    96,    92,    33,
     110,    50,    37,    32,    72,   -31,   -31,    51,    76,    33,
      52,    53,    54,    55,    56,    57,    58,    52,    53,    54,
      55,    56,    57,    58,    50,   107,   108,    21,    14,    35,
      93,   112,    50,    71,    15,   115,   -12,   -12,    94,    98,
      52,    53,    54,    55,    56,    57,    58,    95,    52,    53,
      54,    55,    56,    57,    58,    50,     0,   103,     0,     0,
       0,     0,     0,    50,     0,     0,     0,     0,     0,   100,
     104,    52,    53,    54,    55,    56,    57,    58,    50,    52,
      53,    54,    55,    56,    57,    58,    50,     0,     0,     0,
       0,     0,   106,   105,    52,    53,    54,    55,    56,    57,
      58,    50,    52,    53,    54,    55,    56,    57,    58,    50,
       0,     0,     0,     0,     0,   111,   114,    52,    53,    54,
      55,    56,    57,    58,    50,    52,    53,    54,    55,    56,
      57,    58,    50,     0,     0,     0,     0,     0,     0,    50,
      52,    53,    54,    55,    56,    57,    58,     0,    52,    53,
      54,    55,     0,    57,    58,    52,    53,    54,    55,     0,
      57
};

static const yytype_int8 yycheck[] =
{
      15,     3,     4,    23,    14,     7,     8,     9,     6,    11,
      20,    23,    24,    15,    12,    30,    31,    32,    33,    39,
      22,    21,    22,    23,    24,    19,    28,    29,     5,    31,
      45,    41,     0,     4,    44,    50,    19,    52,    53,    54,
      55,    56,    57,    58,    21,    22,    23,    24,    20,    64,
      15,     1,     4,     3,     4,    17,     6,     7,     8,     9,
      20,    11,    11,    65,    66,    15,    16,    87,     0,     1,
      85,    12,    22,    88,     6,    90,    91,    19,    28,    29,
      95,    31,     6,    19,     3,     4,    25,    20,     7,     8,
       9,   106,    11,    12,     3,     4,   111,    11,     7,     8,
       9,    11,    11,    22,     5,    11,     5,    12,    16,    28,
      30,     5,    19,    22,    44,    65,    66,    18,    12,    28,
      21,    22,    23,    24,    25,    26,    27,    21,    22,    23,
      24,    25,    26,    27,     5,   104,   105,    13,    11,    16,
      69,   110,     5,    41,    17,   114,    19,    20,    19,    87,
      21,    22,    23,    24,    25,    26,    27,    20,    21,    22,
      23,    24,    25,    26,    27,     5,    -1,    95,    -1,    -1,
      -1,    -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,    19,
      12,    21,    22,    23,    24,    25,    26,    27,     5,    21,
      22,    23,    24,    25,    26,    27,     5,    -1,    -1,    -1,
      -1,    -1,    19,    12,    21,    22,    23,    24,    25,    26,
      27,     5,    21,    22,    23,    24,    25,    26,    27,     5,
      -1,    -1,    -1,    -1,    -1,    19,    12,    21,    22,    23,
      24,    25,    26,    27,     5,    21,    22,    23,    24,    25,
      26,    27,     5,    -1,    -1,    -1,    -1,    -1,    -1,     5,
      21,    22,    23,    24,    25,    26,    27,    -1,    21,    22,
      23,    24,    -1,    26,    27,    21,    22,    23,    24,    -1,
      26
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     6,    72,    73,    74,    75,    19,     0,    73,
       4,    76,    77,    78,    11,    17,    83,    84,    19,    20,
      15,    81,    12,    75,    79,    80,     3,     4,     7,     8,
       9,    11,    22,    28,    90,    84,     4,    76,     1,    75,
      86,    87,    77,    12,    20,    11,    90,    90,    90,    90,
       5,    18,    21,    22,    23,    24,    25,    26,    27,    19,
      77,    88,    89,    29,    31,    65,    66,    81,    82,    85,
      90,    86,    79,    12,    90,    91,    12,    90,    90,    90,
      90,    90,    90,    90,    90,    25,    19,    20,    11,    90,
      11,    11,    16,    82,    19,    20,    12,    90,    88,    90,
      19,    90,    90,    91,    12,    12,    19,    85,    85,    90,
      30,    19,    85,    90,    12,    85
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[2];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 51 "parser.y"
    { display((yyvsp[(1) - (1)].ptr),0); semantic_Analysis0((yyvsp[(1) - (1)].ptr));;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 53 "parser.y"
    {(yyval.ptr)=NULL;;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 54 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=EXT_DEF_LIST;
                               (yyval.ptr)->pos=yylineno;   (yyval.ptr)->ptr[0]=(yyvsp[(1) - (2)].ptr);(yyval.ptr)->ptr[1]=(yyvsp[(2) - (2)].ptr);;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 57 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=EXT_VAR_DEF;
                               (yyval.ptr)->pos=yylineno;   (yyval.ptr)->ptr[0]=(yyvsp[(1) - (3)].ptr);(yyval.ptr)->ptr[1]=(yyvsp[(2) - (3)].ptr);;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 59 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=FUNC_DEF;  
                                (yyval.ptr)->ptr[0]=(yyvsp[(1) - (3)].ptr);(yyval.ptr)->ptr[1]=(yyvsp[(2) - (3)].ptr);(yyval.ptr)->ptr[2]=(yyvsp[(3) - (3)].ptr);
		(yyval.ptr)->pos=(yyval.ptr)->ptr[2]->pos=(yyval.ptr)->ptr[0]->pos;  ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 62 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=ARRAY_DEF;
                                (yyval.ptr)->ptr[0] = (yyvsp[(1) - (3)].ptr);(yyval.ptr)->ptr[1] = (yyvsp[(2) - (3)].type_id);(yyval.ptr)->ptr[2] = (yyvsp[(3) - (3)].ptr);
                                (yyval.ptr)->pos = yylineno;;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 65 "parser.y"
    {(yyval.ptr)=NULL;;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 67 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=TYPE;             //生成类型结点，目前仅基本类型
	             (yyval.ptr)->pos=yylineno; strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (1)].type_id));
                     (yyval.ptr)->type = !strcmp((yyvsp[(1) - (1)].type_id), "int") ? INT :
                                !strcmp((yyvsp[(1) - (1)].type_id), "float") ? FLOAT : CHAR;;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 73 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 74 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=EXT_DEC_LIST;
                                                           (yyval.ptr)->pos=yylineno;   (yyval.ptr)->ptr[0]=(yyvsp[(1) - (3)].ptr);(yyval.ptr)->ptr[2]=(yyvsp[(3) - (3)].ptr);;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 77 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=ID;
                               (yyval.ptr)->pos=yylineno; strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (1)].type_id));;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 80 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=FUNC_DEC;
                               (yyval.ptr)->pos=yylineno;   strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (4)].type_id)); (yyval.ptr)->ptr[0]=(yyvsp[(3) - (4)].ptr);;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 82 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=FUNC_DEC;
                               (yyval.ptr)->pos=yylineno;   strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (3)].type_id)); (yyval.ptr)->ptr[0]=NULL;;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 86 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=PARAM_LIST;
                               (yyval.ptr)->pos=yylineno;   (yyval.ptr)->ptr[0]=(yyvsp[(1) - (1)].ptr);(yyval.ptr)->ptr[1]=NULL;;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 88 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=PARAM_LIST;
                               (yyval.ptr)->pos=yylineno;   (yyval.ptr)->ptr[0]=(yyvsp[(1) - (3)].ptr);(yyval.ptr)->ptr[1]=(yyvsp[(3) - (3)].ptr);;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 91 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=PARAM_DEC;
                                                (yyval.ptr)->pos=yylineno;   (yyval.ptr)->ptr[0]=(yyvsp[(1) - (2)].ptr);(yyval.ptr)->ptr[1]=(yyvsp[(2) - (2)].ptr);;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 95 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=COMP_STM; 
                                                (yyval.ptr)->pos=(yyvsp[(2) - (4)].ptr)?(yyvsp[(2) - (4)].ptr)->pos:((yyvsp[(3) - (4)].ptr)?(yyvsp[(3) - (4)].ptr)->pos:yylineno);   (yyval.ptr)->ptr[0]=(yyvsp[(2) - (4)].ptr);(yyval.ptr)->ptr[1]=(yyvsp[(3) - (4)].ptr);;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 98 "parser.y"
    {(yyval.ptr)=NULL; ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 99 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=STM_LIST;  
                                      if((yyvsp[(1) - (2)].ptr)) (yyval.ptr)->pos=(yyvsp[(1) - (2)].ptr)->pos;else (yyval.ptr)->pos=yylineno;   (yyval.ptr)->ptr[0]=(yyvsp[(1) - (2)].ptr);(yyval.ptr)->ptr[1]=(yyvsp[(2) - (2)].ptr);;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 103 "parser.y"
    {
        (yyval.ptr) = (struct ASTNode *)malloc(sizeof(struct ASTNode));
        (yyval.ptr)->kind = INDICE; 
        (yyval.ptr)->pos = yylineno;
        (yyval.ptr)->ptr[0] = (yyvsp[(2) - (3)].ptr);
    ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 111 "parser.y"
    {
        (yyval.ptr) = (struct ASTNode *)malloc(sizeof(struct ASTNode));
        (yyval.ptr)->kind = INDICES;  // 确保你有一个定义的类型 `INDICES`
        (yyval.ptr)->pos = yylineno;
        (yyval.ptr)->ptr[0] = (yyvsp[(1) - (2)].ptr);  // 第一个 Indice
        (yyval.ptr)->ptr[1] = (yyvsp[(2) - (2)].ptr);  // 剩余的 Indices
    ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 118 "parser.y"
    {
        (yyval.ptr) = NULL;
    ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 122 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=EXP_STMT; 
                               (yyval.ptr)->pos=yylineno;   (yyval.ptr)->ptr[0]=(yyvsp[(1) - (2)].ptr);;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 124 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);   ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 125 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=RETURN; 
                                          (yyval.ptr)->pos=yylineno;   (yyval.ptr)->ptr[0]=(yyvsp[(2) - (3)].ptr);;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 127 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=IF_THEN;
                                          (yyval.ptr)->pos=(yyvsp[(3) - (5)].ptr)->pos;   (yyval.ptr)->ptr[0]=(yyvsp[(3) - (5)].ptr); (yyval.ptr)->ptr[1]=(yyvsp[(5) - (5)].ptr);;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 129 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=IF_THEN_ELSE;
                                          (yyval.ptr)->pos=(yyvsp[(3) - (7)].ptr)->pos;   (yyval.ptr)->ptr[0]=(yyvsp[(3) - (7)].ptr); (yyval.ptr)->ptr[1]=(yyvsp[(5) - (7)].ptr);(yyval.ptr)->ptr[2]=(yyvsp[(7) - (7)].ptr);;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 131 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=WHILE;
                                               (yyval.ptr)->pos=(yyvsp[(3) - (5)].ptr)->pos;   (yyval.ptr)->ptr[0]=(yyvsp[(3) - (5)].ptr); (yyval.ptr)->ptr[1]=(yyvsp[(5) - (5)].ptr);;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 133 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=FOR;
                                          (yyval.ptr)->pos=(yyvsp[(3) - (9)].ptr)->pos;   (yyval.ptr)->ptr[0]=(yyvsp[(3) - (9)].ptr);(yyval.ptr)->ptr[1]=(yyvsp[(5) - (9)].ptr);(yyval.ptr)->ptr[2]=(yyvsp[(7) - (9)].ptr);(yyval.ptr)->ptr[3]=(yyvsp[(9) - (9)].ptr);;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 137 "parser.y"
    {(yyval.ptr)=NULL; ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 138 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=DEF_LIST;   
                    if ((yyvsp[(1) - (2)].ptr)) (yyval.ptr)->pos=(yyvsp[(1) - (2)].ptr)->pos; else (yyval.ptr)->pos=yylineno;     (yyval.ptr)->ptr[0]=(yyvsp[(1) - (2)].ptr);(yyval.ptr)->ptr[1]=(yyvsp[(2) - (2)].ptr);;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 140 "parser.y"
    {(yyval.ptr)=NULL;;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 142 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=VAR_DEF;  
                                          (yyval.ptr)->pos=yylineno;   (yyval.ptr)->ptr[0]=(yyvsp[(1) - (3)].ptr);(yyval.ptr)->ptr[1]=(yyvsp[(2) - (3)].ptr);;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 145 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=DEC_LIST;
                                          (yyval.ptr)->pos=yylineno;   (yyval.ptr)->ptr[0]=(yyvsp[(1) - (1)].ptr);(yyval.ptr)->ptr[1]=NULL;;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 147 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=DEC_LIST;
                                          (yyval.ptr)->pos=yylineno;   (yyval.ptr)->ptr[0]=(yyvsp[(1) - (3)].ptr);(yyval.ptr)->ptr[1]=(yyvsp[(3) - (3)].ptr);;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 150 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 151 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=ASSIGNOP;
                                          (yyval.ptr)->pos=yylineno;   (yyval.ptr)->ptr[0]=(yyvsp[(1) - (3)].ptr);(yyval.ptr)->ptr[1]=(yyvsp[(3) - (3)].ptr);;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 155 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=ASSIGNOP;
                                             (yyval.ptr)->pos=yylineno;   (yyval.ptr)->ptr[0]=(yyvsp[(1) - (3)].ptr);(yyval.ptr)->ptr[1]=(yyvsp[(3) - (3)].ptr);strcpy((yyval.ptr)->type_id,"ASSIGNOP");;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 158 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=AND;
                                (yyval.ptr)->pos=yylineno;   (yyval.ptr)->ptr[0]=(yyvsp[(1) - (3)].ptr);(yyval.ptr)->ptr[1]=(yyvsp[(3) - (3)].ptr);strcpy((yyval.ptr)->type_id,"AND");;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 160 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=OR;
                                (yyval.ptr)->pos=yylineno;   (yyval.ptr)->ptr[0]=(yyvsp[(1) - (3)].ptr);(yyval.ptr)->ptr[1]=(yyvsp[(3) - (3)].ptr);strcpy((yyval.ptr)->type_id,"OR");;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 162 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=RELOP;
                                (yyval.ptr)->pos=yylineno;   (yyval.ptr)->ptr[0]=(yyvsp[(1) - (3)].ptr);(yyval.ptr)->ptr[1]=(yyvsp[(3) - (3)].ptr);
                                strcpy((yyval.ptr)->type_id,(yyvsp[(2) - (3)].type_id));;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 165 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=PLUS;
                                (yyval.ptr)->pos=yylineno;   (yyval.ptr)->ptr[0]=(yyvsp[(1) - (3)].ptr);(yyval.ptr)->ptr[1]=(yyvsp[(3) - (3)].ptr);strcpy((yyval.ptr)->type_id,"PLUS");;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 167 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=MINUS;
                                (yyval.ptr)->pos=yylineno;   (yyval.ptr)->ptr[0]=(yyvsp[(1) - (3)].ptr);(yyval.ptr)->ptr[1]=(yyvsp[(3) - (3)].ptr);strcpy((yyval.ptr)->type_id,"MINUS");;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 169 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=STAR;
                                (yyval.ptr)->pos=yylineno;   (yyval.ptr)->ptr[0]=(yyvsp[(1) - (3)].ptr);(yyval.ptr)->ptr[1]=(yyvsp[(3) - (3)].ptr);strcpy((yyval.ptr)->type_id,"STAR");;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 171 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=DIV;
                                (yyval.ptr)->pos=yylineno;   (yyval.ptr)->ptr[0]=(yyvsp[(1) - (3)].ptr);(yyval.ptr)->ptr[1]=(yyvsp[(3) - (3)].ptr);strcpy((yyval.ptr)->type_id,"DIV");;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 173 "parser.y"
    {(yyval.ptr)=(yyvsp[(2) - (3)].ptr);;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 174 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=UMINUS;
                                (yyval.ptr)->pos=yylineno;   (yyval.ptr)->ptr[0]=(yyvsp[(2) - (2)].ptr);strcpy((yyval.ptr)->type_id,"UMINUS");;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 176 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=NOT;
                                (yyval.ptr)->pos=yylineno;   (yyval.ptr)->ptr[0]=(yyvsp[(2) - (2)].ptr);strcpy((yyval.ptr)->type_id,"NOT");;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 178 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=DPLUS;strcpy((yyval.ptr)->type_id,"DPLUS");
                                  (yyval.ptr)->pos=yylineno;   (yyval.ptr)->ptr[0]=(yyvsp[(2) - (2)].ptr);;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 180 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=FUNC_CALL;
                                (yyval.ptr)->pos=yylineno; strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (4)].type_id));  (yyval.ptr)->ptr[0]=(yyvsp[(3) - (4)].ptr);;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 182 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=FUNC_CALL;
                                (yyval.ptr)->pos=yylineno; strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (3)].type_id));  (yyval.ptr)->ptr[0]=NULL;;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 184 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=ID;
                               (yyval.ptr)->pos=yylineno;  strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (1)].type_id));;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 186 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=INT;
                               (yyval.ptr)->pos=yylineno;  (yyval.ptr)->type=INT;(yyval.ptr)->type_int=(yyvsp[(1) - (1)].type_int);;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 188 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=FLOAT;
                               (yyval.ptr)->pos=yylineno; (yyval.ptr)->type=FLOAT; (yyval.ptr)->type_float=(yyvsp[(1) - (1)].type_float);;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 190 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=CHAR;
                                (yyval.ptr)->pos=yylineno;  (yyval.ptr)->type=CHAR;(yyval.ptr)->type_char=(yyvsp[(1) - (1)].type_char);;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 193 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=ARGS;
                                               (yyval.ptr)->pos=yylineno;  (yyval.ptr)->ptr[0]=(yyvsp[(1) - (3)].ptr);(yyval.ptr)->ptr[1]=(yyvsp[(3) - (3)].ptr);;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 196 "parser.y"
    {(yyval.ptr)=(struct ASTNode *)malloc(sizeof(struct ASTNode)); (yyval.ptr)->kind=ARGS;
                               (yyval.ptr)->pos=yylineno;  (yyval.ptr)->ptr[0]=(yyvsp[(1) - (1)].ptr);(yyval.ptr)->ptr[1]=NULL;;}
    break;



/* Line 1455 of yacc.c  */
#line 2058 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, &yylloc);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[0] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 201 "parser.y"


int main(int argc, char *argv[]){
	yyin=fopen(argv[1],"r");
	if (!yyin) return 0;
	yylineno=1;
	yyparse();
	return 0;
	}
#include<stdarg.h>
void yyerror(const char* fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    fprintf(stderr, "Grammar Error at Line %d Column %d: ", yylloc.first_line,yylloc.first_column);
    vfprintf(stderr, fmt, ap);
    fprintf(stderr, ".\n");
}
