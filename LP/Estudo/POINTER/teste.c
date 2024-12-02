#include <stdio.h>

int sumOfElements(int* A, int* size){
    int i,soma = 0;
    for(i = 0 ; i <* size; i++){

     soma += *(A+i);
    }
    return soma;
}

int main(void){
    int A[] = {1,2,3,4,5};
    int size = sizeof(A)/ sizeof(A[0]);
    int total = sumOfElements(A,&size);
    printf("%d e",total);
    return 0;
}