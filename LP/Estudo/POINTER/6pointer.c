#include <stdio.h>
void Increment(int *p){
    *p = (*p)+1;
    printf("esse é o resultado %d\n",*p);
    printf("esse é o endereço %p \n",p);
}
int main() {
    int a;
    a = 10;
    Increment(&a);
    printf("A de main %p \n",&a);
    return 0;
}