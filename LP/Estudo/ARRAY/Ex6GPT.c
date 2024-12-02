/*6. Declaração e Impressão de um Array 2D
Objetivo: Declarar e acessar elementos de um array 2D.
Exercício: Declare uma matriz de 3x3 (3 linhas e 3 colunas) e inicialize com os valores 1, 2, 3, 4, 5, 6, 7, 8, 9. 
Em seguida, imprima a matriz no formato de linhas e colunas.*/
#include <stdio.h>

int main(void){

   // Declaração e inicialização de um array de 9 elementos
   int array[3][3] = {
                     {1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}
                     };

   // Loop para as linhas {0},{1},{2}
   for(int i = 0; i <= 2; i++){

      // Loop para as colunas {1,2,3},{4,5,6}.{7,8,9}
      for(int j = 0; j <= 2; j++){
         printf("%d",array[i][j]);

         // Aadiciona vírgula entre os números
         if(j < 2){
            printf(", ");
         }
      }
      printf("\n");
   }
   

   return 0;
}