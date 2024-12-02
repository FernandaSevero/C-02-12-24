#include <stdio.h>

#define TAM 3
int main(void){

   // Declaração e inicialização de um array de 9 elementos
   int array[TAM][TAM] = {
                     {1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}
                     };
                     
   // Calcula o tamanho da matriz (linhas e colunas)
   int totalLinhas = sizeof(array) / sizeof(array[0]);
   int totalColunas = sizeof(array[0]) / sizeof(array[0][0]);

   // Exibe mensagem inicial
   printf("Matriz 3x3:\n");

   // Loop para as linhas {0},{1},{2}
   for(int i = 0; i < totalLinhas; i++){

      // Loop para as colunas {1,2,3},{4,5,6}.{7,8,9}
      for(int j = 0; j < totalColunas; j++){
         printf("%d",array[i][j]);

         // Adiciona vírgula entre os números
         if(j < totalColunas - 1){
            printf(", ");
         }
      }
      printf("\n"); // Quebra no final de cada linha da matriz
   }
   

   return 0;
}