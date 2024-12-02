#include<stdio.h>
#include<math.h>

int main() 
{
        
// Declarar variaveis
int latas, resto, inteiro;
float galao, parte_decimal, metros_quadrados, litros ;

//conversao de metros quadrados para litros
printf("Quantos metros quadrados \n");
scanf("%f",&metros_quadrados);

litros = (metros_quadrados / 6) * 1.1;
printf("Sao %f litros \n" , litros);  
    
// Apenas latas
if (litros <18)
    {printf("Uma lata e suficiente \n");}

else {
    latas = litros / 18;
    printf("Sao %d latas, se so latas \n",(int) ceil(latas));}
    
//Apenas galoes
if (litros < 3.6)
    {printf("Um galao e suficiente \n");}
 
else
    {galao = litros / 3.6;
    printf("Sao %d galoes, se so galoes \n ", (int)ceil (galao));}
    

// Se menos de 18 litros
if (litros<18){
galao = litros / 3.6; 
printf("O ideal e %d galao \n", (int)ceil(galao));}


// Se mais de 18 litros
else if (litros>18){
    latas = litros / 18;
    resto = (int)litros % 18;
    galao = (float)resto / 3.6;

printf("o ideal e latas %d, galao %d \n",latas,(int)ceil(galao) );

// CONCEITOR DE CAST INT(GALAO), CONCEITO DE CEIL,JUNÇAO DOS DOIS

}

return 0;
}