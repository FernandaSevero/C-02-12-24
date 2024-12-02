/*11 - Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre:
1 o produto do dobro do primeiro com metade do segundo .
2 a soma do triplo do primeiro com o terceiro.
3 o terceiro elevado ao cubo.*/

#include<stdio.h>
#include <math.h>
int main()
{//n1,n2, e base sao nessa ordem os numero que serao dados pelo usuário
    double n1,n2,m1,m2,base,expoente,resultado; // declarar  abrir memória
    printf("n1 \n");
    scanf("%lf",&n1);
    printf("n2 \n");
    scanf("%lf",&n2);
    printf("base \n");
    scanf("%lf",&base);//inicializei, atribui valor e direcionei para o endereço de memória

    expoente = 3;
   m1 = (2*n1)*(n2/2); // m1,m2, resultado sao nessa ordem as coisas que o probelma pediu pra mostrar
   m2 = (3*n1)+base;
    
    resultado = pow (base,expoente);
    printf("%lf m1 \n",m1);
    printf("%lf m2 \n",m2);
    printf("%lf resultado \n",resultado);

    return 0;
}