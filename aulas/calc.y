
%{
    
#include "nodes.h"

int yyerror(const char *s);
int yylex(void);
int errorcount =0;
extern int force_print_tree;
%}

%define parse.error verbose
%define parse.trace

%union {
    char *str;
    int itg;
    double flt;
    Node *node;
}

%token TOK_IDENT 
%token TOK_PRINT
%token TOK_FLOAT
%token TOK_INT

%type<str> TOK_IDENT
%type<itg> TOK_INT
%type<flt> TOK_FLOAT
%type<node> globals global expr term factor unary

//usado para printar na tela de debug as variaveis
%printer { fprintf(yyo, "%s", $$);} <str>
%printer { fprintf(yyo, "%d", $$);} <itg>
%printer { fprintf(yyo, "%f", $$);} <flt>
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

global : TOK_IDENT '=' expr ';' {
    $$ = new Variable($TOK_IDENT, $expr);
}

global : TOK_PRINT TOK_IDENT ';' {
    Ident *id = new Ident($TOK_IDENT);
    $$ = new Print(id);
}

global : error ';' { $$ = new Node(); }

expr : expr[ee] '+' term {
    $$ = new BinaryOp($ee, $term, '+');
}

expr : expr[ee] '-' term {
    $$ = new BinaryOp($ee, $term, '-');
}

expr : term {
    $$ = $term;
}

term : term[tt] '*' factor {
    $$ = new BinaryOp($tt, $factor, '*');
}

term : term[tt] '/' factor {
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

factor : unary[u] {
    $$ = $u;
}

unary : '-' factor[f] {
    $$ = new Unary($f, '-');
}


%%


