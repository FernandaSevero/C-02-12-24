#include<stdio.h>
#include<string.h>

int main()
{
    char name[25];
    printf("Qual seu nome? \n");
    fgets(name,25,stdin);
    name[strlen(name)-1] = '\0';
    
    while(strlen(name)==0)
    
    {
    printf("Qual seu nome,denovo? \n");
    fgets(name,25,stdin);
    name[strlen(name)-1] = '\0'; // Remove o '\n' no final da string, pois quando aperta enter no fgets ele da uma linha '\n'
    
        }
    printf("Hello %s ",name);
return 0;}