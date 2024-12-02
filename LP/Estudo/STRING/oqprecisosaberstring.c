#include <stdio.h>
#include <string.h>
#include <stdlib.h>  // Inclua esta biblioteca para usar malloc()

int main() {
    // Declaração e Inicialização
    char str1[50] = "Olá, Mundo!";  // Inicializa uma string
    char str2[50];

    // Copiar string
    strcpy(str2, str1);  // Copia str1 para str2
    printf("str2: %s\n", str2);

    // Concatenar strings
    strcat(str1, " Como vai?");  // Concatena " Como vai?" a str1
    printf("str1 após concatenação: %s\n", str1);

    // Comparar strings
    int result = strcmp(str1, str2);  // Compara str1 com str2
    if (result == 0) {
        printf("As strings são iguais.\n");
    } else {
        printf("As strings são diferentes.\n");
    }

    // Obter o comprimento da string
    printf("Comprimento de str1: %lu\n", strlen(str1));

    // Encontrar um caractere
    char *ptr = strchr(str1, 'M');  // Encontra o primeiro 'M' em str1
    if (ptr != NULL) {
        printf("Caractere 'M' encontrado em: %s\n", ptr);
    }

    // Dividir string em tokens
    char str3[] = "apple,orange,banana";
    char *token = strtok(str3, ",");  // Divide a string em tokens
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, ",");
    }

    // Alocação dinâmica
    char *str4 = (char*) malloc(100 * sizeof(char));  // Aloca espaço para 100 caracteres
    if (str4 == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }
    strcpy(str4, "Texto alocado dinamicamente");
    printf("str4: %s\n", str4);
    free(str4);  // Libera a memória alocada

    // Conversão de string para número
    int num = atoi("12345");  // Converte string para inteiro
    printf("Número convertido: %d\n", num);

    return 0;
}
