/*8 Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. 
Calcule e mostre o total do seu salário no referido mês.
há meses com dias diferentes, ignorando esse problema  seria 21 dias uteis,pelo google*, 
se bem que ja resolvi pedindo o valor por mês*/

#include <stdio.h>
int main()
{
    int valor, hora, resultado;
    // abri o espaço de memória pra minhas variáveis
    printf("qual o valor por hora? \n");
    scanf("%d",&valor); // atribui valor a variável

    printf("Quantas horas por dia voce trabalha? \n");
    scanf("%d",&hora); // atribui valor a variável

    resultado = (4*5*hora)*valor;
    printf("Você ganha %d reais ao mês.\n",resultado); 
    scanf("%d",&hora); // atribui valor a variável

    return 0;
}


