# Compiladores
<p> 
Repositório para a materia de compiladores 7 periodo.

Este compilador foi construido por meio do flex(gerador de analisador lexico) e bison( gerador de analisador sintático).
Foram construidos os analisadores lexico(comp.l) e sintático(comp.y) alem da analise semantica(nos arquivos comp.y e nodes.h)

Para compilar os testes o usuario pode utilizar o comando: ./comp "nome do arquivo", além dos seguintes modificadores:

-f : força printar a arvore sintática do teste.\
ex: ./comp -f teste.txt

-d : força printar a pilha do teste.\
ex: ./comp -d teste.txt
</p>
