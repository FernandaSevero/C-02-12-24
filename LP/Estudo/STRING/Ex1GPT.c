/*1. Declaração e Impressão de Strings
Objetivo: Aprender a declarar, inicializar e imprimir strings.
Exercício: Declare uma string de tamanho 50 e inicialize-a com o valor "Bem-vindo ao C!". Em seguida, imprima a string na tela.*/
#include <stdio.h>
#include <string.h>

int main(void){
    char string[50] = "Bem-vindo ao C!";

    printf("%s\n", string);

    return 0;
}