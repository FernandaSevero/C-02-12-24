#include <stdio.h>

void calculateSquare(int number){ //declarei a variavel(parametro) number
  int square = number * number; // declarei e inicializei a variável square
  printf("Square of %d is %d",number,square);
}

int main(){
  calculateSquare(5);
  return 0;
}