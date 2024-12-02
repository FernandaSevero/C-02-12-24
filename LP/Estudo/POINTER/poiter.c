#include<stdio.h>
int main(){

    int a = 10;

    int* p;
    p = &a;

    int** q = &p;

    printf("Endereço de a: %p  Conteúdo de a: %d \n",&a,a);
    printf("Endereço de p: %p  Conteúdo de a: %d \n",&p,*p);
    printf("Endereço de q: %p  Conteúdo de a: %d \n",&q,**q);

    return 0;
}
/*No contexto de ponteiros em C, a expressão *p é utilizada para desreferenciar um ponteiro. Isso significa que, 
em vez de acessar o valor do próprio ponteiro (ou seja, o endereço de memória armazenado na variável ponteiro p), 
você está acessando o valor armazenado no endereço de memória para o qual o ponteiro p aponta.

Se p é um ponteiro para ponteiro (ou seja, um ponteiro que armazena o endereço de outro ponteiro), 
então *p acessa o valor do ponteiro que p está armazenando (que é outro endereço).
E **p acessa o valor que está no endereço de memória que o ponteiro armazenado em p aponta.*/