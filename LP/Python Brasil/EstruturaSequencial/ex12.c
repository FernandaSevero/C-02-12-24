/*12- Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, 
usando a seguinte fórmula: (72.7*altura) - 58  */

#include<stdio.h>


int main()
{
    float altura, peso_ideal;

    printf("Qual a sua altura? \n");
    scanf("%f",&altura);

    peso_ideal = (72.7*altura) - 58;
    printf("resutado %f",peso_ideal);

return 0;
}