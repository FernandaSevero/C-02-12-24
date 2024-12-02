#include <stdio.h>

int main(){
/*
main é uma função obrigatória:

Sim, em C, todo programa precisa ter uma função main. Sem ela, o compilador não sabe por onde iniciar a execução.
Mesmo que o programa inclua outras funções, a execução sempre começa pela main.
Não é a primeira função "compilada":

O compilador não compila as funções na ordem em que são executadas, mas sim na ordem em que estão no código (ou como são referenciadas por protótipos e declarações).
O que torna main especial é que o sistema operacional chama a main para iniciar o programa.
main é o ponto de entrada do programa:

No momento da execução (runtime), o sistema operacional carrega o programa na memória e chama a função main.
Por isso, a main é sempre a primeira função executada (mas não a primeira compilada).
Assinaturas padrão da main: A main geralmente é definida de duas maneiras principais:

Copy code
int main(void);          // Sem argumentos
int main(int argc, char *argv[]); // Com argumentos da linha de comando
  return 0; */
}
// The `main` function is mandatory in C. It serves as the entry point of the program and is the first function executed at runtime.
