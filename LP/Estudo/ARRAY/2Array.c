#include <stdio.h>

int main(void) {
    int arr[5] = {10, 20, 30,40,50}; //se mudar o tamnho muda o array

    printf("Endereço de arr: %p\n", (void*)arr);        // Endereço do primeiro elemento
    printf("Endereço de arr[0]: %p\n", (void*)&arr[0]); // Endereço do primeiro elemento
    printf("Endereço de arr[1]: %p\n", (void*)&arr[1]); // Endereço do segundo elemento
    printf("Endereço de arr[2]: %p\n", (void*)&arr[2]); // Endereço do terceiro elemento
    printf("Endereço de arr[3]: %p\n", (void*)&arr[3]); // Endereço do quarto elemento
    printf("Endereço de arr[4]: %p\n", (void*)&arr[4]); // Endereço do quinto elemento

    return 0;
}
/*observavel que se eu adiciono elementos e aumento o tamnho dele nao muda o endereço ,ou seja, é o mesmo array
Endereço de arr: 0x7fffffffdd70
Endereço de arr[0]: 0x7fffffffdd70
Endereço de arr[1]: 0x7fffffffdd74
Endereço de arr[2]: 0x7fffffffdd78
Endereço de arr[3]: 0x7fffffffdd7c

adicionei o quinto

Endereço de arr: 0x7fffffffdd70
Endereço de arr[0]: 0x7fffffffdd70
Endereço de arr[1]: 0x7fffffffdd74
Endereço de arr[2]: 0x7fffffffdd78
Endereço de arr[3]: 0x7fffffffdd7c
Endereço de arr[4]: 0x7fffffffdd80
Exatamente! O primeiro elemento de um array em C sempre terá o mesmo endereço, independentemente de quantos elementos você 
adicione ou remova do array, desde que o array não seja realocado (por exemplo, usando funções como malloc() ou realloc()). 
Vamos analisar esse comportamento mais detalhadamente.*/