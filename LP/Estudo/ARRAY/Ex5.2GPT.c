/*5.1 Mostrar que imprimir indices opostos não aletra o array, por isso o código de inverter o array étão diferente do printar invertido.*/

#include <stdio.h>
int main (void){


   int array[7] = {1,2,3,4,5,6,7};
   int tamanho = sizeof(array) / sizeof(array[0]);
  
   // Laço para percorrer todo o array e com i e j fazendo caminhos opostos
   for (int i = 0, j = tamanho-1 ; i <= tamanho-1 && j >=0; i++, j--){ 
      
  printf("i = %d j = %d \n", array[i],array[j]);
   }
   return 0; }
/*Impressão: O código apenas imprime os elementos correspondentes dos índices opostos, mas não realiza nenhuma troca. 
Não há alteração no array.
Objetivo: O objetivo parece ser apenas demonstrar os valores dos índices i e j durante a execução do laço, 
sem alterar o conteúdo do array. */