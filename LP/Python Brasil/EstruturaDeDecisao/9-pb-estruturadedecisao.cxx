/*9- Faça um Programa que leia três números e mostre-os em ordem decrescente.*/

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
            if (n1>n3){printf("%d > %d > %d \n",n3, n1,n2 );}
            else if  (n3>n1){printf("%d > %d > %d \n", n1, n3, n2);}
            }
            
          // n1 é o menor
          else if(n2 > n1 && n3 > n1){
              if (n2 > n3){printf("%d > %d > %d \n \n",n2,n3,n1);}
              else if (n2 < n3){printf("%d > %d > %d \n",n3,n2,n1 );}
              }
              
           // n3 é o menor
           else if(n2 > n3 && n1> n3){
            if (n2 > n1) {printf("%d > %d > %d \n",n2,n1,n3 );}
            else if(n1 > n2){printf("%d > %d > %d \n",n1,n2,n3);}
            }    
        }
     
           
        else if(n1 == n2 || n2 == n3 || n1 == n3)
        {
            
             
             if (n1 == n2 && n2 == n3)
             {
                 printf("Todos iguais");
               }
            
            // n1 é igual a n2
            if  (n1 == n2){
                if (n2> n3){printf(" %d = %d > %d \n",n1, n2 ,n3);}
                else if(n3 > n2){printf("%d > %d = %d \n",n3 ,n1,n2);}
                }      
                
              // n1 é igual a n3  
              if (n1 == n3){
                  if (n1 > n2){printf(" %d = %d > %d \n",n1, n3 ,n2);}
                  else if (n1 < n2){printf(" %d > %d = %d  \n",n2, n1, n3);}
                  }
                  
               // n2 é igual a n3
               if (n2 == n3){
                   if (n2 > n1){printf("%d = %d > %d \n",n2, n3, n1);}
                   else if (n2 < n1){printf("%d> %d = %d \n",n1,n2,n3);}
                   }
        
             
            }
    
    return 0;}