/*15-Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. 
Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o 
Imposto de Renda, 8% para o INSS e 5% para o sindicato, faça um programa que nos dê:

    salário bruto.
    quanto pagou ao INSS.
    quanto pagou ao sindicato.
    o salário líquido.
    calcule os descontos e o salário líquido, conforme a tabela abaixo: */

#include<stdio.h>
int main()
{ 
    float hora_trabalhada, hora_reais,salariobruto,impostoderenda,inss,sindicato,salarioliquido;
    printf("Quanto voce ganha por hora?\n");
    scanf("%f",&hora_reais);
    printf("Quantas horas voce trabalha por mes \n");
    scanf("%f",&hora_trabalhada);
    salariobruto = hora_reais*hora_trabalhada;
    printf("salario bruto %f reais",salariobruto);
    impostoderenda = ((salariobruto/100) - (11/100));
    printf("imposto de renda %f reais \n",impostoderenda);

    inss = ((salariobruto/100) - (8/100));   
    printf("inss %f reais \n",inss);
        
    sindicato = ((salariobruto/100) - (5/100));   
    printf("inss %f reais \n",inss);

    salarioliquido = salariobruto- impostoderenda-inss-sindicato;
    printf("salario liquidio %.2lf reais \n",salarioliquido); 


return 0;
}