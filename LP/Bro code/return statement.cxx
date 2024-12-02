#include <stdio.h>
// so da pra usar return se eu especificar o tipo de dado na funçao que vou chamar
int ehtres(int numero) {
    return numero == 3;
}

int main() {
    int numero = 3;
if (ehtres(numero)){printf("sim");}    
    return 0;
}
