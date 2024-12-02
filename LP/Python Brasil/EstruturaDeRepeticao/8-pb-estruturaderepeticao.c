/*8- Faça um programa que leia 5 números e informe a soma e a média dos números*/
#include<stdio.h>

int main()
{
    int i,numero = 0,soma = 0;
    float media;
   

    for(i = 1; i <= 5; i++) // executa 5 vezes mas na ultim é 5 + 1(i++)
    {   
        
        printf("\n Digite o %dº numero: ",i);
        scanf("%d",&numero); 
        getchar(); // se nao limpar o programa fica com um "\n" no buffer "como esntrada" e nao encerra
        printf("%d soma anterior \n",soma);
        soma = soma + numero; // variável soma é atualizada com o valor atual de numero, somado ao valor anterior de soma
        printf("atual numero %d  \n",numero);
        printf("atual soma %d  \n",soma);
    }
    media = (float)soma / (i-1); // sem parentes executa primeiro o "i", sem o float convertendo pode gerara truncamento,ou seja,(vai ser uma divisa por inteira e os decimais vao ser descartados)
    printf("%f media \n",media);
      
    return 0;
    
}