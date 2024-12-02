/*2. Contagem do Comprimento da String
Objetivo: Calcular o comprimento de uma string manualmente.
Exercício: Crie uma string com o valor "C é interessante!". Implemente um algoritmo que calcule e 
imprima o comprimento da string sem usar strlen().*/
#include <stdio.h>
#include <string.h>

int main(void){

    //Declaração e inicialização da string
    char string[] = "C é interessante!"; 
    int comprimento = 0;

    // Percorre toda a string até chegar ao fim, que é quando '\0' aparece
    while(string[comprimento] != '\0'){
    comprimento ++;

    }
     printf("O comprimento da string é %d caracteres \n",comprimento);

    return 0;
}