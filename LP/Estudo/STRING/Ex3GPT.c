/*3. Concatenar Strings
Objetivo: Concatenar duas strings.
Exercício: Declare duas strings, uma com o valor "Olá, " e outra com "Mundo!". Implemente um programa que concatene essas duas strings e
imprima o resultado.*/
#include<stdio.h>
#include<string.h>
int main (void){
 char string[] = "Olá, ";
 char string1[] = "Mundo!";

 strcat(string,string1);
 // Vai compilar a primeira string

 printf("%s",string);
    return 0;
}
