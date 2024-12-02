#include<stdio.h>
#include<stdlib.h>  // Necessário para system("pause")

int main() {
    int i, numero = 0, soma = 0;
    float media;

    for(i = 1; i <= 5; i++) {   
        printf("\nDigite o %dº numero: ", i);
        scanf("%d", &numero);
        printf("%d soma anterior \n", soma);
        soma = soma + numero;
        printf("Atual numero: %d\n", numero);
        printf("Atual soma: %d\n", soma);
    }
    media = (float)soma / (i-1);
    printf("%f media \n", media);

    system("pause");  // Espera o usuário pressionar uma tecla antes de fechar o terminal
    return 0;
}
