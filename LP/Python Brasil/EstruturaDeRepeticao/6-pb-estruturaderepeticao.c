/*6- Faça um programa que imprima na tela os números de 1 a 20, um abaixo do outro. 
Depois modifique o programa para que ele mostre os números um ao lado do outro.*/

// for iteraçao sobre um intevalo

#include<stdio.h>
int main()
{ 
    printf("um a baixo do outro \n");
    for(int i = 1; i < 21; i++)
        {
            printf("%d \n",i);
        }

    printf("um do lado do outro \n");
    for(int i = 1; i < 21; i++)
    {
        printf("%d ,",i);
    }
    return 0;
}