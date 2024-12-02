/*10- Faça um Programa que pergunte em que turno você estuda. Peça para digitar M-matutino ou V-Vespertino ou N- Noturno. Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso.*/
#include <ctype.h>
#include<stdio.h>
int main()
{
    char turno; // declaração de variável
    printf("em que turno você estuda \n"); 
    scanf("%c",&turno); //entrada de dados e atribuição
    turno = toupper(turno); // conversão para letra maiúscula
    
    if(turno >= 'A' && turno <= 'Z') // limitando a entrada
        {
           if (turno == 'M' ) {printf("Bom dia! \n");} 
           else if (turno == 'V'){printf("Boa tarde! \n");}
           else if (turno == 'N'){printf("Boa noite! \n");}
        }
        
     else{printf("Valor inválido");}
    
    return 0;
}