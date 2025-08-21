# Compilador - Linguagem de Programação Customizada

## 📋 Descrição

Este é um compilador completo desenvolvido para a disciplina de Compiladores do 7º período. O projeto implementa uma linguagem de programação customizada com análise léxica, sintática e semântica.

### 🛠️ Tecnologias Utilizadas

- **Flex (Fast Lexical Analyzer Generator)**: Gerador de analisador léxico
- **Bison**: Gerador de analisador sintático
- **C++**: Linguagem de implementação
- **GCC/G++**: Compilador C++

## 🏗️ Arquitetura do Compilador

### Estrutura de Arquivos

```
Compilador/
├── comp.l          # Especificação léxica (Flex)
├── comp.y          # Gramática sintática (Bison)
├── nodesC.h        # Definições de nós da árvore sintática
├── Makefile        # Script de compilação
├── comp            # Executável do compilador
├── *.txt           # Arquivos de teste
└── *.c             # Arquivos gerados automaticamente
```

### Componentes Principais

1. **Analisador Léxico (`comp.l`)**
   - Reconhece tokens da linguagem
   - Identifica palavras-chave, operadores, literais
   - Ignora comentários e espaços em branco

2. **Analisador Sintático (`comp.y`)**
   - Define a gramática da linguagem
   - Constrói a árvore sintática abstrata (AST)
   - Implementa análise semântica

3. **Análise Semântica (`nodesC.h`)**
   - Verificação de declaração de variáveis
   - Controle de tipos
   - Validação de estruturas de controle

## 🚀 Como Compilar e Executar

### Pré-requisitos (Linux)

```bash
# Instalar Flex e Bison
sudo apt-get install flex bison
sudo apt-get install build-essential
```

### Compilação

```bash
# Navegar para o diretório do compilador
cd Compiladores/Compilador

# Compilar o projeto
make
```

O comando `make` executa:
```bash
flex comp.l          # Gera lex.yy.c
bison -d comp.y      # Gera comp.tab.c e comp.tab.h
g++ *.c -o comp      # Compila tudo em um executável
```

### Execução

```bash
# Sintaxe básica
./comp "arquivo.txt"

# Opções disponíveis
./comp -f "arquivo.txt"    # Força exibir a árvore sintática
./comp -d "arquivo.txt"    # Ativa modo debug (mostra pilha)
```

## 📝 Linguagem Suportada

### Tipos de Dados
- `int` - Números inteiros
- `float` - Números de ponto flutuante
- `char` - Caracteres
- `boolean` - Valores booleanos (true/false)
- `string` - Cadeias de caracteres

### Palavras-chave
- `print` - Comando de saída
- `scan` - Comando de entrada
- `if` / `else` - Estruturas condicionais
- `for` - Estrutura de repetição

### Operadores
- **Aritméticos**: `+`, `-`, `*`, `/`
- **Relacionais**: `>`, `<`, `==`, `!=`
- **Lógicos**: `&&`, `||`, `!`
- **Atribuição**: `=`
- **For**: `::` (sintaxe: `for(inicio::fim)`)

### Estruturas de Controle

#### Declaração de Variáveis
```c
int a = 10;
float b = 20.5;
string nome = 'teste';
boolean flag = true;
char letra = 'a';
```

#### Estrutura Condicional
```c
if(a < b && !c < d){
    print(i);
} else {
    print(a);
}
```

#### Estrutura de Repetição
```c
for(a::b){
    // código aqui
}
```

#### Entrada e Saída
```c
print(variavel);    // Saída
int idade = scan;   // Entrada
```

## 🧪 Arquivos de Teste

O projeto inclui vários arquivos de teste para demonstrar diferentes funcionalidades:

- **teste1.txt**: Testes de estruturas condicionais e operadores lógicos
- **teste2.txt**: Testes de estruturas de repetição aninhadas
- **teste3.txt**: Testes de atribuição, print e scan
- **tfalhaSin*.txt**: Testes que devem falhar na análise sintática
- **tfalhaSem*.txt**: Testes que devem falhar na análise semântica

### Exemplo de Teste Válido
```c
// Exemplo de código válido
int a = 10 + 10;
float b = 20.5;
if(a < b){
    print(a);
} else {
    print(b);
}
```

## 🔍 Funcionalidades do Compilador

### Análise Léxica
- Reconhecimento de tokens
- Tratamento de comentários (`//`)
- Identificação de literais (números, strings, caracteres)
- Detecção de identificadores

### Análise Sintática
- Construção da árvore sintática abstrata
- Verificação de estrutura gramatical
- Relatórios de erro detalhados

### Análise Semântica
- Verificação de declaração de variáveis
- Controle de tipos
- Validação de estruturas de controle
- Verificação de escopo

### Recursos de Debug
- **Modo `-f`**: Exibe a árvore sintática completa
- **Modo `-d`**: Ativa debug detalhado mostrando a pilha de parsing
- Relatórios de erro com número da linha

## 🐛 Tratamento de Erros

O compilador detecta e reporta:
- **Erros Léxicos**: Símbolos não reconhecidos
- **Erros Sintáticos**: Estruturas gramaticais incorretas
- **Erros Semânticos**: 
  - Variáveis não declaradas
  - Tipos incompatíveis
  - Uso incorreto de estruturas de controle

### Exemplo de Relatório de Erro
```
arquivo.txt:5:0: syntax error, unexpected TOK_IDENT
1 error(s) found
```

## 📊 Estrutura da Árvore Sintática

O compilador gera uma árvore sintática abstrata com nós para:
- **Program**: Nó raiz do programa
- **Variable**: Declarações de variáveis
- **Attribution**: Atribuições
- **Print**: Comandos de saída
- **Scan**: Comandos de entrada
- **If/Else**: Estruturas condicionais
- **For**: Estruturas de repetição
- **Expressões**: Operações aritméticas e lógicas

## 🔧 Personalização

Para modificar a linguagem:
1. **Adicionar tokens**: Editar `comp.l`
2. **Modificar gramática**: Editar `comp.y`
3. **Novos tipos**: Adicionar em `nodesC.h`
4. **Recompilar**: Executar `make clean && make`

## 📚 Notas de Desenvolvimento

- O compilador foi desenvolvido para ambiente Linux
- Utiliza Flex e Bison para geração automática de código
- Implementa análise semântica completa
- Suporta estruturas de controle aninhadas
- Inclui sistema de debug integrado

## 🎯 Objetivos Educacionais

Este projeto demonstra:
- Implementação completa de um compilador
- Uso de ferramentas de geração de código
- Análise léxica, sintática e semântica
- Tratamento de erros em compiladores
- Estruturas de dados para AST
