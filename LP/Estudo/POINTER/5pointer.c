#include <stdio.h>

int main(void){
    int x = 5;
    printf("Conteúdo de x %d\n",x);

    int* p = &x;
    printf("Endereço de p: %p Conteúdo de p %d \n",p,*p);

    *p = 6; // mudo o conteudo de x
    printf("Conteúdo de x %d\n",x);
    printf("Endereço de p: %p Conteúdo de p %d\n",p,*p);

    int** q = &p;
    printf("Endereço de q: %p Conteúdo de q é endereço de p %p, ,Desreferencia para conteudo de p atraves de q que é conteudo x %d \n",q,*q,*(*q));
    
    int*** r = &q;
    printf("Endereço de r: %p Conteúdo de r é endereço de q %p,  Desreferencia para conteudo de q atraves de r que endereço de p %p ,Desreferencia para conteudo de p atraves de r que conteudo de x %d\n",r,*r,*(*r),*(*(*r)));

    ***r = 7;
    printf("Conteúdo de x %d\n",x);
    printf("Mudou o valor de de x %d\n",*(*(*r)));
        
    **q = *p + 2;
    printf("Conteúdo de x %d\n",x);
    printf("Mudou o valor de de x %d\n",*(*q));
    return 0;
}