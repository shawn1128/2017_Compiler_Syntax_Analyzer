%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "SymbolTable.h"
	extern int num_lines;
	extern char *yytext;
	extern char str[300];
	int functionNum = 0;
	int yyerror(char *msg);

%}


%start Program

%token IDENTIFIER INT_P DOUBLE_P SCIEN_P CHAR_P STR_P
%token VOID INT DOUBLE BOOL CHAR NUL FOR WHILE DO IF ELSE SWITCH RETURN
%token BREAK CONTINUE CONST STRUCT TRUE FALSE CASE DEFAULT

//%left "++" "--" "*" "/" "%" "+" "-"
//%left "&&" "||" "!" "!=" "<" ">" "<=" ">=" "=="

%left PLUS2 MINUS2 MUL DIV MOD PLUS MINUS
%left AND2 OR2 N NEQ SLT BLT SLTE BLTE EE


%%

Program: Pre_Dec
		| Program Pre_Dec
		;

Pre_Dec:	Func_Def {functionNum++;}
		|	Dec
			;
Func_Def: Re_Type_Spec IDENTIFIER '(' ')' Main_Content_Func
		| Re_Type_Spec IDENTIFIER '(' Para_List ')' Main_Content_Func
		;
Dec: Func_Dec
	| Normal_Dec
	;
	
Func_Dec: Re_Type_Spec IDENTIFIER '(' ')' ';'
	| Re_Type_Spec IDENTIFIER '(' Para_List ')' ';'
	;


Normal_Dec: Re_Type_Spec Normal_Dec_List ';'
	;
	
Normal_Dec_List:  Normal_Dec_One
				| Normal_Dec_List ',' Normal_Dec_One
				;
Normal_Dec_One: IDENTIFIER
				| Array
				| IDENTIFIER '=' Exp
				| Array '=' Array_Cont
				;
				
Para_List: Para
		| Para_List ',' Para
		;
		
Para: Re_Type_Spec IDENTIFIER
	| Re_Type_Spec Array
	;
	
Array: IDENTIFIER Array_P
	;
	
Array_P: '[' INT_P ']'
		| Array_P '[' INT_P ']'
		;

Array_Cont: '{' '}'
			| '{' Exp_List '}'
			;
Exp_List: Exp
		| Exp_List ',' Exp
		;

Re_Type_Spec: INT | CHAR | BOOL | DOUBLE | VOID ;

Main_Content_Func: '{' '}'
				| '{' Main_Block_List '}'
				;
				
Main_Block_List: Main_Block
				| Main_Block_List Main_Block
				;
				
Main_Block: Dec
			| Statement
			;
			
Statement: Simple_S
		/*| Switch_S
		| While_S
		| For_S*/
		| End_S
		;
		
Simple_S: Var '=' Exp ';'
		;
		
Var: IDENTIFIER
	| IDENTIFIER Array_Exp
	;
Array_Exp: '[' Exp ']'
		| Array_Exp '[' Exp ']'
		;
		
//Switch_S: SWITCH '(' IDENTIFIER ')' '{'


End_S: CONTINUE ';'
	| BREAK ';'
	| RETURN ';'
	| RETURN Exp ';'
	;
 
Exp: Log_Or_Exp
	;
	
Log_Or_Exp: Log_And_Exp
	| Log_Or_Exp OR2 Log_And_Exp
	;
	
Log_And_Exp: Log_Not_Exp
			| Log_And_Exp AND2 Log_Not_Exp
			;
Log_Not_Exp: Com_Exp
			| N Com_Exp
			;
			
Com_Exp: Add_Min_Exp
		| Com_Exp SLT Add_Min_Exp
		| Com_Exp SLTE Add_Min_Exp
		| Com_Exp EE Add_Min_Exp
		| Com_Exp BLTE Add_Min_Exp
		| Com_Exp BLT Add_Min_Exp
		| Com_Exp NEQ Add_Min_Exp
		;
		
Add_Min_Exp: Mul_Exp
			| Add_Min_Exp PLUS Mul_Exp
			| Add_Min_Exp MINUS Mul_Exp
			;
			
Mul_Exp: Unary_Exp
		| Mul_Exp MUL Unary_Exp
		| Mul_Exp DIV Unary_Exp
		| Mul_Exp MOD Unary_Exp
		;
		
Unary_Exp: Postfix_Exp
		| MINUS Postfix_Exp
		;
Postfix_Exp: Left_Exp
			| Left_Exp PLUS2
			| Left_Exp MINUS2
			;
			
Left_Exp: Var
		| INT_P
		| DOUBLE_P
		| CHAR_P
		| SCIEN_P
		| STR_P
		| '(' Exp ')'
		| IDENTIFIER '(' ')'
		| IDENTIFIER '(' Exp_List ')';
		;

%%

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