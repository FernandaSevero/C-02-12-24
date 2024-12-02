//funçoes não conseguem ver dentro de outtras funções
#include <stdio.h>
void cadastro(char nome[],int idade)
/* preciso dizer o que a minha função vai receber de fora, e como é essa função que vai receber preciso dizer quais
espaços de memória ela tem que separar pra receber isso. Isso que entendo por argumentos*/
{
    printf("Seu nome é %s \n", nome);
    printf("Sua idade é %d anos", idade);
}

int main()
{ /*Chamo a função aqui usando o telefone() e dentro da ligação eu digo tudo que vai ser comunicado entre as 
duas funçoes*/
    char nome[] = "Fernanda";
    int idade = 27;
    cadastro(nome, idade);

    return 0;
}