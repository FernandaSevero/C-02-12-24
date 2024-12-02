/*13. Somar as Colunas de uma Matriz 2D
Objetivo: Calcular a soma de cada coluna em uma matriz 2D.
Exercício: Dada uma matriz 4x4, calcule e imprima a soma de cada coluna.*/
#include <stdio.h>
#define TAM 4
 int main(void){
    // Declaração e inicialização da matriz a 4x4
    int a[TAM][TAM] = {
        {1,2,3,4},
        {2,2,2,2},
        {3,3,3,3},
        {4,4,4,4},
    };
    
    // Loop que calcula a soma
    for(int i = 0; i < TAM; i++){
        int soma = 0;// Declaração e inicialização da variavel acumuladora 'soma'
        for(int j = 0; j < TAM; j++){
            soma += a[j][i]; // Soma das colunas
        }
        printf("A soma da %dª coluna é %d\n", i + 1, soma);
    }

    return 0;
 }