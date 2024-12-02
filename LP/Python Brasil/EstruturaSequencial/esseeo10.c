/* 10- Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Fahrenheit.
F = C X 1,8 + 32*/

#include<stdio.h>
int main()
{
    float t_celcius, t_farenheit;  // declarei a variavel = abri um espaço na memoria para ela
    printf("temperatura em celcius \n");
    scanf("%f",&t_celcius); // incializei a variável = com & eu dei o endereço para por o valor recebido do scanf = agora ponteiro aponta para um enderço que tem valor 

  

    t_farenheit = (t_celcius  * 1.8) + 32; // atribui valor a variavel, inicializei
    printf("%f farenheit",t_farenheit);

    return 0;
}