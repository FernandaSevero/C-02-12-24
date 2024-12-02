/*8- Verificar se um número é primo*/
#include <stdio.h>
int main()
{   
    int numero, quociente, prova_real,acumulador;
    printf("Escreva um numero: ");
    scanf("%d",&numero);
    getchar(); // limpar o buffer para que o programa se encerre corretamente
    
    acumulador = 0;
    for(int i = 1; i <= numero; i++ )
    {
        quociente = numero % i; 
        prova_real = quociente * i;
        if (prova_real == quociente)
        {
            acumulador = acumulador + 1; // acumula o numero de divisoes exatas do numero pelo i
        }
    }
    if(acumulador > 2){printf("\n nao é primo \n");}
    else {printf("\n é primo \n");}
    

    return 0;
    
}
   