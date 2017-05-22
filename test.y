%{
	#include <stdio.h>
	#include "SymbolTable.h"
	extern int num_lines;
	extern char *yytext;
	//extern FILE *
	int yyerror(char *msg);

%}


%start program

%token IDENTIFIER INT_P DOUBLE_P SCIEN_P CHAR_P STR_P
%token VOID INT DOUBLE BOOL CHAR NULL FOR WHILE DO IF ELSE SWITCH RETURN
%token BREAK CONTINUE CONST STRUCT TRUE FALSE CASE DEFAULT

%left "++" "--" "*" "/" "%" "+" "-"
%left "&&" "||" "!" "!=" "<" ">" "<=" ">=" "=="


%%












%%

int main(){
	yyparse();
	
	return 0;
}

int yyerror(char *msg){
	fprintf( stderr, "*** Error at line %d: %s\n", linenum, buff );
	fprintf( stderr, "\n" );
	fprintf( stderr, "Unmatched token: %s\n", yytext );
	fprintf( stderr, "*** syntax error\n");
	exit(-1);

}