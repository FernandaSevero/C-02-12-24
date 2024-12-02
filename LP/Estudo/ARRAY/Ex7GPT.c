/*7. Soma dos Elementos de um Array 2D
Objetivo: Somar todos os elementos de um array 2D.
Exercício: Dada uma matriz de inteiros 3x3, calcule a soma de todos os seus elementos.*/
#include <stdio.h>
#define TAM 3

int main(void){

   // Declaraão e inicialização da matriz 3x3
   int matriz[TAM][TAM] = {
      {1,1,1},
      {1,1,1},
      {1,1,1},
   };

   // Calcula o tamanho da matriz (linhas e colunas)
   int totalLinhas = sizeof(matriz) / sizeof(matriz[0]);
   int totalColunas = sizeof(matriz[0]) / sizeof(matriz[0][0]);

   // Variável que aculmula as somas
   int soma = 0;

   // Soma dos elementos
   for(int i = 0; i < totalLinhas; i++){
      for(int j = 0; j < totalColunas; j++){
         soma += matriz[i][j];
      }

   }

   printf("A soma dos elementos da matriz é: %d\n", soma);


   return 0;
}