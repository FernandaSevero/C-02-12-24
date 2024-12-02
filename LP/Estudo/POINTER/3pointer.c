#include<stdio.h>
int main(){

    int a = 10;
    int* p;

    printf("Endereço de a: %p  Conteúdo de a: %d \n",&a,a);

    p = &a;
    printf("Endereço de p: %p  Conteúdo de p: %d \n",&p,*p);

    *p =12; // mudei o valor de a atravez do poteiro
    printf("Endereço de p: %p  Conteúdo de p: %d \n",&p,*p);

    int b = 20;

    *p = b; // continua apontando pra a, so substituiu o conteudo de a
    printf("Endereço de a: %p  Conteúdo de a: %d \n",&a,a);
    printf("Endereço de b: %p  Conteúdo de b: %d \n",&b,b);
    printf("Endereço de p: %p  Conteúdo de p: %d \n",&p,*p);
    printf("\n");

    p = &b;
    b=34;
   // printf("Endereço de a: %p  Conteúdo de a: %d \n",&a,a);
    printf("Endereço de b: %p  Conteúdo de b: %d \n",&b,b);
    printf("Endereço de p: %p  Conteúdo de p: %d \n",&p,p);
    printf("Endereço de p: %p  Conteúdo de p: %d \n",&p,p+1); // aponta pro endereço de memoria +4 a frente pois integer = 4 byts,não altera o valor original de p.
    printf("Endereço de p: %p  Conteúdo de p: %d \n",&p,*p-3); // subtrair 3 de 34 , nao altera o valor em b
    printf("Endereço de b: %p  Conteúdo de b: %d \n",&b,b);
}