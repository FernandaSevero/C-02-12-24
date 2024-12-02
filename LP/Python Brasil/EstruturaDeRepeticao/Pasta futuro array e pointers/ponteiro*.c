#include <stdio.h>

int main() {
    int x = 10;       // Variável normal
    int *p;           // Ponteiro para inteiro

    p = &x;           // O ponteiro p agora armazena o endereço de x

    printf("Valor de x: %d\n", x);     // Imprime o valor de x
    printf("Endereço de x: %p\n", &x); // Imprime o endereço de x
    printf("Endereço de p: %p\n", &p); // Imprime o endereço de p
    printf("Valor de p (endereço de x): %p\n", p);  // Imprime o endereço armazenado em p
    printf("Valor apontado por p: %d\n", *p); // Imprime o valor armazenado no endereço que p aponta

    return 0;
}
