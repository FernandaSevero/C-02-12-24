//5-Faça um Programa que converta metros para centímetros: multiplicar por 100

#include<stdio.h>

int main (){
    float valor1;
    float resultado;
    printf("insira um valor para conversão usando ponto ao invés de virgula: \n");
    scanf("%f",&valor1);
    resultado = valor1 * 100;

    printf("Resultado %fcm", resultado);


    return 0;
}