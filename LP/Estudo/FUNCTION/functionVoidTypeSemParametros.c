/* if a function does not return any value use the void as a return type
não há nehum parametro na funçao greet, posso chama-la sem parametro*/
#include <stdio.h>
 void greet(){
    printf("good morning");
 }

 int main(){ // main é sempre a funçao que vai ser lida primeiro, realmente a principal
    greet(); // preciso sempre chamar a funçaõ e pra isso preciso de '()'
 }