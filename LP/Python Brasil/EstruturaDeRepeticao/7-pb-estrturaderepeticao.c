/*7- Faça um programa que leia 5 números e informe o maior número.*/
// for iteração sobre um intervalo ou coleção
#include<stdio.h>
int main()
{
    int i,numero,maior;
    printf("digite o 1 numero \n");
    scanf("%d",&numero);
    maior = numero; // primeiro numero digitado é atribuido  "maior"
// for iteração sobre um intervalo ou coleção

    for(i = 2; i <=5; i++)
   {
        printf("digite o %d numero \n",i);
        scanf("%d",&numero);
        

        if (numero>maior)
        {
            maior = numero;
            
        }
        printf("maior %d \n",maior);
    }




    return 0;
}