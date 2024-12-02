/*Faça um programa para a leitura de duas notas parciais de um aluno. O programa deve calcular a média alcançada por aluno e apresentar:
A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
A mensagem "Reprovado", se a média for menor do que sete;
A mensagem "Aprovado com Distinção", se a média for igual a dez.*/

#include<stdio.h>
int main(){
    float nota1, nota2, notafinal; //Declaracao da variavel, espaço de memoria
    
    //incializaçao defino o valor da variavel colocando a entrada de dado no endereçamento
    printf("Nota 1 \n");
    scanf("%f", &nota1);
    
    printf("Nota 2 \n");
    scanf("%f", &nota2);
    
    notafinal = (nota1 + nota2)/2; 
    
    //A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
    if( notafinal == 10 ) {printf("Aprovado com Distinção \n");}
    
    //A mensagem "Aprovado com Distinção", se a média for igual a dez.
    else if(notafinal >= 7 )  {printf("Aprovado \n");}
    
    // A mensagem "Reprovado", se a média for menor do que sete;
    else {printf("Reprovado \n");}
    
    return 0;}