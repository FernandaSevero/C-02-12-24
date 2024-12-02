/*14. Encontrar a Diagonal Principal de uma Matriz 2D
Objetivo: Extrair os elementos da diagonal principal de uma matriz 2D.
Exercício: Dada uma matriz 4x4, imprima os elementos da diagonal principal (os elementos matriz[i][i]).*/
#include <stdio.h>
#define TAM 4
 int main(void){
    // Declaração e inicialização da matriz a 4x4
    int a[TAM][TAM] = {
        {0,2,3,4},
        {2,0,2,2},
        {3,3,0,3},
        {4,4,4,0},
    };

    printf("A diagonal principal é composta por :");

    // Imprimi a diagonal principal
        for(int j = 0; j < TAM; j++){
            printf("%d ", a[j][j]);

            if(j != TAM-1){ // Põe virgula entre os elementos
                printf(",");
            }
            else{ // Põe ponto final
                printf(".");
            }
        }

    return 0;
 }