/*11. Multiplicação de Matrizes 2D
Objetivo: Realizar a multiplicação de duas matrizes 2D.
Exercício: Crie duas matrizes 2x2 e calcule o produto delas. A multiplicação de matrizes segue a regra do produto de
uma linha por uma coluna.*/
#include <stdio.h>

int main(void) {
    int soma_c = 0; // Variável para acumular a soma dos elementos do resultado

    // Matriz A 2x2
    int a[2][2] = {
        {3, 2},
        {5, -1}
    };

    // Matriz B 2x2
    int b[2][2] = {
        {6, 4},
        {0, -7}
    };

    // Matriz resultado 2x2
    int c[2][2] = {0}; // Inicializada com zeros

    // Multiplicação de matrizes
    for (int i = 0; i < 2; i++) { // Percorre as linhas de A
        for (int j = 0; j < 2; j++) { // Percorre as colunas de B
            for (int k = 0; k < 2; k++) { // Percorre os elementos para o produto escalar
    // 1º laço de i = 0: 
        //1º laço de j = 0:
            //1º laço de k = 0: c[0][0] += a[0][0] * b[0][0]
            //2º laço de k = 1: c[0][0] += a[0][1] * b[1][0]
            
    // 1º laço de i = 0:
        // 2º laço de j = 1:
                //1º laço de k = 0: c[0][1] += a[0][0] * b[0][1]
                //2º laço de k = 1: c[0][1] += a[0][1] * b[1][1]

    // 2º laço de i = 1: 
        //1º laço de j = 0:
            //1º laço de k = 0: c[1][0] += a[1][0] * b[0][0]
            //2º laço de k = 1: c[1][0] += a[1][1] * b[1][0]

    // 2º laço de i = 1: 
        //2º laço de j = 0:
            //1º laço de k = 0: c[1][1] += a[1][0] * b[0][1]
            //2º laço de k = 1: c[1][1] += a[1][1] * b[1][1]

                c[i][j] += a[i][k] * b[k][j];
            }
            soma_c += c[i][j]; // Soma os elementos da matriz resultante
        }
    }

    printf("Matriz c: \n");
    for(int m = 0; m < 2; m++){
        for(int n = 0; n < 2; n++){
            printf(" %d",c[m][n] );
            if(n != 1){
                printf(",");
            }
        }
        printf("\n");
    }
    printf("\nA soma dos elementos da matriz resultante é: %d\n", soma_c);

    return 0;
}
