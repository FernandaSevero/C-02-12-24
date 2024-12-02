//1-Faça um Programa que peça dois números e imprima o maior deles
#include<stdio.h>
int main()
    // declaraçao de variaveis
    { float num_1, num_2;
    
        // entrada de dados e inicializaçao das variaveis 
        printf("Digite o primeiro numero \n");
        scanf("%f",&num_1);
        
        printf("Digite o segundo numero \n");
        scanf("%f",&num_2);

             //comparaçao
             if(num_1 > num_2)
             {printf("O primeiro %f numero e maior que o segundo %f",num_1,num_2);}
             
             else if (num_2 > num_1)
             {printf("O segundo %f numero e maior que o segundo %f",num_2,num_1);}
             
             else{printf("Os queridos %f e %f sao iguais",num_2,num_1);}
   
      return 0;
    }