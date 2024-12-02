/*3. Encontrar o Maior Elemento
Objetivo: Encontrar o maior valor dentro de um array.
Exercício: Dado um array de inteiros com 6 elementos, encontre o maior valor e imprima-o.*/
#include<stdio.h>
int main (void){
   int maior;

   // Declaração e incialização do array
   int array[6] = {10,2,3,44,5,6};
   // Inicializa a variável "maior" com o primeiro elemento do array
   maior = array[0];

   // Iterasobre os elementos do array, a partir do segundo elemento
   for(int i=1; i < 6; i++){ // Percorre de indice 1 até 5
      if(maior < array[i]){  // Verifica se o elemeno atual é maior que "maior"
         maior = array[i];   // Atualiza "maior" com o valor o elemento atual
      }
   }

   // Exibe o maior numero encontrado
   printf("%d \n",maior);
  
   return 0; // Indica que o programa terminou com sucesso
}
