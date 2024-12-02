/*4. Contar a Ocorrência de um Número
Objetivo: Contar quantas vezes um número aparece no array.
Exercício: Dado um array de inteiros com 10 elementos, 
peça ao usuário para inserir um número e conte quantas vezes esse número aparece no array. */
#include<stdio.h>

int main (){

   // Declaração das variáveis
   int numero, contador = 0;

   // Inicialização de Array com 10 número inteiros
   int array[10]={3,54,23,6,4,3,2,7,1,9}; 

   // Solicita ao usuario um número que deseja verificar no array
   printf("Digite um numero: "); 
   scanf("%d",&numero); // Lê o número fornecido pelo usuário

   //Laço para percorrer os numeros do Array
   for(int i = 0; i < 10; i++){ // Verifique indices valido do Array
      if(numero == array [i]){ // Compara o número fornecido com elemento atual do Array
         contador += 1; // Incrementa o contador se houver correspondência
      }
    }

   // Exibe o resultado ao usuário
   printf("O numero %d aparece %d vezes",numero,contador);

   return 0; // Indica que o programa terminou com sucesso
}