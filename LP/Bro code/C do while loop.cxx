#include<stdio.h>
int main()
{    
     int number = 0;
     int sum = 0;
     /*while(number > 0)
     {
         printf("Enter a number above 0 \n");
         scanf("%d",number);
         if(number > 0)
            {    
             sum = sum + number;
             }
     }
     
     assim nem funciona porque a condiçao inicial nao ´e satisfeita, por isso o uso do do*/
    
     do{
         printf("Enter a number above 0 \n");
         scanf("%d", &number);
         if(number > 0)
            {    
             sum = sum + number;
             }
     }
    while(number > 0);
    printf("sum %d",sum);
    return 0;}
