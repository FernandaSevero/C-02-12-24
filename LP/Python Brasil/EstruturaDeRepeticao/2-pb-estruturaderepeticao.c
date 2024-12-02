/*2-Faça um programa que leia um nome de usuário e a sua senha e não aceite a senha igual ao nome do usuário, mostrando uma mensagem de erro e voltando a pedir as informações.*/
#include<stdio.h>
#include<string.h>
int main()
{
char nome[25];
char senha[25];

do{
 printf("Digite um nome \n");
 scanf("%s",nome);
 
 printf("Diite uma senha diferente do nome \n");
 scanf("%s",senha);
 }
while (strcmp(nome,senha) ==0);

return 0;
}


/*Comparação incorreta de strings: No while, você está comparando nome[10] == senha[10], o que verifica apenas um caractere específico de cada string. Para comparar duas strings inteiras em C, use a função strcmp da biblioteca <string.h>.

Uso incorreto do scanf: Não é necessário usar o operador & ao ler strings com scanf, pois o nome do array já é o endereço de memória do primeiro elemento.

Lógica do programa: O programa deve pedir o nome e a senha inicialmente e, em seguida, continuar pedindo esses dados enquanto a senha for igual ao nome.*/