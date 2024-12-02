//4-Faça um Programa que peça as 4 notas bimestrais e mostre a média.
#include<stdio.h>
int main(){
    int nota1;
    int nota2;
    int nota3;
    int nota4;
    float media;
      
    printf("nota1: \n");
    scanf("%d", &nota1);
    
    printf("nota2: \n");
    scanf("%d", &nota2);
    
    printf("nota3: \n");
    scanf("%d", &nota3);
    
    printf("nota4: \n");
    scanf("%d", &nota4);
    
    media = (nota1+nota2+nota3+nota4)/4;
    printf("media %f",media);

    return 0;
}