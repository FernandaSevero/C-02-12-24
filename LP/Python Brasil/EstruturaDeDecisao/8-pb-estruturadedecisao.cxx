/*8- Faça um programa que pergunte o preço de três produtos e informe qual produto você deve comprar, sabendo que a decisão é sempre pelo mais barato.*/
#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("Produto 1 \n");
    scanf("%d", & n1);
    printf("Produto 2 \n");
    scanf("%d", & n2);
    printf("Produto 3 \n");
    scanf("%d", & n3);
    
    printf("n1 %d, n2 %d, n3 %d \n ",n1,n2,n3);
    
    if (n1 != n2 && n2 != n3 && n1 != n3)
    {
    // n2 é o menor 
    if (n1 > n2 && n3 > n2){
        printf("produto 2 é o mais bartao \n");}
    
        
     // n1 é o menor
     else if(n2 > n1 && n3 > n1){
         printf("produto 1 é o mais barato \n");
          }
          
      // n3 é o menor
      else if(n2 > n3 && n1> n3){
      printf("produto 3 é o mais barato \n");    
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
            if(n3 < n2){printf("produto 1 e produto 2 são mais caros que produto 3 \n");}
            else if (n3 > n2){printf("produto 1 e produto 2 são mais baratos que produto 3 \n");}
            }      
            
          // n1 é igual a n3  
          if (n1 == n3){
              if (n1 < n2){printf("produto 1 e produto 3 são iguais e mais baratos que produto 2 \n");}
              else if (n1 > n2){printf("produto 1 e produto 3 são mais caros que produto 2 \n");}
                            }
              
           // n2 é igual a n3
           if (n2 == n3){
               if (n2 < n1){printf("produto 2 e produto 3 são iguais e mais baratos que produto 1 \n");}
               else if (n2 >n1){printf("produto 2 e n3 são iguais e mais caros que produto 1 \n");}
                              }
               
    }


return 0;}