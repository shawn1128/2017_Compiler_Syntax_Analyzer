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
extern YYSTYPE yylval;
