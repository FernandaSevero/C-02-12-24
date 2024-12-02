/*7-Faça um Programa que leia três números e mostre o maior e o menor deles*/
#include<stdio.h>
int main () {
    int n1,n2,n3;
    printf("N1 \n");
    scanf("%d", & n1);
    printf("N2 \n");
    scanf("%d", & n2);
    printf("N3 \n");
    scanf("%d", & n3);
    
    printf("n1 %d, n2 %d, n3 %d \n ",n1,n2,n3);
    
    if (n1 != n2 && n2 != n3 && n1 != n3)
    {
    // n2 é o menor 
    if (n1 > n2 && n3 > n2){
        printf("n2 é o menor n3 \n");
        if (n1>n3){printf("n3 é o maior \n");}
        else if  (n3>n1){printf("n1 é o maior \n");}
        }
        
      // n1 é o menor
      else if(n2 > n1 && n3 > n1){
          printf("n1 é o menor \n");
          if (n2 > n3){printf("n2 é o maior \n");}
          else if (n2 < n3){printf("n3 é o maior \n");}
          }
          
       // n3 é o menor
       else if(n2 > n3 && n1> n3){
        printf("n3 é o menor \n");
        if (n2 > n1) {printf("n2 é o maior \n");}
        else if(n1 > n2){printf("n1 é o maior \n");}
        }    
    }
     
           
        else if(n1 == n2 || n2 == n3 || n1 == n2)
        {
               if (n1 == n2 && n2 == n3)
             {
                 printf("Todos iguais");
               }
            // n1 é igual a n2
            if  (n1 == n2){
                printf("n1 é igual a n2 \n");
                if (n2> n3){printf("e n1 e n2 são maiores que n3 \n");}
                else if(n3 > n2){printf("e n1 e n2 são menores que n3 \n");}
                }      
                
              // n1 é igual a n3  
              if (n1 == n3){
                  printf("n1 é igual a n3");
                  if (n1 > n2){printf(" n1 e n3 são iguais e maiores que n2 \n");}
                  else if (n1 < n2){printf(" n1 e n3 são iguais e menores que n2 \n");}
                  }
                  
               // n2 é igual a n3
               if (n2 == n3){
                   printf("n2 e n3 são iguais");
                   if (n2 > n1){printf("n2 e n3 são iguais e maiores que n1 \n");}
                   else if (n2 < n1){printf("n2 e n3 são iguais e menores que n1 \n");}
                   }
            }
    
    return 0;}