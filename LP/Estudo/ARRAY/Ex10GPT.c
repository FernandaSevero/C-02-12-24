/*10. Somar as Linhas de uma Matriz 2D
Objetivo: Calcular a soma dos elementos de cada linha em uma matriz 2D.
Exercício: Dada uma matriz de 3x3, calcule e imprima a soma de cada linha.*/
#include <stdio.h>
#define TAM 3

int main(void){

   // Declaração e inicialização da matriz 3x3
   int matriz[TAM][TAM] = {
      {1,1,1},
      {2,2,2},
      {3,3,3},
   };

   int soma = 0;

   for(int j = 0; j < TAM; j++){
      soma = 0; // Reinicia a soma para cada linha

      for(int i = 0; i < TAM; i++){
            soma += matriz[j][i]; // Soma os elementos da linha
         }

         // Exibe o resultado da soma da linha
         printf("A soma da %dº linha é %d \n",j+1,soma);
      }
   return 0;
}