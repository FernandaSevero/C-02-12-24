/* 2-Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.*/

#include<stdio.h>
int main()
    // declaraçao de variaveis
    { double num_1;
    
        // entrada de dados e inicializaçao das variaveis 
        printf("Digite um numero \n");
        scanf("%lf",&num_1);

            //comparaçao
            if( 0 <= num_1){printf("%lf positivo",num_1);}
            
            else {printf("%lf negativo",num_1);}
            
         return 0;}
            
            
            
         
            