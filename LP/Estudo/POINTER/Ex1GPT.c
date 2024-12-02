/*Exercício 1: Manipulação Básica de Ponteiros
Objetivo: Entender como declarar, inicializar e usar ponteiros para acessar valores. 
Tarefa: Complete o código para incluir um float e um char, usando ponteiros para manipulá-los da mesma forma.*/

#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;  // Ponteiro que armazena o endereço de 'a'

    printf("Endereço de 'a': %p\n", &a);
    printf("Valor de 'a' usando o ponteiro: %d\n", *p);

    *p = 20;  // Modificando o valor de 'a' através do ponteiro
    printf("Novo valor de 'a': %d\n", a);

    float b = 9.8;
    float *p_b = &b; // Ponteiro que armazena o endereço de 'b'

    printf("Endereço de 'b': %p\n", &b);
    printf("Valor de 'b' usando o ponteiro: %.2f\n", *p_b);

    *p_b = 8.9; // Modificando o valor de 'b' através do ponteiro
    printf("Novo valor de 'b': %.2f\n", *p_b);


    char c = 'a';
    char *p_c = &c;// Ponteiro que armazena o endereço de 'c'

    printf("Endereço de 'a': %p\n", &c);
    printf("Valor de 'a' usando o ponteiro: %c\n", *p_c);

    *p_c = 'u'; // Modificando o valor de 'c' através do ponteiro
    printf("Novo valor de 'c': %c\n", *p_c);

    return 0;
}
