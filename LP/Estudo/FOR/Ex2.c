/*2- Somar os números de 1 a 10*/
#include <stdio.h>
 int main()
 {
    int somador; // variavel acumuladora, que faz as somas
    somador = 0;
    for(int i = 1; i < 11; i++)
    {
   
        somador = somador + i;
    }
    printf("\n A soma é %d \n",somador);
    return 0;
 }