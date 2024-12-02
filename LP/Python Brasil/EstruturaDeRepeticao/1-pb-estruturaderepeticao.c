/*Faça um programa que peça uma nota, entre zero e dez. Mostre uma mensagem caso o valor seja inválido e continue pedindo até que o usuário informe um valor válido. */
#include <stdio.h>
#include<string.h>
int main()
{
 float nota; //declaração
 
 do
 {
 printf("de uma nota de zero a qo \n");
 scanf("%f",&nota); //atribuição
 }
 
 while(nota < 0 || nota>10);// laço de repeição condicional, depende de logica interna
printf("sua nota é %.2f \n",nota);
 
   return 0;
 }