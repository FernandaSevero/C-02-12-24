#include<stdio.h>
#include<string.h>   

int main(){
   char texto1[] = "Ola ";
   char texto2[] = "E aí?";

   strcat(texto1,texto2); //A função strcat() em C concatena (junta) a segunda string à primeira string, ou seja, ela adiciona o conteúdo da segunda string ao final da primeira string.

   printf("%s",texto1);

   return 0;
}