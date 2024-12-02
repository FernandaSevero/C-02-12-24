//3-Faça um Programa que peça dois números e imprima a soma.
#include <stdio.h>
int main(){ 
int numero1, numero2, soma; //definir endereços de memória com os espaços que vou precisar

printf("digite o primeiro valor");
scanf("%d", &numero1);

printf("digite o segundo valor");
scanf("%d", &numero2);

soma = numero1 + numero2;
printf("A soma e %d", soma);
    return 0;
}