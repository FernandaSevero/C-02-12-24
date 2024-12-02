#include <stdio.h>
int main(void){
/*Se eu deixar os dois arrays no programa da erro, porque nao posso tratar o array com um variavel e mudar o valor
que ele recebe
*/
   //char meuArray[16] = {'A','m','o','r',' ','n','a','s',' ','R','e','d','e','s','.'}; nao é uma string
   char meuArray[16] = {'A','m','o','r',' ','n','a','s',' ','R','e','d','e','s','.','\0'}; // é uma string

  
   // saidas de characteres no array
   for(int i = 0; i < 16; i++){
      printf("\n posição %dº é ",i);
      printf("'%c'",meuArray[i]);
      
      printf(" o endereço em Hexadecimal é: %p ",meuArray[i]);
      printf("e em inteiro: %d  ",meuArray[i]);
   }
   printf("\n Aqui acabou o array.");
   return 0;
}
/*Sim, a razão pela qual os endereços de memória não são sempre consecutivos (mesmo quando você acessa elementos consecutivos de um array)
tem a ver com a arquitetura interna da memória, com alinhamento de memória e a forma como o compilador gerencia a memória.*/