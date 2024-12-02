#include <stdio.h>
float multiplicacao (float numero1, float numero2){ //funçao que faz a multiplicaçaõ
  float produto = numero1 * numero2;
  return produto;
}
int main (void){
  float n1,n2;
    printf("digite o 1º numero: ");
    scanf("%f",&n1);

    printf("digite o 2º numero: ");
    scanf("%f",&n2);
    printf("Resultado %2f",multiplicacao(n1,n2));
  return 0;
}
/*Multiplicação tem dois paramentros, incializados na funçaõ main com valores de n1,n2*/