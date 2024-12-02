/*2. Soma dos Elementos
Objetivo: Iterar sobre o array para somar os elementos.
Exercício: Crie um array de 5 números inteiros e calcule a soma de todos os elementos. Exiba o resultado.*/ 

#include<stdio.h>
int main(void){
   int array[5]={1,2,3,4,5}; // Declaração e inicialização do array
   int soma; // Inicializa variável acumuladora
   soma = 0;

   //soma realizada por for
   for(int i = 0; i < 5 ; i++){ // Percorre os indices de 0 a 4
      soma += array[i];          // Acumula o valor do elemento atual
   }

   // Exibe resultado
   printf("soma = %d", soma);

   return 0; // Indica que o programa terminou com sucesso
}