#include<stdio.h>
#include<ctype.h>

int main()
{  char grade;
    printf(" \n enter a Letter grade :");
    scanf("%c",&grade);
   grade = toupper(grade);
    
    switch (grade){
            case 'A':
            printf("A is ok");
            break; 
            
            case 'B':
            printf("B is ok");
            break;
            
            case 'C':
            printf("C is ok");
            break;
            
            case 'D':
            printf("D is ok");
            break;
            
            default:
            
            printf("quando nao digita nada");
    }
   
    

return 0;
}