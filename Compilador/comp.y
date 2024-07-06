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

%type<str> TOK_IDENT TOK_STRING TOK_TRUE TOK_FALSE TOK_AND TOK_OR TOK_DIFFERENT TOK_EQUALS TOK_SCAN
%type<itg> TOK_INT tok_id 
%type<flt> TOK_FLOAT
%type<chr> TOK_CHAR

%type<node> globals global expr term factor unary declaration var decide loop expr_log factor_log term_log unary_log 

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

}

global : TOK_PRINT '(' TOK_IDENT ')' ';'{
    Ident *id = new Ident($TOK_IDENT);
    $$ = new Print(id);
}

global : error ';' { 
    $$ = new Node(); 
}

global : decide {
    $$ = $decide;
}

global : declaration {
    $$ = $declaration;
}

global : loop {
    $$ = $loop;
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

factor : TOK_TRUE[str]{
    $$ = new True($str);
}

factor : TOK_FALSE[str]{
    $$ = new False($str);
}

/* O scan teria um funcionamento diferente mas como não será possivel implementar deixei assim*/
factor : TOK_SCAN[str]{
    $$ = new Scan($str);
}

factor : unary {
    $$ = $unary;
}

unary : '-' factor[f] {
    $$ = new Unary($f, '-');
}

expr_log : expr_log[eel] TOK_OR term_log {
    $$ = new BinaryOpLog($eel, $term_log, "||");
}

expr_log : term_log {
    $$ = $term_log;
}

term_log : term_log[ttl] TOK_AND factor_log {
    $$ = new BinaryOpLog($ttl, $factor_log, "&&");
}

term_log : factor_log {
    $$ = $factor_log;
}

factor_log : expr[ee1] '<' expr[ee2] {
   $$ = new BinaryOp($ee1, $ee2, '<');
}

factor_log : expr[ee1] '>' expr[ee2]{
    $$ = new BinaryOp($ee1, $ee2, '<');
}

factor_log : expr[ee1] TOK_DIFFERENT expr[ee2] {
    $$ = new BinaryOpLog($ee1, $ee2, "!=");
}

factor_log : expr[ee1] TOK_EQUALS expr[ee2] {
    $$ = new BinaryOpLog($ee1, $ee2, "==");
}

factor_log : unary_log {
   $$ = $unary_log;
}

unary_log : '!' factor_log[f] {
   $$ = new Unary($f, '!');
}

declaration : tok_id TOK_IDENT '=' expr ';' { 
     $$ = new Variable(new TypeDec ($tok_id), $TOK_IDENT, $expr);
}

tok_id : TOK_INT_ID {
    $$ = 0;
}

tok_id : TOK_FLOAT_ID {
    $$ = 1;
}

tok_id : TOK_CHAR_ID {
    $$ = 2;
}

tok_id : TOK_BOOL_ID {
    $$ = 3;
}

tok_id : TOK_STRING_ID {
    $$ = 4;
}

loop : TOK_FOR '(' var TOK_FROM_TO var ')' '{' globals '}' {

}

var : TOK_INT[itg] {
    $$ = new Integer($itg);
}

var : TOK_IDENT[str] {
    $$ = new Ident($str);
}

%%
