#include <stdio.h>
#include <string.h>   

int main(){
   char s1[] = "this";
   char s2[] = "this"; // fucniona com qualquer caracter

   int result = strcmp(s1,s2); // retorna 0 se igual e numero aleatorio se diferente
   
   if(strcmp(s1,s2) == 0)
      printf("equal\n");

   else if(strcmp(s1,s2) < 0)
      printf("s1 < s2\n");

   else if (strcmp(s1,s2) > 0)
      printf("s1 . S2 \n");

   printf("%d \n",result);

   return 0;
}
/* strcmp return values

< 0 if the 1st non-matching char has a lower ascii values in s1 than s2

0 if the strings are equal

> 0 if the 1st non-matching char has a higher ascii value in s1 than s2
Posso usar variaveis de controle condicionais, ja que strcmp retorna valores */
/*Comente o código a abaixo para ver a necessidade

int main(void){

   char s1[] = "This is the way.";
   char s2[] = "This is the way.";

   if(s1 == s2) printf("Equal \n");
   else printf("Not equal \n"); // sempre sera diferente pois o que esta sendo conparada sao os endereços, sao array de caracteres e arrays sao endereços

   return 0;
} */