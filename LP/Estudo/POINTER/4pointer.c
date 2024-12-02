#include<stdio.h>
int main(void){
    int a = 1025;
    int *p;
    p = &a;
    printf("Endereço de a:%d \n",&a);
    printf("Tamanho do inteiro em bytes: %d \n",sizeof(int));
    printf("Endereço de p: %d valor de p: %d, Valor no endereço de p : %d\n",&p,p,*p);
   
   
   /* char *p0;
    p0 =(char*)p;
    printf("Tamanho do caracter em bytes: %d \n",sizeof(char));
    printf("Endereço de p0: %d valor de p0: %d, valor dentro do endereço de p0: %d\n",&p0,p0,*p0);// a maquina vai olhar para 1byte,ja que converti para caracter e o que to enxergando é o final de um (00000001)primeiro byte apontado que no caso é 1
    printf("Endereço de p0+1: %d valor de p0+1: %d, valor dentro do endereço de p0+1: %d\n",&p0+1,p0+1,*(p0+1)); // vai subir no endereço um byte, mas no conteudo vai pegar uma parte do binario(0000100)segundo byte, no endereço contiguo;
    //1025 = 00000000 0000000 00000100 00000001 (em 32bits) */

    void *p0;
    p0 = p;

    printf("Tamanho do caracter em bytes: %d \n",sizeof(int));
    printf("Endereço de p0: %d valor de p: %d, valor dentro do endereço de p0: %d\n",&p,p); // nao posso desreeferencia usando void,*p0);
    printf("endereço = %d",p0); // nao posso desreeferenciar usando void, tambem da erro p0+1
    return 0;
}