#include<stdio.h>

void birthday(char name[ ], int age) /*parametrs is what this function need to be executed*/
{    
     printf("\n happy birthday dear %s",name);  
     printf("\n You are %d yeras old",age); 
}

int main()
{
    char name[ ] = "Fer";
    int age = 27;
       // printf("%lu",sizeof(name));
        
    birthday (name, age); //anything you ares passing to a function is an argument wee need a match set of parameters
    
return 0;
}