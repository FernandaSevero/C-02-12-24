/*5. Inverter um Array
Objetivo: Inverter os elementos de um array.
Exercício: Crie um array com 7 números inteiros e imprima o array invertido.*/

#include <stdio.h>
int main (void){

   // Declração e inicialização do array com 7 inteiros
   int array[7] = {0,1,2,3,4,5,6}; 

   // "tamanho" se refere ao tamanho de bits do array, dividido pelo bit de um dos elementos, é quantidade de elementos 28bits/4bits = 7
   int tamanho = sizeof(array) / sizeof(array[0]);

   // o ultimo indice do array é o tamanho do array -1
   int ultimoIndice = (tamanho-1);

   // Laço para que os indices percorram a lista de forma oposta(i crescente e j decrescente), ou seja, inverter os elementos OBS*
   for (int i = 0, j = ultimoIndice ; i < j; i++, j--){ 
      
      // Variável temporaria para armazenar o valor do array[i]
      int temporaria = array[i];

      // Troca de valores array[i] e array[j]
      array[i] = array[j];
      array[j]= temporaria;

   
   }
   // Impressão do array apos inversão
   for(int k = 0; k < tamanho; k++){
      printf("%d",array[k]);

      if(k < ultimoIndice){printf(", "); // Para adicionar a vírgula entre os números
      }
   }

   return 0; // Indica que o programa terminou com sucesso
}

/*Não há limite fixo para o número de variáveis em um for, desde que elas estejam devidamente separadas por vírgulas.
A condição de parada deve ser uma única expressão booleana, embora você possa usar múltiplas variáveis nela.
O número de variáveis ou a complexidade do laço não afeta diretamente a execução, mas prejudica a clareza do código se não for bem estruturado.

2º OBS Use o python tutor O principal problema está no fato de que, dentro do laço for, ao fazer array[i] = array[j],
você está substituindo os valores no próprio array enquanto ainda está utilizando essas variáveis para fazer a troca. 
Isso acaba sobrescrevendo os valores e corrompendo a sequência. o array fica[6,5,4,3,4,5,6]
for (int i = 0, j = ultimoIndice ; i <= ultimoIndice && j >=0; i++, j--){ 
      
   // array[i] = array[j]; errado exxplicação 2º OBS*/