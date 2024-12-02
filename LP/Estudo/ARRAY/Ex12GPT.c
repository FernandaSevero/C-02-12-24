/*12. Transposta de uma Matriz 2D
Objetivo: Calcular a transposta de uma matriz 2D.
Exercício: Dada uma matriz 3x3, crie e imprima a transposta dessa matriz. A transposta de uma matriz é obtida 
trocando suas linhas por colunas.*/
#include <stdio.h>
#define TAM 3
int main (void){
    // Declaração e inicialização da matriz a 3x3
    int a[TAM][TAM] = {
        {1,1,1},
        {2,2,2},
        {3,3,3},
    };

    // Declaração da matris, será a transporta
    int b[TAM][TAM] = {{0},{0},{0},};

    // Imprime a matriz transposta
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            b[j][i] = a[i][j];
        }
    }

    // Laço para passar por todos os elementos da matriz b 3x3
    printf("Matriz Transposta:\n");
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM;j++){
        printf("%d ",b[i][j]);
        }
    printf("\n"); // Quebra de linha após cada linha

    }

    return 0;
}