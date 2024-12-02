#include <stdio.h>

int sumOfElements(int* A, int* size) {
    int i, soma = 0;
    for (i = 0; i < *size; i++) {  // Dereference size pointer
        soma += *(A + i);  // Pointer arithmetic to access array elements
    }
    return soma;
}

int main(void) {
    int A[] = {1, 2, 3, 4, 5};
    int size = sizeof(A) / sizeof(A[0]);  // Calculate the number of elements
    int total = sumOfElements(A, &size);   // Pass array and address of size
    printf("%d\n", total);  // Output the sum
    return 0;
}
