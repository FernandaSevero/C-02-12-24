/*9. Encontrar o Maior Elemento em uma Matriz 2D
Objetivo: Encontrar o maior valor em uma matriz 2D.
Exercício: Crie uma matriz de 3x3 e encontre o maior valor dentro dessa matriz.*/
#include <stdio.h>
#define TAM 3 // Macro definindo que TAM é 3
int main(void){
   // Declaração e incialização da matriz 3x3
   int matriz[TAM][TAM] ={
      {-3,-65,-4},
      {-65,-567,-9},
      {-1,-2,-3},
   };

   // Inicializa a variável 'maior' com o primeiro elemento da matriz
   int maior =  matriz[0][0]; // se inicializasse so com 0, daria erro pois os elementos são negativos

   // Laço para passar por todos os elementos da matriz
   for(int i = 0; i < TAM; i++){
      for(int j = 1; j < TAM;j++){

         // Verifica se o elemento atual é maior que o armazenado em 'maior'
         if(maior < matriz[i][j]){
            maior = matriz[i][j];
         }
      }
   }
 
   // Exibe o resultado
   printf("O maior é %d ",maior);

   return 0;
}