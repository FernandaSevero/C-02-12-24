#include <stdio.h>
int main(){
   printf("Escreva uma palavra: ");
   // entradas de characteres no array
   char name [5];
   for(int i = 0; i < 5; i++){
      scanf("%c",&name[i]);
   }
   // saidas de characteres no array
   for(int i = 0; i < 6; i++){
      printf("%c",name[i]);
   }
   return 0;
}