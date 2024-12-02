/*3- Imprimir a tabuada de um número*/
#include <stdio.h>
int main()
{
    float  numero, multiplicacao;
    printf("Tabuada de que numero? ");
    scanf("%f",&numero);
    getchar();

    for(int i = 1; i <= 10; i++)
    {
        multiplicacao = numero * i; 
        printf("\n %.2f x %.2f = %.2f", i,  numero, multiplicacao);
    }
       
    
    return 0;
}