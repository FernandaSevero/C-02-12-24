#include <stdio.h>
int main ()
{
float horas, valor_hora, salario_bruto, imposto_renda, sindicato,FGTS, descontos,salario_liquido;
printf("Quantas Horas trabalhadas \n") ;
scanf("%f",&horas);

printf("Quantas ganha po hora trabalhadas \n") ;
scanf("%f",valor_hora);

salario_bruto = horas * valor_hora;

/*Imposto de Renda
3% para o Sindicato
FGTS corresponde a 11% do Salário Bruto mas não é descontado
total de descontos
salario liquido*/

    // IR Salário Bruto até 900 (inclusive) - isento
    if(salario_bruto <= 900)
        {
         imposto_renda = 0;
         printf("Imposto de renda isento \n");
         sindicato = salario_bruto * 0.3;
         printf("Sindicato %.2f reais \n", sindicato);
         FGTS = salario_bruto * 0.11;
         printf("FGTS %.2f reais \n",FGTS);
         descontos = imposto_renda + sindicato; 
          printf("Descontos %.2f reais \n", descontos);
          salario_liquido = salario_bruto -  descontos;
          printf("Salário liquido %.2f reais \n",salario_liquido);   
    }
    
    // Salário Bruto até 1500 (inclusive) - desconto de 5%
    else if (salario_bruto > 900 && salario_bruto <= 1500)
        {
         imposto_renda = salario_bruto * 0.05;
         printf("Imposto de renda %.2f reais \n", imposto_renda);
         sindicato = salario_bruto * 0.3;
         printf("Sindicato %.2f reais \n", sindicato);
         FGTS = salario_bruto * 0.11;
         printf("FGTS %.2f reais \n",FGTS);
         descontos = imposto_renda + sindicato; 
         printf("Descontos %.2f reais \n", descontos);
         salario_liquido = salario_bruto -  descontos;
          printf("Salário liquido %.2f reais \n",salario_liquido);   
    }
    
    
   //Salário Bruto até 2500 (inclusive) - desconto de 10%
    else if (salario_bruto > 900 && salario_bruto <= 1500)
        {
         imposto_renda = salario_bruto * 0.1;
         printf("Imposto de renda %.2f reais \n", imposto_renda);
         sindicato = salario_bruto * 0.3;
         printf("Sindicato %.2f reais \n", sindicato);
         FGTS = salario_bruto * 0.11;
         printf("FGTS %.2f reais \n",FGTS);
         descontos = imposto_renda + sindicato; 
         printf("Descontos %.2f reais \n", descontos);
         salario_liquido = salario_bruto -  descontos;
         printf("Salário liquido %.2f reais \n",salario_liquido);   
    }
    
    //Salário Bruto acima 2500 - desconto de 20%
    else 
        {
         imposto_renda = salario_bruto * 0.2;
         printf("Imposto de renda %.2f reais \n", imposto_renda);
         sindicato = salario_bruto * 0.3;
         printf("Sindicato %.2f reais \n", sindicato);
         FGTS = salario_bruto * 0.11;
         printf("FGTS %.2f reais \n",FGTS);
         descontos = imposto_renda + sindicato; 
         printf("Descontos %.2f reais \n", descontos);
         salario_liquido = salario_bruto -  descontos;
         printf("Salário liquido %.2f reais \n",salario_liquido);   
    }
    
return 0;
}