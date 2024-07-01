%{

#include "nodesC.h"

int yyerror(const char *s);
int yylex(void);
int errorcount =0;
extern int force_print_tree;
%}

%define parse.error verbose
%define parse.trace

%union {
    char chr;
    char *str;
    int itg;
    double flt;
    Node *node;
}

%token TOK_IDENT
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

%type<str> TOK_IDENT
%type<str> TOK_STRING
%type<itg> TOK_INT
%type<flt> TOK_FLOAT
%type<chr> TOK_CHAR
%type<node> globals global expr term factor unary declaration var decide expr_log factor_log term_log unary_log


%printer { fprintf(yyo, "%s", $$);} <str>
%printer { fprintf(yyo, "%d", $$);} <itg>
%printer { fprintf(yyo, "%f", $$);} <flt>
%printer { fprintf(yyo, "%c", $$);} <chr>
%printer { fprintf(yyo, "%s", $$-> toDebug().c_str());} <node>

%start program

%%

program : globals {
   Node *program = new Program();
    program->append($globals);

    // aqui vai a analise semantica
    CheckVarDecl cvd;
    cvd.check(program);
    
    if(errorcount>0)
        cout << errorcount << " error(s) found" <<endl;
    if(force_print_tree || errorcount ==0)
        printf_tree(program);
}

globals : globals[gg] global {
    $gg->append($global);
    $$ = $gg;
}

globals : global {   
    Node *n = new Node();
    n->append($global);
    $$ = n;

}

global : TOK_IDENT '=' expr ';'{
    $$ = new Variable($TOK_IDENT, $expr);
}

global : TOK_PRINT '(' TOK_IDENT ')' ';'{
    Ident *id = new Ident($TOK_IDENT);
    $$ = new Print(id);
}

global : error ';' { 
    $$ = new Node(); 
}

global : decide {

}

global : declaration {
    $$ = $declaration;
}

global : loop {

}

global : TOK_PRINT '(' TOK_STRING ')' ';'{
    String *value = new String($TOK_STRING);
    $$ = new Print(value);
}

decide : TOK_IF '(' expr_log ')' '{' globals '}' {

}

decide : TOK_IF '(' expr_log ')' '{' globals '}' TOK_ELSE '{' globals '}' {

}

decide : TOK_IF '(' expr_log ')' '{' globals '}' TOK_ELSE decide {

}

expr : expr[ee] '+' term {
    $$ = new BinaryOp($ee, $term, '+');
}

expr : expr[ee] '-' term {
    $$ = new BinaryOp($ee, $term, '-');
}

expr : term{
    $$ = $term;
}

term : term[tt] '*' factor{
    $$ = new BinaryOp($tt, $factor, '*');
}

term : term[tt] '/' factor{
    $$ = new BinaryOp($tt, $factor, '/');
}

term : factor {
    $$ = $factor;
}

factor : '(' expr ')' {
    $$ = $expr;
}

factor : TOK_IDENT[str] {
    $$ = new Ident($str);
}

factor : TOK_INT[itg] {
    $$ = new Integer($itg);
}

factor : TOK_FLOAT[flt] {
    $$ = new Float($flt);
}

factor : TOK_CHAR[chr]{
    $$ = new Char($chr);
}

factor : TOK_STRING[str]{
   $$ = new String($str);
}

factor : TOK_TRUE{
  
}

factor : TOK_FALSE{
   
}

factor : unary {
    $$ = $unary;
}

unary : '-' factor[f] {
    $$ = new Unary($f, '-');
}

expr_log : expr_log TOK_OR term_log {
}

expr_log : term_log {
}

term_log : term_log TOK_AND factor_log {

}

term_log : factor_log {
}

factor_log : expr '<' expr {

}

factor_log : expr '>' expr {

}

factor_log : expr TOK_DIFFERENT expr {

}

factor_log : expr TOK_EQUALS expr {

}

factor_log : unary_log {
   
}

unary_log : '!' factor_log {

}

declaration : tok_id TOK_IDENT  ';' {

}

declaration : tok_id TOK_IDENT '=' expr ';' { 
}

tok_id : TOK_INT_ID {
}

tok_id : TOK_FLOAT_ID {
}

tok_id : TOK_CHAR_ID {
}

tok_id : TOK_BOOL_ID {
}

tok_id : TOK_STRING_ID {
}

loop : TOK_FOR '(' var TOK_FROM_TO var ')' '{' globals '}' {
}

var : TOK_INT[itg] {
    $$ = new Integer($itg);
}

var : TOK_IDENT[str] {
    $$ = new Ident($str);
}

global : scanner {

}

scanner : tok_id TOK_IDENT '=' TOK_SCAN ';' {

}


%%

