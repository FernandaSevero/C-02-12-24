#include<stdio.h>
int main ()
{
    int numero;
    printf("Tabuada de que numero? ");
    scanf("%d",&numero);
    for(int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d \n",numero, i, i* numero);
    }
    return 0;
}