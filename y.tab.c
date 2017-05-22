#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140101

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 1 "parser.y"

	#include <stdio.h>
	#include <stdlib.h>
	#include "SymbolTable.h"
	extern int num_lines;
	extern char *yytext;
	extern char str[300];
	int functionNum = 0;
	int yyerror(char *msg);

#line 30 "y.tab.c"

#ifndef YYSTYPE
typedef int YYSTYPE;
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define IDENTIFIER 257
#define INT_P 258
#define DOUBLE_P 259
#define SCIEN_P 260
#define CHAR_P 261
#define STR_P 262
#define VOID 263
#define INT 264
#define DOUBLE 265
#define BOOL 266
#define CHAR 267
#define NUL 268
#define FOR 269
#define WHILE 270
#define DO 271
#define IF 272
#define ELSE 273
#define SWITCH 274
#define RETURN 275
#define BREAK 276
#define CONTINUE 277
#define CONST 278
#define STRUCT 279
#define TRUE 280
#define FALSE 281
#define CASE 282
#define DEFAULT 283
#define PLUS2 284
#define MINUS2 285
#define MUL 286
#define DIV 287
#define MOD 288
#define PLUS 289
#define MINUS 290
#define AND2 291
#define OR2 292
#define N 293
#define NEQ 294
#define SLT 295
#define BLT 296
#define SLTE 297
#define BLTE 298
#define EE 299
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    1,    1,    2,    2,    3,    3,    7,    7,
    8,    9,    9,   10,   10,   10,   10,    6,    6,   14,
   14,   11,   15,   15,   13,   13,   16,   16,    4,    4,
    4,    4,    4,    5,    5,   17,   17,   18,   18,   19,
   19,   20,   22,   22,   23,   23,   21,   21,   21,   21,
   12,   24,   24,   25,   25,   26,   26,   27,   27,   27,
   27,   27,   27,   27,   28,   28,   28,   29,   29,   29,
   29,   30,   30,   31,   31,   31,   32,   32,   32,   32,
   32,   32,   32,   32,   32,
};
static const short yylen[] = {                            2,
    1,    2,    1,    1,    5,    6,    1,    1,    5,    6,
    3,    1,    3,    1,    1,    3,    3,    1,    3,    2,
    2,    2,    3,    4,    2,    3,    1,    3,    1,    1,
    1,    1,    1,    2,    3,    1,    2,    1,    1,    1,
    1,    4,    1,    2,    3,    4,    2,    2,    2,    3,
    1,    1,    3,    1,    3,    1,    2,    1,    3,    3,
    3,    3,    3,    3,    1,    3,    3,    1,    3,    3,
    3,    1,    2,    1,    2,    2,    1,    1,    1,    1,
    1,    1,    3,    3,    4,
};
static const short yydefred[] = {                         0,
   33,   29,   32,   31,   30,    0,    1,    3,    4,    0,
    7,    8,    2,    0,    0,   12,    0,    0,    0,    0,
    0,   11,    0,    0,    0,    0,    0,   18,    0,   78,
   79,   81,   80,   82,    0,    0,    0,   16,   77,    0,
    0,   54,    0,    0,    0,   68,   72,    0,    0,    0,
    0,   13,    0,   17,    9,    0,    5,    0,   21,    0,
    0,    0,    0,    0,   73,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   75,   76,   23,    0,   25,   27,    0,    0,    0,    0,
    0,   34,   38,    0,    0,   36,   39,   40,   41,    0,
   10,    6,   19,   84,    0,    0,    0,   83,    0,   55,
    0,    0,    0,    0,    0,    0,    0,    0,   69,   70,
   71,   24,    0,   26,   49,    0,   48,   47,    0,   35,
   37,    0,   85,   45,    0,   28,   50,    0,    0,   46,
    0,    0,   42,    0,
};
static const short yydgoto[] = {                          6,
    7,    8,    9,   26,   57,   27,   11,   12,   15,   16,
   17,   86,   54,   28,   21,   87,   95,   96,   97,   98,
   99,   39,   64,   40,   41,   42,   43,   44,   45,   46,
   47,   48,
};
static const short yysindex[] = {                      -123,
    0,    0,    0,    0,    0, -123,    0,    0,    0, -242,
    0,    0,    0,  -29,  -31,    0,   27,  -40,  162, -231,
  -17,    0, -207,  -33,  -47, -165,  -15,    0,  -36,    0,
    0,    0,    0,    0,  212,  199,  162,    0,    0, -196,
 -192,    0,  168, -252, -175,    0,    0, -182,   15, -152,
  -44,    0,  143,    0,    0,  -90,    0,   33,    0,  -45,
 -123,  149,  162,   37,    0,  168,   92,  162,  162,  199,
  199,  199,  199,  199,  199,  199,  199,  199,  199,  199,
    0,    0,    0,   41,    0,    0,  -38,   61,  155,   89,
   94,    0,    0, -102,  -60,    0,    0,    0,    0,   96,
    0,    0,    0,    0,   13,   63,  162,    0, -192,    0,
 -252, -252, -252, -252, -252, -252, -175, -175,    0,    0,
    0,    0,  162,    0,    0,   99,    0,    0,  -18,    0,
    0,  162,    0,    0,   67,    0,    0,  -32,  103,    0,
  104,   20,    0,  106,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -13,    0,    0,   -8,    0,    0,    0,
  -20,    0,    0,    0,    0,    0,    0,    0,  -25,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -34,
  384,    0,   22,   36,    1,    0,    0,  -11,    0,    0,
  -13,    0,    0,    0,    0,    0,    0,   28,    0,    0,
    0,    0,    0,  -41,    0,  105,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  107,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  385,    0,
   45,   57,   66,   76,   86,   95,   12,   26,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  -13,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
  160,    0,  -16,    2,  111,   34,    0,    0,    0,  157,
  152,  -14,    0,  120,    0,  122,    0,   97,    0,    0,
    0,  -12,    0,    0,  125,  127,  158,  409,   55,   43,
  164,    0,
};
#define YYTABLESIZE 677
static const short yytable[] = {                         44,
   25,   10,   44,   62,   38,  123,   51,   10,  141,   51,
   18,   55,   23,  101,   14,   43,   19,   44,   43,   44,
   22,  138,   67,   22,   51,   60,   49,   22,   61,   74,
   14,   19,   74,   43,   92,   15,   76,   77,   22,   93,
   22,   65,   19,  100,   65,   14,   20,   74,  106,   51,
   15,   44,   66,  133,   63,   66,  123,   94,   51,   65,
  144,   20,   56,   61,  130,   56,   67,   43,   20,   67,
   66,   20,   20,   50,  126,   56,   58,   56,   93,   58,
   56,   74,  100,   44,   67,   64,  124,   24,   64,   53,
   51,   58,  135,   65,   58,   68,   94,   59,   69,   43,
   59,   81,   82,   64,   66,   84,   63,   83,  136,   63,
   78,   79,   80,   74,   56,   59,   60,  139,   67,   60,
  119,  120,  121,   20,   63,   65,   62,  107,   58,   62,
  117,  118,  108,  122,   60,   61,   66,   64,   61,    1,
    2,    3,    4,    5,   62,   57,   56,  127,   57,   59,
   67,   63,  128,   61,  129,  134,  132,  137,   63,  140,
   58,  143,   55,   57,  101,   13,   88,   43,   60,   64,
  102,  142,    1,    2,    3,    4,    5,   59,   62,   52,
  103,   59,   37,  105,   89,   90,   91,   61,   37,  104,
   63,  131,  109,   66,   37,  110,   88,   57,   65,    0,
   60,   37,    1,    2,    3,    4,    5,    0,    0,    0,
   62,    0,    0,  125,   89,   90,   91,    0,    0,   61,
    0,    0,    1,    2,    3,    4,    5,    0,    0,   57,
    1,    2,    3,    4,    5,    0,    0,    0,   37,    0,
    0,    0,   44,   44,   44,   44,   44,   44,   44,   44,
   44,   37,   44,   44,   44,   44,   44,   44,   43,   43,
   43,   43,   43,   43,   43,   43,   43,   85,   43,   43,
   43,   43,   43,   43,   74,   74,   74,   74,   74,   74,
   74,    0,   74,   74,   74,   74,   74,   74,    0,   65,
   65,   65,   65,    0,   65,   65,   65,   65,   65,   65,
   66,   66,   66,   66,    0,   66,   66,   66,   66,   66,
   66,    0,   56,   56,   67,   67,   67,   67,    0,   67,
   67,   67,   67,   67,   67,    0,   58,   58,    0,   58,
   58,   58,   58,   58,   58,   64,   64,    0,   64,   64,
   64,   64,   64,   64,    0,    0,    0,   59,   59,    0,
   59,   59,   59,   59,   59,   59,   63,   63,    0,   63,
   63,   63,   63,   63,   63,    0,   60,   60,    0,   60,
   60,   60,   60,   60,   60,    0,   62,   62,    0,   62,
   62,   62,   62,   62,   62,   61,   61,    0,   61,   61,
   61,   61,   61,   61,    0,   57,   57,    0,    0,   29,
   30,   31,   32,   33,   34,   29,   30,   31,   32,   33,
   34,   29,   30,   31,   32,   33,   34,    0,   29,   30,
   31,   32,   33,   34,   52,   53,    0,   52,   53,    0,
    0,    0,   35,    0,    0,   36,    0,    0,   35,    0,
    0,   36,   52,   53,   35,    0,    0,   36,    0,    0,
    0,   35,    0,    0,   36,   29,   30,   31,   32,   33,
   34,   70,   71,   72,   73,   74,   75,    0,   29,   30,
   31,   32,   33,   34,    0,    0,   52,   53,  111,  112,
  113,  114,  115,  116,    0,    0,    0,    0,   35,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   52,   53,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   52,   53,
};
static const short yycheck[] = {                         41,
   41,    0,   44,   40,   19,   44,   41,    6,   41,   44,
   40,   59,   44,   59,  257,   41,   61,   59,   44,   61,
   41,   40,   37,   44,   59,   41,  258,   59,   44,   41,
   44,   61,   44,   59,  125,   44,  289,  290,   59,   56,
   61,   41,   61,   56,   44,   59,   91,   59,   63,  257,
   59,   93,   41,   41,   91,   44,   44,   56,   93,   59,
   41,   91,   41,   44,  125,   44,   41,   93,   41,   44,
   59,   44,   91,   91,   89,  123,   41,  123,   95,   44,
   59,   93,   95,  125,   59,   41,  125,   61,   44,  123,
  125,  257,  107,   93,   59,  292,   95,   41,  291,  125,
   44,  284,  285,   59,   93,  258,   41,   93,  123,   44,
  286,  287,  288,  125,   93,   59,   41,  132,   93,   44,
   78,   79,   80,   91,   59,  125,   41,   91,   93,   44,
   76,   77,   41,   93,   59,   41,  125,   93,   44,  263,
  264,  265,  266,  267,   59,   41,  125,   59,   44,   93,
  125,   91,   59,   59,  257,   93,   61,   59,   93,   93,
  125,   59,   59,   59,   59,    6,  257,   61,   93,  125,
   60,  138,  263,  264,  265,  266,  267,   26,   93,   23,
   61,  125,   40,   62,  275,  276,  277,   93,   40,   41,
  125,   95,   68,   36,   40,   69,  257,   93,   35,   -1,
  125,   40,  263,  264,  265,  266,  267,   -1,   -1,   -1,
  125,   -1,   -1,   59,  275,  276,  277,   -1,   -1,  125,
   -1,   -1,  263,  264,  265,  266,  267,   -1,   -1,  125,
  263,  264,  265,  266,  267,   -1,   -1,   -1,   40,   -1,
   -1,   -1,  284,  285,  286,  287,  288,  289,  290,  291,
  292,   40,  294,  295,  296,  297,  298,  299,  284,  285,
  286,  287,  288,  289,  290,  291,  292,  125,  294,  295,
  296,  297,  298,  299,  286,  287,  288,  289,  290,  291,
  292,   -1,  294,  295,  296,  297,  298,  299,   -1,  289,
  290,  291,  292,   -1,  294,  295,  296,  297,  298,  299,
  289,  290,  291,  292,   -1,  294,  295,  296,  297,  298,
  299,   -1,  291,  292,  289,  290,  291,  292,   -1,  294,
  295,  296,  297,  298,  299,   -1,  291,  292,   -1,  294,
  295,  296,  297,  298,  299,  291,  292,   -1,  294,  295,
  296,  297,  298,  299,   -1,   -1,   -1,  291,  292,   -1,
  294,  295,  296,  297,  298,  299,  291,  292,   -1,  294,
  295,  296,  297,  298,  299,   -1,  291,  292,   -1,  294,
  295,  296,  297,  298,  299,   -1,  291,  292,   -1,  294,
  295,  296,  297,  298,  299,  291,  292,   -1,  294,  295,
  296,  297,  298,  299,   -1,  291,  292,   -1,   -1,  257,
  258,  259,  260,  261,  262,  257,  258,  259,  260,  261,
  262,  257,  258,  259,  260,  261,  262,   -1,  257,  258,
  259,  260,  261,  262,   41,   41,   -1,   44,   44,   -1,
   -1,   -1,  290,   -1,   -1,  293,   -1,   -1,  290,   -1,
   -1,  293,   59,   59,  290,   -1,   -1,  293,   -1,   -1,
   -1,  290,   -1,   -1,  293,  257,  258,  259,  260,  261,
  262,  294,  295,  296,  297,  298,  299,   -1,  257,  258,
  259,  260,  261,  262,   -1,   -1,   93,   93,   70,   71,
   72,   73,   74,   75,   -1,   -1,   -1,   -1,  290,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  125,  125,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  292,  292,
};
#define YYFINAL 6
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 299
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? (YYMAXTOKEN + 1) : (a))
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"'('","')'",0,0,"','",0,0,0,0,0,0,0,0,0,0,0,0,0,0,"';'",0,"'='",0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'['",0,"']'",0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,"'}'",0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,"IDENTIFIER","INT_P","DOUBLE_P","SCIEN_P","CHAR_P","STR_P","VOID","INT",
"DOUBLE","BOOL","CHAR","NUL","FOR","WHILE","DO","IF","ELSE","SWITCH","RETURN",
"BREAK","CONTINUE","CONST","STRUCT","TRUE","FALSE","CASE","DEFAULT","PLUS2",
"MINUS2","MUL","DIV","MOD","PLUS","MINUS","AND2","OR2","N","NEQ","SLT","BLT",
"SLTE","BLTE","EE","illegal-symbol",
};
static const char *yyrule[] = {
"$accept : Program",
"Program : Pre_Dec",
"Program : Program Pre_Dec",
"Pre_Dec : Func_Def",
"Pre_Dec : Dec",
"Func_Def : Re_Type_Spec IDENTIFIER '(' ')' Main_Content_Func",
"Func_Def : Re_Type_Spec IDENTIFIER '(' Para_List ')' Main_Content_Func",
"Dec : Func_Dec",
"Dec : Normal_Dec",
"Func_Dec : Re_Type_Spec IDENTIFIER '(' ')' ';'",
"Func_Dec : Re_Type_Spec IDENTIFIER '(' Para_List ')' ';'",
"Normal_Dec : Re_Type_Spec Normal_Dec_List ';'",
"Normal_Dec_List : Normal_Dec_One",
"Normal_Dec_List : Normal_Dec_List ',' Normal_Dec_One",
"Normal_Dec_One : IDENTIFIER",
"Normal_Dec_One : Array",
"Normal_Dec_One : IDENTIFIER '=' Exp",
"Normal_Dec_One : Array '=' Array_Cont",
"Para_List : Para",
"Para_List : Para_List ',' Para",
"Para : Re_Type_Spec IDENTIFIER",
"Para : Re_Type_Spec Array",
"Array : IDENTIFIER Array_P",
"Array_P : '[' INT_P ']'",
"Array_P : Array_P '[' INT_P ']'",
"Array_Cont : '{' '}'",
"Array_Cont : '{' Exp_List '}'",
"Exp_List : Exp",
"Exp_List : Exp_List ',' Exp",
"Re_Type_Spec : INT",
"Re_Type_Spec : CHAR",
"Re_Type_Spec : BOOL",
"Re_Type_Spec : DOUBLE",
"Re_Type_Spec : VOID",
"Main_Content_Func : '{' '}'",
"Main_Content_Func : '{' Main_Block_List '}'",
"Main_Block_List : Main_Block",
"Main_Block_List : Main_Block_List Main_Block",
"Main_Block : Dec",
"Main_Block : Statement",
"Statement : Simple_S",
"Statement : End_S",
"Simple_S : Var '=' Exp ';'",
"Var : IDENTIFIER",
"Var : IDENTIFIER Array_Exp",
"Array_Exp : '[' Exp ']'",
"Array_Exp : Array_Exp '[' Exp ']'",
"End_S : CONTINUE ';'",
"End_S : BREAK ';'",
"End_S : RETURN ';'",
"End_S : RETURN Exp ';'",
"Exp : Log_Or_Exp",
"Log_Or_Exp : Log_And_Exp",
"Log_Or_Exp : Log_Or_Exp OR2 Log_And_Exp",
"Log_And_Exp : Log_Not_Exp",
"Log_And_Exp : Log_And_Exp AND2 Log_Not_Exp",
"Log_Not_Exp : Com_Exp",
"Log_Not_Exp : N Com_Exp",
"Com_Exp : Add_Min_Exp",
"Com_Exp : Com_Exp SLT Add_Min_Exp",
"Com_Exp : Com_Exp SLTE Add_Min_Exp",
"Com_Exp : Com_Exp EE Add_Min_Exp",
"Com_Exp : Com_Exp BLTE Add_Min_Exp",
"Com_Exp : Com_Exp BLT Add_Min_Exp",
"Com_Exp : Com_Exp NEQ Add_Min_Exp",
"Add_Min_Exp : Mul_Exp",
"Add_Min_Exp : Add_Min_Exp PLUS Mul_Exp",
"Add_Min_Exp : Add_Min_Exp MINUS Mul_Exp",
"Mul_Exp : Unary_Exp",
"Mul_Exp : Mul_Exp MUL Unary_Exp",
"Mul_Exp : Mul_Exp DIV Unary_Exp",
"Mul_Exp : Mul_Exp MOD Unary_Exp",
"Unary_Exp : Postfix_Exp",
"Unary_Exp : MINUS Postfix_Exp",
"Postfix_Exp : Left_Exp",
"Postfix_Exp : Left_Exp PLUS2",
"Postfix_Exp : Left_Exp MINUS2",
"Left_Exp : Var",
"Left_Exp : INT_P",
"Left_Exp : DOUBLE_P",
"Left_Exp : CHAR_P",
"Left_Exp : SCIEN_P",
"Left_Exp : STR_P",
"Left_Exp : '(' Exp ')'",
"Left_Exp : IDENTIFIER '(' ')'",
"Left_Exp : IDENTIFIER '(' Exp_List ')'",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 175 "parser.y"


int main(){
	yyparse();
	if(functionNum == 0){
		num_lines++;
		yyerror(NULL);
	}
	printf("No syntax error!\n");
	return 0;
}

int yyerror(char *msg){
	fprintf( stderr, "*** Error at line %d: %s\n", num_lines, str );
	fprintf( stderr, "\n" );
	fprintf( stderr, "Unmatched token: %s\n", yytext );
	fprintf( stderr, "*** syntax error\n");
	exit(-1);

}
#line 503 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 3:
#line 33 "parser.y"
	{functionNum++;}
break;
#line 709 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
