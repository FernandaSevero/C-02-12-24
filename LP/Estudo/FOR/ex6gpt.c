/*6- Calcular o fatorial de um número*/
#include <stdio.h>
int main ()
{
    int numero, multiplicador;
    multiplicador = 1;
    printf("digite um numero:  " );
    scanf("%d",&numero);

    for(int i = 1; i <= numero; i++)
    {   
        multiplicador = multiplicador * i;
    }

    printf("Resultado %d \n",multiplicador);
    return 0;
}