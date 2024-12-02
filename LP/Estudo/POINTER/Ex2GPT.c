/*Exercício 2: Aritmética de Ponteiros
Objetivo: Praticar operações com ponteiros, como incremento e comparação.
Tarefa: Adapte o código para um array de float e explique por que o endereço incrementa mais bytes com tipos maiores.*/
#include <stdio.h>

int main() {
    float f_arr[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    float *f_p = f_arr;  // Ponteiro para o primeiro elemento do array


    printf("Elementos do array usando ponteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Endereço: %p, Valor: %.2f\n", f_p, *f_p);
        f_p++;  // Avança para o próximo elemento
    }

    printf("\n");

    char c_arr[] = {'a', 'a', 'd', 'e', 'r'};
    char *c_p = c_arr;  // Ponteiro para o primeiro elemento do array


    printf("Elementos do array usando ponteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Endereço: %p, Valor: %c\n", c_p, *c_p);
        c_p++;  // Avança para o próximo elemento
    }

    printf("\n");

    double d_arr[] = {23.11,2.333,6.333,2.989,5.789};
    double * d_p = d_arr;

    printf("Elementos do array usando ponteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Endereço: %p, Valor: %.2lf\n", d_p, *d_p);
        d_p++;  // Avança para o próximo elemento
    }
    return 0;
}