/*3- Faça um Programa que verifique se uma letra digitada é "F" ou "M". Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido.*/

#include<stdio.h>
int main()    
    { 
    // declarar variaveis
    char letra;
    
    // entrada de dados e inicializacao das variaveis
    printf("Digite a primeira letra \n");
    scanf("%c", &letra);  
    /*depende de como eu falo pra ele ler a variavel ele obedece, se 'd'' o       valor int se 'c'' o valor de char
    printf("letra %d",int(letra));
    printf("letra %c",int(letra)); */
    
    //comparar com os valores da tabela ASCII
    if((int)letra == 70 ||(int) letra == 102){printf("Femea \n");}
    
    else if((int)letra == 77 ||(int) letra == 109){printf("Macho \n");}
    
    else{printf("Nem macho nem femea e foda-se \n");}
    
    
    return 0;
    }