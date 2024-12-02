//3- Faça um Programa que peça dois números e imprima a soma.

#include<stdio.h>
int main(){
    int numero1;
    int numero2;
    int soma;
    
    numero1 = 5;
    numero2 = 4;
    printf("Os números salvos na memoria são %d e %d\n",numero1,numero2);
    /* Criei um espaço na memória pra cada uma das variáveis
    eu podia atribuir um valor as variáveis e depois esses valores seriam substituidos
    
    */
    
    printf("digite o numero1: \n");
    scanf("%d",&numero1);
    
    printf("digite o numero2\n");
    scanf("%d",&numero2);
    
    soma = numero1 + numero2;
    printf("\n A soma e %d",soma);
    
    
    return 0;
}