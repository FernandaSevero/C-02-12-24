#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;  // Ponteiro para int
    int **q = &p;  // Ponteiro para ponteiro para int

    printf("Valor de x: %d\n", x);
    printf("Valor de p (endereço de x): %p\n", p);
    printf("Endereço de p: %p\n", &p); // Imprime o endereço de p
    printf("Valor de *p (valor de x): %d\n", *p);
    printf("Endereço de p armazenado por *q : %p65\n", *q);  // Acessando valor de x através de q
    printf("Valor de **q (valor de x): %d\n", **q);  // Acessando valor de x através de q
    printf("Endereço de q: %p\n", &q); // Imprime o endereço de p
    return 0;
}
