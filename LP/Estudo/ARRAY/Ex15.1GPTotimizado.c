/*Para saber se a matriz dada é simétrica, devemos verificar se ela é igual à sua transposta. Ou seja, uma matriz AA de 
ordem n×nn×n é simétrica se para todo par de índices ii e jj, a condição A[i][j]=A[j][i]A[i][j]=A[j][i] for verdadeira.*/
#include <stdio.h>
#define TAM 3

int main(void) {
    // Declaração e inicialização da matriz 3x3
    int a[TAM][TAM] = {
        {1, 2, 3},
        {2, 4, 5},
        {3, 5, 6},
    };

    // Variável para armazenar o estado de simetria
    int ehSimetrica = 1;

    // Compara a simetria (apenas acima da diagonal principal)
    for (int i = 0; i < TAM; i++) {
        for (int j = i + 1; j < TAM; j++) {
            printf("\n%d = %d",a[i][j],a[j][i]);
            if (a[i][j] != a[j][i]) {
                ehSimetrica = 0; // Não é simétrica
                break;
            }
        }
        if (!ehSimetrica) {
            break;
        }
    }

    // Resultado
    if (ehSimetrica) {
        printf("A matriz é simétrica.\n");
    } else {
        printf("A matriz não é simétrica.\n");
    }

    return 0;
}
