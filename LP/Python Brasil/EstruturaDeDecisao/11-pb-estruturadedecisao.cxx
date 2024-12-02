/*11 - As Organizações Tabajara resolveram dar um aumento de salário aos seus colaboradores e lhe contraram para desenvolver o programa que calculará os reajustes.
Faça um programa que recebe o salário de um colaborador e o reajuste segundo o seguinte critério, baseado no salário atual:
salários até R$ 280,00 (incluindo) : aumento de 20%
salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
salários de R$ 1500,00 em diante : aumento de 5% Após o aumento ser realizado, informe na tela:
o salário antes do reajuste;
o percentual de aumento aplicado;
o valor do aumento;
o novo salário, após o aumento.*/

#include<stdio.h>
int main() 
{
    float salario, salario_ajustado,diferenca;
    printf("Qual seu salário \n");
    scanf("%f", &salario );
    
    //salários até R$ 280,00 (incluindo) : aumento de 20%

    if (salario <= 280)
    {
         salario_ajustado = salario * 1.2;
         printf("Salário %.2f \n",salario );
         printf("Ajuste de 20% \n");
         diferenca = salario_ajustado - salario;
         printf("Valor do aumento", diferenca);
         printf("Novo salário %.2f \n",salario_ajustado);
     }

    // salários entre R$ 280,00 e R$ 700,00 : aumento de 15%

     else if (salario > 280 && salario <= 700)
    {
         salario_ajustado = salario * 1.15;
         printf("Salário %.2f \n",salario );
         printf("Ajuste de 15% \n");
         diferenca = salario_ajustado - salario;
         printf("Valor do aumento", diferenca);
         printf("Novo salário %.2f \n",salario_ajustado);
     }
     
     //salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%

         else if (salario > 700 && salario <= 1500)
    {
         salario_ajustado = salario * 1.1;
         printf("Salário %.2f \n",salario );
         printf("Ajuste de 10% \n");
         diferenca = salario_ajustado - salario;
         printf("Valor do aumento", diferenca);
         printf("Novo salário %.2f \n",salario_ajustado);
     }
     
     // salários de R$ 1500,00 em diante : aumento de 5% 
     else{
         salario_ajustado = salario * 1.05;
         printf("Salário %.2f \n",salario );
         printf("Ajuste de 5% \n");
         diferenca = salario_ajustado - salario;
         printf("Valor do aumento", diferenca);
         printf("Novo salário %.2f \n",salario_ajustado);
 
         }

                 
    return 0;
}