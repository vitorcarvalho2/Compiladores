%{
int yyerror(const char *s);
int yylex(void);
%}

%define parse.error verbose

%token TOK_IDENTIFY
%token TOK_PRINT
%token TOK_FLOAT
%token TOK_INT
%token TOK_SCAN
%token TOK_FOR
%token TOK_IF
%token TOK_CHAR
%token TOK_STRING 
%token TOK_ELSE
%token TOK_DIFFERENT
%token TOK_EQUALS
%token TOK_FROM_TO
%token TOK_INT_ID
%token TOK_CHAR_ID
%token TOK_FLOAT_ID
%token TOK_STRING_ID
%token TOK_BOOL_ID
%token TOK_TRUE
%token TOK_FALSE
%token TOK_AND
%token TOK_OR

%start program

%%

program : globals ;

globals : globals global {
}

globals : global {   
}

global : TOK_IDENTIFY '=' expr ';'{
}

global : TOK_PRINT '(' TOK_IDENTIFY ')' ';'{
}

expr : expr '+' term {
}

expr : expr '-' term {
}

expr : term{
}

term : term '*' factor{
}

term : term '/' factor{
}

term : factor {
}

factor : '(' expr ')' {
}

factor : TOK_IDENTIFY {
}

factor : TOK_INT {
}

factor : TOK_FLOAT{
}

factor : TOK_CHAR{
}

factor : TOK_STRING{
}

factor : TOK_TRUE{
}

factor : TOK_FALSE{
}

factor : unary{
}

unary : '-' factor {
}


global : declaration {
}

declaration : tok_id TOK_IDENTIFY  ';' {
}

declaration : tok_id TOK_IDENTIFY '=' expr ';' {
}

tok_id : TOK_INT_ID {}

tok_id : TOK_FLOAT_ID {}

tok_id : TOK_CHAR_ID {}

tok_id : TOK_BOOL_ID {}

tok_id : TOK_STRING_ID {}


global : loop {
}

loop : TOK_FOR '(' var TOK_FROM_TO var ')' '{' globals '}' {
}

var : TOK_INT {}

var : TOK_IDENTIFY {}

global : decide {
}

decide : TOK_IF '(' decide_allargs ')' '{' globals '}' {
}

decide : TOK_IF '(' decide_allargs ')' '{' globals '}' TOK_ELSE '{' globals '}' {
}

decide : TOK_IF '(' decide_allargs ')' '{' globals '}' TOK_ELSE decide {
}

decide_allargs : decide_argument decide_compare decide_argument {
}

decide_allargs : decide_argument decide_compare decide_argument decide_allargs_extra {
}

decide_compare : TOK_DIFFERENT {
}

decide_compare : TOK_EQUALS {
}

decide_compare : '<' {
}

decide_compare : '>' {
}

decide_argument : TOK_IDENTIFY {
}

decide_argument : TOK_INT {
}

decide_argument : TOK_FALSE {
}

decide_argument : TOK_TRUE{
}

decide_argument : TOK_STRING {
}

decide_allargs_extra : TOK_AND decide_allargs {
}

decide_allargs_extra : TOK_OR decide_allargs{
}




%%

