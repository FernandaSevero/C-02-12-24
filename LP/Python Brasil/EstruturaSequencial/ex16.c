/*Faça um programa para uma loja de tintas. 
O programa deverá pedir o tamanho em metros quadrados da área a ser pintada. 
Considere que a cobertura da tinta é de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de 18 litros, 
que custam R$ 80,00. 
Informe ao usuário a quantidades de latas de tinta a serem compradas e o preço total. */
#include<stdio.h>
int main()
{ float metrosquadrados,litrostinta,latastinta,valor;
    printf("Quantos metros quadrados? \n");
    scanf("%f",&metrosquadrados);

    // tinta é de 1 litro para cada 3 metros quadrados 
    litrostinta = (metrosquadrados/ 3);
    latastinta = litrostinta/18;
    printf("São %f latas de tinta \n",latastinta);


    valor = latastinta * 80;
    printf("%f reais \n",valor); 

    return 0;
}