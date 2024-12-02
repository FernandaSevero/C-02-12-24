#include <stdio.h>
#include <string.h>

int main() {
   char food[] = "PIZZA";  //
   printf("\ntamanho food: %zu \n", strlen(food));  

   //char bestFood[strlen(food+1)];  aqui to movendo o ponteiro pro i
   char bestFood[strlen(food)+1]; // sempre por mais um pra ter certeza qeu vai caber

   strcpy(bestFood, food);  // 

   printf("%s", bestFood);  // 
   printf("\ntamanho bestFood: %zu \n", strlen(bestFood)); 
   return 0;
}
