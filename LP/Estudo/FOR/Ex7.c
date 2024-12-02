/*7- Imprimir um padrão de asteriscos (triângulo)*/
#include <stdio.h>

int numeros_triangulo (int n)
{   
    
 for(int i = 1; i <=n; i++)
    {
        for(int j = 1; j <= i; j++){
            printf("*");
        }
    printf("\n");
    }
    return 0;
}

int main(void){
int numero_linhas;

printf("insira o numero de linhas: ");
scanf("%d",&numero_linhas);

numeros_triangulo(numero_linhas);

return 0;
}