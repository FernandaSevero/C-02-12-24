#include<stdio.h>
int main(){

    int a = 10;
    int* p;

    p = &a;

    *p =12; // mudei o valor de a


    printf("Endereço de a: %p  Conteúdo de a: %d \n",&a,a);
    printf("Endereço de p: %p  Conteúdo de a: %d \n",&p,*p);
   // printf("Endereço de q: %p  Conteúdo de a: %d \n",&q,**q);

    return 0;
}