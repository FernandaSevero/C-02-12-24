/*15. Verificar se uma Matriz é Simétrica
Objetivo: Verificar se uma matriz é simétrica.
Exercício: Dada uma matriz quadrada de ordem 3 (3x3), verifique se ela é simétrica, ou seja, 
se matriz[i][j] == matriz[j][i] para todos os índices.*/
#include <stdio.h>
#define TAM 3
int main (void){
    // Declaração e inicialização da matriz a 3x3
    int a[TAM][TAM] = {
        {0,1,1},
        {1,0,1},
        {1,1,0},
    };

    // Variável para armazenar o estado de simetria
    int ehSimetrica = 1;

    // Compara a simetria
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            if(a[i][j] != a[j][i]){
                ehSimetrica = 0; 
                break;
            }
        }
        if (!ehSimetrica){ // se for zero break
            break;
        }
    }

    //Resultado
    if (ehSimetrica) {
        printf("A matriz é simétrica.\n");
    } else {
        printf("A matriz não é simétrica.\n");
    }
    
    
    return 0;
}