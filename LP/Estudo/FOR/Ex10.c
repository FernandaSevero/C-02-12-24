/*10- Encontrar o maior e o menor número entre 5 números*/
#include<stdio.h>
int main(void){

int maior,menor,numero;

printf("Digite o 1º numero: ");
scanf("%d",&numero);

maior= numero;
menor = numero;

for(int i = 2;i <=5; i++){
    printf("Digite o %dº numero: ",i);
    scanf("%d",&numero);

    if(numero > maior){
        maior = numero;
    }

    if(numero < menor){
        menor = numero;
    }
}
printf("O maior numero é %d e o menor numero é %d",maior,menor);

return 0;
}