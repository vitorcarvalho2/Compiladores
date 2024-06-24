
#include <iostream>
#include <vector>
#include <map>
#include <set>

extern int errorcount;
extern int yylineno;
extern char *build_file_name;

using namespace std;

class Node{
protected:
    vector<Node *> children;
    int lineno;
public:
    Node(){//constructor
        lineno = yylineno;
    }

    int getLineno(){
        return lineno;
    }

    virtual string toStr(){
        return "stmts";
    }

    virtual string toDebug(){
        return toStr();
    }

    void append(Node *n){
        children.push_back(n);
    }

    vector<Node *> &getChildren(){
        return children;
    }
};

class Program : public Node{
public:
    virtual string toStr() override{
        return "Program";
    }
};

class Integer : public Node{
protected:
    int value;

public:
    Integer(const int v){
        value = v;
    }

    virtual string toStr() override{
        return to_string(value);
    }
};

class Float : public Node{
protected:
    float value;

public:
    Float(const float v){
        value = v;
    }

    virtual string toStr() override{
        return to_string(value);
    }
};

class Ident : public Node{
protected:
    string name;

public:
    Ident(const string n){
        name = n;
    }

    const string getName(){
        return name;
    }

    virtual string toStr() override{
        return name;
    }
};

class Variable : public Node
{
protected:
    string name;
    Node *value;

public:
    Variable(const string n, Node *v)
    {
        name = n;
        value = v;
        children.push_back(v);
    }

    const string getName(){
        return name;
    }

    virtual string toStr() override
    {
        return name + "=";
    }

    virtual string toDebug() override{
        return name + "=" + value->toDebug();
    }
};

class Unary : public Node
{
protected:
    Node *value;
    char operation;

public:
    Unary(Node *v, char op)
    {
        value = v;
        operation = op;
        children.push_back(v);
    }

    virtual string toStr() override
    {
        string aux;
        aux.push_back(operation);
        return aux;
    }

    virtual string toDebug() override{
    return toStr() + "=" + value->toDebug();
    }
};

class BinaryOp : public Node
{
protected:
    Node *value1;
    Node *value2;
    char operation;

public:
    BinaryOp(Node *v1, Node *v2, char op){
        value1 = v1;
        value2 = v2;
        operation = op;
        children.push_back(v1);
        children.push_back(v2);
    }

    virtual string toStr() override{
        string aux;
        aux.push_back(operation);
        return aux;
    }

    virtual string toDebug() override{
    return value1->toDebug() + 
    toStr() + value2->toDebug();
    }
};

class Print : public Node{
protected:
    Node *value;

public:
    Print(Node *v){
        value = v;
        children.push_back(v);
    }

    virtual string toStr() override{
        return "print";
    }

    virtual string toDebug() override{
    return toStr() + " " + value->toDebug();
    }
};

void printf_tree_recursive(Node *noh){
    for (Node *c : noh->getChildren()){
        printf_tree_recursive(c);
    }
    cout << "N" << (long int)noh << "[label=\"" << noh->toStr() << "\"];" << endl;

    // imprime as ligações c/ os filhos
    for (Node *c : noh->getChildren()){
        cout << "N" << (long int)noh << "--" << "N" << (long int)c << ";" << endl;
    }
}

void printf_tree(Node *root){
    cout << "graph {" << endl;
    printf_tree_recursive(root);
    cout << "}" << endl;
}

class CheckVarDecl {
private:
    set<string> symbols;

public:
    CheckVarDecl() {}

    void check(Node *noh){
        for (Node *c : noh->getChildren()){
            check(c);
        }

        if(Ident *id = dynamic_cast<Ident*>(noh)){// cria a variavel id e verifica se o nome dela esta na tabela de simbolos
            if(symbols.count(id->getName())<=0){
                cout << build_file_name
                     << ":"
                     << id->getLineno()
                     << ":0: semantic error: "
                     << id->getName()
                     << " undefined."
                     << endl;
                errorcount++;
            }
        }

        Variable *var = dynamic_cast<Variable*>(noh);//outro metodo
        if(var){
            symbols.insert(var->getName());
        }
    }
};