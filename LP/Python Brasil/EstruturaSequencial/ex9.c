/* 9- Faça um Programa que peça a temperatura em graus Fahrenheit, 
transforme e mostre a temperatura em graus Celsius.

C = 5 * ((F-32) / 9).  */

#include <stdio.h>

int main()
{ 
float t_celcius, t_farenheit; // declarei = abri espaço na memória para essas variaveis


printf("Temperatura em farenheit?");
scanf("%f",&t_farenheit); // inicialização da variavel = atribui valor

t_celcius = 5 * ((t_farenheit-32) / 9);
printf("Temperatura em celcius é %fº\n",t_celcius);


return 0;
}
