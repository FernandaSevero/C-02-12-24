/*8. Média dos Elementos de um Array 2D
Objetivo: Calcular a média dos elementos de um array 2D.
Exercício: Dada uma matriz 3x3, calcule a média de todos os elementos e imprima o resultado.*/
#include <stdio.h>
#define TAM 3 // defini uma macro TAM , para o tamanho 3
int main(){

   // Declaração e inicialização da matriz 3x3
   int matriz[TAM][TAM] = {
      {2,4,6},
      {1,3,5},
      {9,9,9},
   };

   // A variável "somas" é acumuladora e soma os elementos. 
   float media, somas = 0;

   // Calcula a soma de todos os elementos da matriz
   for(int i = 0; i < TAM; i++){
      for(int j = 0; j < TAM; j++){
         somas += matriz[i][j];
      }

   }

   //Calcula a "media" das somas dos elementos da matriz
   media = somas/(TAM*TAM);

   // Exibe o resultado formatado
   printf("A média é %.2f ",media);

   return 0;
}

/*As macros são diretrizes para o pré-processador, 
que substituem textualmente a palavra TAM pelo valor 3 em todo o código antes da compilação.*/