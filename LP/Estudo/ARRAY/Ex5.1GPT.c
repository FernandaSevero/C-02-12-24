/*5. Como funciona a memória de um array em C
Posições fixas na memória:

Quando você declara um array, como int array[7], ele aloca um bloco contínuo de memória para armazenar todos os elementos.
Cada elemento do array é armazenado em uma posição fixa dentro desse bloco, sendo que a posição depende do índice
do elemento e do tamanho de cada elemento (no caso de int, geralmente 4 bytes).
Ou seja posiçao 0, tem sempre o endereço de posição zero, dentro da posição zero os valores podem ser alterados.
Mas o enedereço de zero sempre será o mesmo*/

#include <stdio.h>
int main (void){

   int array[7] = {0,1,2,3,4,5,6}; 
   int tamanho = sizeof(array) / sizeof(array[0]);
   int ultimoIndice = (tamanho-1);
   
   // Imprime os valores e o endereço deles
   for(int k = 0; k < tamanho; k++){
      printf("%d",array[k]);
      printf("  endereço %p",(void*)&array[k]);
      if(k < ultimoIndice){printf(", "); 
      }
   }
   printf("\n");

      // Imprime os valores e o endereço deles depois da inversão
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
      printf("  endereço %p",(void*)&array[k]);

      if(k < ultimoIndice){printf(", "); 
      }
   }

   return 0; }

/*Não há limite fixo para o número de variáveis em um for, desde que elas estejam devidamente separadas por vírgulas.
A condição de parada deve ser uma única expressão booleana, embora você possa usar múltiplas variáveis nela.
O número de variáveis ou a complexidade do laço não afeta diretamente a execução, mas prejudica a clareza do código se não for bem estruturado.

2º OBS Use o python tutor O principal problema está no fato de que, dentro do laço for, ao fazer array[i] = array[j],
você está substituindo os valores no próprio array enquanto ainda está utilizando essas variáveis para fazer a troca. 
Isso acaba sobrescrevendo os valores e corrompendo a sequência. o array fica[6,5,4,3,4,5,6]
for (int i = 0, j = ultimoIndice ; i <= ultimoIndice && j >=0; i++, j--){ 
      
   // array[i] = array[j]; errado exxplicação 2º OBS*/