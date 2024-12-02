/*1. Declaração e Atribuição Simples
Objetivo: Declarar um array de inteiros e inicializá-lo com alguns valores.
Exercício: Declare um array de 5 inteiros e inicialize-o com os valores 10, 20, 30, 40, 50. 
Depois, imprima todos os elementos do array.*/
#include<stdio.h>

int main(void){
   // Declaração e iniciaçização do array com 5 inteiros
   int array[5] = {10,20,30,40,50};

   //Laço para imprimir todos os elementos do array

   for(int i = 0; i <=4;i++){  // Percorre os indices de 0 a 4
      printf("%d, ",array[i]); // Imprime o elemento atual
      if(i < 4){               // Adiciona uma virgula e espaço, exceto no último elemento
         printf(", ");
      }
   }
   printf("\n"); // Quebra de linha ao final da impressão

   return 0; 
}