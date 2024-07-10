
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

class TypeDec : public Node {
    protected:
        int type;
    
    public:
        TypeDec(int t){
            type = t;
        }
    virtual string toStr() override{
        if(type==0){
            return "Int ";
        }
        if(type==1){
            return "float ";
        }
        if(type==2){
            return "char ";
        }
        if(type==3){
            return "bool ";
        }
        if(type==4){
            return "string ";
        }
        else return "sem tipo ";
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

class String : public Node{
protected:
    string value;

public:
    String(const string v){
        value = v;
    }

    const string getValue(){
        return value;
    }

    virtual string toStr() override{
        return value;
    }
};

class True: public Node{
protected:

public:
    True(){}

    virtual string toStr() override{
        return "true";
    }

    virtual string toDebug() override{
        return toStr();
    }
};

class False: public Node{
protected:

public:
    False(){}

    virtual string toStr() override{
        return "false";
    }

    virtual string toDebug() override{
        return toStr();
    }
};

class From_to : public Node{
    protected:
    public:
        From_to(){
            
        }

    virtual string toStr() override{
        return "::";
    }

    virtual string toDebug() override{
        return toStr();
    }
};

class Else : public Node{
    protected:
        
    public:
    Else(){
    }

    virtual string toStr() override{
        return "else";
      
    }

    virtual string toDebug() override{
        return toStr();
    }
};

class Scan: public Node{
protected:
    string value;

public:
    Scan(const string v){
        value = v;
    }

    const string getValue(){
       return value;
    }

    virtual string toStr() override{
        value = "scan";
        return value;
    }
};

class Char : public Node{
protected:
    char value;

public:
    Char(const char v){
        value = v;
    }

    const char getValue(){
        return value;
    }

    virtual string toStr() override{
        return to_string(value);
    }
};

class Variable : public Node
{
protected:
    TypeDec *type;
    string name;
    Node *value;

public:
    Variable(TypeDec *t,const string n, Node *v)
    {
        type = t;
        name = n;
        value = v;
        children.push_back(t);
        children.push_back(v);
    }

    const string getName(){
        return name;
    }

    virtual string toStr() override
    {
        return  name + "=";
    }

    virtual string toDebug() override{
        return type->toStr() + name + "=" + value->toDebug();
    }
};

class Attribution : public Node
{
protected:
    string name;
    Node *value;

public:
    Attribution(const string n, Node *v)
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
        return  name + "=";
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
    return toStr() + value->toDebug();
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
    return value1->toDebug() + toStr() + value2->toDebug();
    }
};

class BinaryOpLog : public Node
{
protected:
    Node *value1;
    Node *value2;
    string operation;

public:
    BinaryOpLog(Node *v1, Node *v2, string op){
        value1 = v1;
        value2 = v2;
        operation = op;
        children.push_back(v1);
        children.push_back(v2);

    }

    virtual string toStr() override{   
        return operation ;
    }

    virtual string toDebug() override{
    return value1->toDebug() + operation + value2->toDebug(); 
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

class If1 : public Node{
protected:
    Node *value;
    Node *globals;

public:
    If1(Node *v, Node *g){
        value = v;
        globals = g;
        children.push_back(v);
        children.push_back(g);
    }

    virtual string toStr() override{
        return "if";
    }

    virtual string toDebug() override{
    return toStr() + '(' + ')';
    }
};

class If2 : public Node{
protected:
    Node *value;
    Node *globals1;
    Node *e1;
    Node *globals2;

public:
    If2(Node *v, Node *g1,Node *e,Node *g2){
        value = v;
        globals1 = g1;
        e1 = e;
        globals2 = g2;
        children.push_back(v);
        children.push_back(g1);
        children.push_back(e);
        children.push_back(g2);
    }

    virtual string toStr() override{
        return "if";
    }

    virtual string toDebug() override{
    return toStr() + '(' +')' + e1->toDebug();
    }
};

class For : public Node {
    protected:
        Node *var1;
        Node *for_to;
        Node *var2;
        Node *global;

    public:
        For(Node *v1,Node *ft,Node *v2, Node *g){
            var1 = v1;
            for_to = ft;
            var2 = v2;
            global = g;
            children.push_back(v1);
            children.push_back(ft);
            children.push_back(v2);
            children.push_back(g);
        }

    virtual string toStr() override{
        return "for";
    }
    
    virtual string toDebug() override{
        return toStr() + '(' + var1->toDebug() + for_to->toDebug() + var2->toDebug() + ')';
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