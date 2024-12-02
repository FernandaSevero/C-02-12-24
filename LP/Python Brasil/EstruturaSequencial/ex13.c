/*13 -Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo que calcule seu peso ideal,
 utilizando as seguintes fórmulas:

    Para homens: (72.7*h) - 58
    Para mulheres: (62.1*h) - 44.7 */

#include<stdio.h>

int main()
{
    float altura, peso_ideal_homem, peso_ideal_mulher;

    printf("Qual a sua altura? \n");
    scanf("%f",&altura);

    peso_ideal_mulher = (72.7*altura) - 58;
    peso_ideal_homem = (62.1*altura) - 44.7;

    printf ("se voce é mulher seu peso ideal é %f se você for homem seu peso ideal é %f",peso_ideal_mulher,peso_ideal_homem);


    return 0;
}