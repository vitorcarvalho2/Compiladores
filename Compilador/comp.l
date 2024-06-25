
%{
#include <stdio.h>
#include <stdlib.h>

char *build_file_name;
bool force_print_tree = false; 
class Node;

#include "comp.tab.h"


int yyerror(const char *s);

%}

%option yylineno

%%
"//".*\n { /* IGNORA */ }
[ \n\t\r] { /* ignora */ }


"print" { return TOK_PRINT; }
"scan" { return TOK_SCAN; }
"for" { return TOK_FOR; }
"if" { return TOK_IF; }
"else" { return TOK_ELSE; }
"real" { return TOK_TRUE; }
"fake" { return TOK_FALSE; }
"int" { return TOK_INT_ID;}
"float" { return TOK_FLOAT_ID; }
"char" { return TOK_CHAR_ID; }
"boolean" { return TOK_BOOL_ID; }
"string" { return TOK_STRING_ID; }
"==" { return TOK_EQUALS; }
"!=" { return TOK_DIFFERENT; }
"::" { return TOK_FROM_TO; }
"&&" { return TOK_AND; }
"||" { return TOK_OR; }
">" { return '>'; }
"<" { return '<'; }
"}" { return '}'; }
"{" { return '{'; }
"+" { return '+'; }
"-" { return '-'; }
"*" { return '*'; }
"/" { return '/'; }
"(" { return '('; }
")" { return ')'; }
";" { return ';'; }
"=" { return '='; }

\"[a-zA-Z_' ']+\" {
	yylval.str = strndup(yytext,yyleng);
	return TOK_STRING;
}

[a-zA-Z_][a-zA-Z0-9_]* {
	yylval.str = strndup(yytext,yyleng);
	return TOK_IDENT;
}

[0-9]+\.[0-9]* {
	yylval.flt = atof(yytext);
	return TOK_FLOAT;
}

[0-9]+ {
	yylval.itg = atoi(yytext);
	return TOK_INT;
}

'[a-zA-z0-9_]' {
	yylval.chr = yytext[1];
	return TOK_CHAR;
}


. {
printf("simbolo nao reconhecido %c\n", yytext[0]);
}

%%

int yywrap(){
    return 1;
}

extern int errorcount;
extern int yydebug;

int yyerror(const char *s){
    printf("%s:%d:0: %s\n",build_file_name, yylineno, s);
	errorcount++;
    return 1;
}

int main(int argc, char *argv[]) {
	if(argc <= 1) {
		printf("Sintaxe: %s nome_do_programa\n", argv[0]);
		return 1;
	}
	
	int build_file_id=1;

	if(strcmp(argv[1], "-f")==0){
		force_print_tree = true;
		build_file_id++;
	}
	
	yydebug = 0;
	if(strcmp(argv[1], "-d")==0){
		yydebug = 1;
		build_file_id++;
	}

	build_file_name = argv[build_file_id];

	yyin = fopen(argv[build_file_id], "r");
	if(yyin == NULL){
		printf("Não foi possivel abrir o arquivo %s.\n", argv[1]);
		return 1;
	}
	
	
	yyparse();
	
	if(yyin)
		fclose(yyin);
		
	return 0;
}









