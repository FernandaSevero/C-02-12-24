//2-Faça um Programa que peça um número e então mostre a mensagem O número informado foi [número].
#include<stdio.h>
int main(){
    int age = 0; //abri e atribui um espaço de memoria int pra variavel age
    printf("Qual a sua idade?");
    scanf("\n %d", &age); // pedi pro usario uma int e disse que essa seria armazenada no endereço de age
    printf("Sua idade e %d", age); //mostrei ao usuário minha stirng com o valor que ele digitou
    return 0;
}
//nao roda no vs code
