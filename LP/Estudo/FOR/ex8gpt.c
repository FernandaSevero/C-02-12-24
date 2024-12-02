#include <stdio.h>
int main ()
{
    int numero, divisores =0;
    printf("digiteum numero: ");
    scanf("%d",&numero);

    for(int i = 1; i <= numero; i++)
    {
        if(numero % i == 0)
        {
            divisores++;
        }
    }

    if(divisores == 2)
    {
        printf("\n %d é primo ", numero);
    }
    else{printf("\n não %d é primo ", numero);}

    return 0;
}