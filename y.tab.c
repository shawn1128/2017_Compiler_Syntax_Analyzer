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

#line 7 "hw2.y"
#include <stdio.h>
#include "SymbolTable.h"
extern int lineno;
extern FILE *f_asm;
char   *install_symbol();
#line 15 "hw2.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union { 
         int       token ;
         char      charv ;
         char      *ident;
       } YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 64 "hw2.y"
/* external function is defined here */
void error();
int TRACEON = 100;
#line 42 "y.tab.c"

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
#define INTEGER 258
#define FLOAT 259
#define SCSPEC 260
#define TYPESPEC 261
#define TYPEMOD 262
#define CONSTANT 263
#define IF 264
#define ELSE 265
#define WHILE 266
#define DO 267
#define FOR 268
#define SWITCH 269
#define CASE 270
#define DEFAULT_TOKEN 271
#define BREAK 272
#define CONTINUE 273
#define RETURN 274
#define ASSIGN 275
#define OROR 276
#define ANDAND 277
#define EQCOMPARE 278
#define ARITHCOMPARE 279
#define UNARY 280
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    4,    4,    5,    6,    9,   10,    5,    5,
    5,    3,    3,    3,    3,    3,    2,    2,    1,    1,
   11,   11,   12,   12,   13,    8,    8,   14,    7,    7,
   15,   15,   16,
};
static const short yylen[] = {                            2,
    0,    1,    1,    2,    3,    0,    0,    0,    8,    2,
    1,    1,    3,    3,    3,    3,    1,    1,    4,    1,
    0,    1,    1,    3,    2,    1,    2,    2,    0,    1,
    1,    2,    3,
};
static const short yydefred[] = {                         0,
    0,   20,    0,   11,    0,    0,    0,    3,   10,    0,
    0,    0,    4,    5,    0,    0,    0,   23,    0,    0,
   19,    0,    0,    7,    0,   31,   24,    0,    0,   32,
   33,   17,   18,   12,    0,    0,   26,   28,    0,    0,
    0,    0,    0,   27,    0,    0,    0,   15,    9,
};
static const short yydgoto[] = {                          5,
    6,   34,   35,    7,    8,   12,   24,   36,   29,   43,
   16,   17,   18,   37,   25,   26,
};
static const short yysindex[] = {                       -53,
  -44,    0, -232,    0,    0,   -4,  -53,    0,    0,  -32,
 -224,  -85,    0,    0, -232,   -2,   -3,    0, -221,   -4,
    0, -224, -232,    0, -221,    0,    0,  -31, -247,    0,
    0,    0,    0,    0,  -42, -247,    0,    0, -247, -247,
 -247, -247,  -83,    0,  -40,  -29,    1,    0,    0,
};
static const short yyrindex[] = {                        44,
    0,    0,    0,    0,    0,  -78,   46,    0,    0,    0,
   -2,    0,    0,    0,    0,    0,    6,    0, -245,  -15,
    0,    0,    0,    0, -233,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -77,    0,    0,    0,    0,
    0,    0,    0,    0,  -10,  -54,  -39,    0,    0,
};
static const short yygindex[] = {                         0,
    8,    0,   -7,    0,   43,    0,    0,    0,    0,    0,
    0,    0,   29,   16,    0,   28,
};
#define YYTABLESIZE 240
static const short yytable[] = {                         42,
   41,   42,   41,   13,   16,    4,   16,   11,   11,   32,
   10,   29,   42,   41,    9,   33,   38,   29,   39,   13,
   39,   13,   20,   30,    2,   25,   14,   31,   25,   30,
   28,   45,   46,   47,   48,   11,   15,   19,   21,   23,
   22,   49,   42,    1,    6,    2,   22,    8,   14,   13,
   27,   44,   30,    0,    0,    0,    0,    0,    0,    0,
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
    0,    0,    1,    2,    0,    0,    0,    3,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   16,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   40,    0,   40,   13,
};
static const short yycheck[] = {                         42,
   43,   42,   43,   43,   59,   59,   61,   40,   40,  257,
    3,  257,   42,   43,   59,  263,   59,  263,   61,   59,
   61,   61,   15,  257,  257,   41,   59,   59,   44,  263,
   23,   39,   40,   41,   42,   40,  261,  123,   41,  261,
   44,  125,   42,    0,  123,    0,   41,  125,   59,    7,
   22,   36,   25,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
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
   -1,   -1,  256,  257,   -1,   -1,   -1,  261,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  279,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  279,   -1,  279,  279,
};
#define YYFINAL 5
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 280
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? (YYMAXTOKEN + 1) : (a))
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,"'%'",0,0,"'('","')'","'*'","'+'","','","'-'","'.'","'/'",0,0,0,0,0,0,0,0,
0,0,0,"';'","'<'","'='","'>'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,
"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,"IDENTIFIER","INTEGER","FLOAT","SCSPEC","TYPESPEC",
"TYPEMOD","CONSTANT","IF","ELSE","WHILE","DO","FOR","SWITCH","CASE",
"DEFAULT_TOKEN","BREAK","CONTINUE","RETURN","ASSIGN","OROR","ANDAND",
"EQCOMPARE","ARITHCOMPARE","UNARY","illegal-symbol",
};
static const char *yyrule[] = {
"$accept : program",
"program :",
"program : extdefs",
"extdefs : extdef",
"extdefs : extdefs extdef",
"extdef : TYPESPEC notype_declarator ';'",
"$$1 :",
"$$2 :",
"$$3 :",
"extdef : notype_declarator $$1 '{' xdecls $$2 stmts $$3 '}'",
"extdef : error ';'",
"extdef : ';'",
"expr_no_commas : primary",
"expr_no_commas : expr_no_commas '+' expr_no_commas",
"expr_no_commas : expr_no_commas '=' expr_no_commas",
"expr_no_commas : expr_no_commas '*' expr_no_commas",
"expr_no_commas : expr_no_commas ARITHCOMPARE expr_no_commas",
"primary : IDENTIFIER",
"primary : CONSTANT",
"notype_declarator : notype_declarator '(' parmlist ')'",
"notype_declarator : IDENTIFIER",
"parmlist :",
"parmlist : parms",
"parms : parm",
"parms : parms ',' parm",
"parm : TYPESPEC notype_declarator",
"stmts : stmt",
"stmts : stmts stmt",
"stmt : expr_no_commas ';'",
"xdecls :",
"xdecls : decls",
"decls : decl",
"decls : decls decl",
"decl : TYPESPEC notype_declarator ';'",

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
#line 221 "hw2.y"

int main(void)
{
    yyparse();
    return 0;
}

/*
 *	  s - the error message to be printed
 */
void 
yyerror(s)
	char   *s;
{
	err(s);
}

#line 304 "y.tab.c"

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
case 1:
#line 73 "hw2.y"
	{ if (TRACEON) printf("1\n ");}
break;
case 2:
#line 75 "hw2.y"
	{ if (TRACEON) printf("2\n ");}
break;
case 3:
#line 80 "hw2.y"
	{ if (TRACEON) printf("3\n ");}
break;
case 4:
#line 82 "hw2.y"
	{ if (TRACEON) printf("4\n ");}
break;
case 5:
#line 87 "hw2.y"
	{ if (TRACEON) printf("7 ");
          }
break;
case 6:
#line 90 "hw2.y"
	{ if (TRACEON) printf("10 ");
                  }
break;
case 7:
#line 93 "hw2.y"
	{ if (TRACEON) printf("10.5 ");

                  }
break;
case 8:
#line 97 "hw2.y"
	{
                  if (TRACEON) printf("11 ");
                }
break;
case 10:
#line 102 "hw2.y"
	{ if (TRACEON) printf("8 "); }
break;
case 11:
#line 104 "hw2.y"
	{ if (TRACEON) printf("9 "); }
break;
case 12:
#line 113 "hw2.y"
	{ if (TRACEON) printf("15 ") ;
 	     yyval.ident= yystack.l_mark[0].ident;
           }
break;
case 13:
#line 117 "hw2.y"
	{ 
                  if (TRACEON) printf("16 ") ; 
                }
break;
case 14:
#line 121 "hw2.y"
	{ char *s;
		  int index;

		  if (TRACEON) printf("17 ") ;
                }
break;
case 15:
#line 127 "hw2.y"
	{ if (TRACEON) printf("18 ") ;

                }
break;
case 16:
#line 131 "hw2.y"
	{ if (TRACEON) printf("19 ") ; }
break;
case 17:
#line 138 "hw2.y"
	{    	  int index;

                  if (TRACEON) printf("20 ") ;
         }
break;
case 18:
#line 143 "hw2.y"
	{ if (TRACEON) printf("21 ") ;

                }
break;
case 19:
#line 150 "hw2.y"
	{   if (TRACEON) printf("22 ") ;
                }
break;
case 20:
#line 153 "hw2.y"
	{   if (TRACEON) printf("23 ") ;
                }
break;
case 21:
#line 160 "hw2.y"
	{ if (TRACEON) printf("24 ") ; }
break;
case 22:
#line 163 "hw2.y"
	{ if (TRACEON) printf("25 ") ;  }
break;
case 23:
#line 170 "hw2.y"
	{ if (TRACEON) printf("26 ") ;  }
break;
case 24:
#line 172 "hw2.y"
	{ if (TRACEON) printf("27 ") ;  }
break;
case 25:
#line 177 "hw2.y"
	{ if (TRACEON) printf("28 ") ;  }
break;
case 26:
#line 187 "hw2.y"
	{ if (TRACEON) printf("29 ") ;  }
break;
case 27:
#line 189 "hw2.y"
	{ if (TRACEON) printf("30 ") ;  }
break;
case 28:
#line 196 "hw2.y"
	{
        }
break;
case 29:
#line 203 "hw2.y"
	{ if (TRACEON) printf("102 ") ; }
break;
case 30:
#line 205 "hw2.y"
	{ if (TRACEON) printf("103 ") ; }
break;
case 31:
#line 210 "hw2.y"
	{ if (TRACEON) printf("104 ") ;
           }
break;
case 32:
#line 213 "hw2.y"
	{ if (TRACEON) printf("106 ") ;
           }
break;
case 33:
#line 218 "hw2.y"
	{ if (TRACEON) printf("110 ") ;}
break;
#line 660 "y.tab.c"
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
