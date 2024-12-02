#include <stdio.h>
int main(void){
   printf("numeros: ");
   // entradas de characteres no array
   int num [5];
   for(int i = 0; i < 5; i++){
      scanf("%d",&num[i]);
   }
   // saidas de characteres no array
   for(int i = 0; i < 6; i++){ //se colacar um a mais da ruim
      printf("%d,",num[i]);
            
      printf(" o endereço em Hexadecimal é: %p ",num[i]);
      printf("e em inteiro: %d  \n",num[i]);
   }
   return 0;
}