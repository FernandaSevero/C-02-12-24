#include <stdio.h>

void addNumbers(int number1, int number2){ //declarei a variavel(parametro) number
  int sum = number1 + number2; // declarei e inicializei a variável square
  printf("Sum of %d is %d is %d",number1,number2,sum);
}

int main(void){
  //addNumbers(5.7,3); o parametro e o argumento devem ter o mesmo tipo
  addNumbers(5,3);
  return 0;
}