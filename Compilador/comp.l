%{
#include <stdio.h>
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
"true" { return TOK_TRUE; }
"false" { return TOK_FALSE; }
"int" { return TOK_INT_ID;}
"float" { return TOK_FLOAT_ID; }
"char" { return TOK_CHAR_ID; }
"bool" { return TOK_BOOL_ID; }
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

[a-zA-Z_][a-zA-Z0-9_]* {
return TOK_IDENTIFY;
}

[0-9]+\.[0-9]* {
return TOK_FLOAT;
}

[0-9]+ {
return TOK_INT;
}

[a-zA-z0-9_] {
return TOK_CHAR;
}

[a-zA-z0-9_]+ {
return TOK_STRING;
}


. {
printf("simbolo nao reconhecido %c\n", yytext[0]);
}

%%

int yywrap(){
    return 1;
}

int yyerror(const char *s){
    printf("Erro de sintaxe na linha %d: %s\n" ,yylineno, s);
    return 1;
}

int main(int argc, char *argv[]) {
	if(argc <= 1) {
		printf("Sintaxe: %s nome_do_programa\n", argv[0]);
		return 1;
	}
	
	yyin = fopen(argv[1], "r");
	if(yyin == NULL){
		printf("Não foi possivel abrir o arquivo %s.\n", argv[1]);
		return 1;
	}
	
	yyparse();
	
	if(yyin)
		fclose(yyin);
		
	return 0;
}









