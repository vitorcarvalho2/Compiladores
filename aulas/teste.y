#START translation_unit

translation_unit
	: external_function
	|translation_unit external_function
	;
	
external_function
	: function_definition
	|declaration
	;
	
declaration
	: declaration_specifiers ';'
	| declaration_specifiers init_declarator_list ';'
	;
	
declaration_specifiers
	: storage_class_specifier
	| storage_class_specifier declaration_specifiers
	| type_specifier
	| type_specifier declaration_specifiers
	| type_qualifier
	| type_qualifier declaration_specifiers
	;
	
storage_class_specifier
	: TYPEDEF
	| EXTERN
	| STATIC
	| AUTO
	| REGISTER
	;

type_specifier
	: VOID
	| CHAR
	| SHORT
	| INT
	| LONG
	| FLOAT
	| DOUBLE
	| SIGNED
	| UNSIGNED
	| struct_or_union_specifier
	| enum_specifier
	| TYPE_NAME
	;
	
assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression
	;

assignment_operator
	: '='
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	| LEFT_ASSIGN
	| RIGHT_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;


ler no github o language.l 
thborges/cmp2024


trabalho 1: implementar
mostrar programas que dão certo e que dao errado
tudo de aritmetica (ja feito) ok
acrescentar operações logicas ( true e false) ok
and e or ok
not ok
estrutura de repetição
for ok
estrutura de decisao
if ok


analise semantica
a=b; tratar

