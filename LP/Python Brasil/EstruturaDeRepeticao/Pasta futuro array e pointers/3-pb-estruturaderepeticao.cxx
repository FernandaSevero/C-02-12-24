/*3- Faça um programa que leia e valide as seguintes informações:
1- Nome: maior que 3 caracteres;
2- Idade: entre 0 e 150;
3- Salário: maior que zero;
4- Sexo: 'f' ou 'm';
5- Estado Civil: 's', 'c', 'v', 'd'; */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{ 
    char nome[10];
    int lenght_nome,idade;
    float salario;
    char sexo,estado_civil;
    
//Nome: maior que 3 caracteres
   do {
        printf("nome \n");
        fgets(nome, 10 ,stdin); // le 9 caractres deixando espaço para o '\0'
        
            // Remove o '\n' no final da string, se presente
            if(nome[strlen(nome)-1] == '\n')
            {
                nome[strlen(nome)-1] = '\0'; 
                
            }
        // Remove o '\n' no final da string, pois quando aperta enter no fgets ele da uma linha '\n'
        lenght_nome = strlen(nome);
        
        printf("O nome '%s' tem %d caracteres.\n", nome, lenght_nome);}
        while(lenght_nome < 3);  //A função strlen retorna o comprimento de uma string, excluindo o caractere nulo (\0) que marca o final da string.


// Idade: entre 0 e 150
    do {
        printf("idade \n");
        if (scanf("%d", &idade) != 1) {  // Verifica se a entrada é um número
            printf("Por favor, insira um número válido.\n");
            while (getchar() != '\n');  // Limpa o buffer
            continue;
        }
        
        while (getchar() != '\n');  // Limpa o buffer após uma entrada válida

    } while (idade < 0 || idade > 150); // Repete se a idade estiver fora do intervalo
    
    printf("Idade válida: %d\n", idade);

//Sexo: 'f' ou 'm';
/*scanf("%c",&sexo);
 O seu código está imprimindo a mensagem "sexo" duas vezes devido ao uso de scanf("%c", &sexo); para ler a entrada do usuário. Quando você usa scanf para ler um caractere, se houver um caractere de nova linha (\n) na entrada, o scanf pode "capturá-lo" como o primeiro valor, o que faz com que o programa continue a execução e leia novamente, fazendo com que o prompt de entrada "sexo" seja impresso uma segunda vez.
 
 sobre a ordem do to upper.
 Como getchar() funciona?
getchar() lê um caractere por vez diretamente do buffer de entrada. Ele não se importa com o formato ou tipo de dado — apenas pega o próximo caractere disponível.
Cada vez que você usa getchar(), ele remove um caractere do buffer e o retorna.
Isso é útil para:

Capturar caracteres específicos: Se o usuário digitar uma sequência, como "ff", o primeiro scanf(" %c", &sexo); lê o primeiro f e deixa o segundo f e o \n (enter) no buffer.
Limpar o buffer: getchar() é frequentemente usado em um loop para "limpar" o restante do buffer de entrada (exemplo: quando queremos ignorar tudo o que o usuário digitou após a primeira letra).
Como getchar() resolve o problema de múltiplos caracteres?
Quando você usa getchar() para limpar o buffer depois de ler um caractere com scanf, ele:

Consome cada caractere restante até encontrar \n, esvaziando o buffer.
Isso é útil após scanf para garantir que qualquer entrada extra seja descartada, deixando o buffer limpo para a próxima entrada do usuário.

scanf:

Lê dados de entrada de acordo com o formato especificado (como %d, %c, %s, etc.).
Ignora automaticamente espaços em branco ou novas linhas para a maioria dos tipos de entrada (com exceção de %c, onde isso precisa ser feito manualmente com " %c").
Só processa até o ponto em que a entrada corresponda ao que está sendo pedido, deixando qualquer caractere extra no buffer.
Buffer de entrada:

É uma área temporária onde todos os caracteres digitados ficam armazenados antes de serem processados.
O scanf retira do buffer apenas o que foi solicitado e deixa o resto no buffer. Isso pode causar problemas, pois o buffer pode conter dados "não consumidos" que interferem em leituras subsequentes.
É aqui que getchar() se torna útil: ele permite acessar ou limpar esses caracteres um a um.
*/
do
{

 printf("sexo \n");
 //sexo = toupper(sexo); aqui da merda porque assim que o dado ´e digitado ´e convertido para maiusculo, como o upper so converte o primeiro caracter, ele vai passar so esse carater convertido para o scanf, dando um erro porque 
 scanf(" %c", &sexo);
 
 // Verifica se o caractere digitado é válido
        if (getchar(  ) != '\n') {  
            printf("Por favor, digite apenas uma letra.\n");
            while (getchar(  ) != '\n');  // Limpa o buffer para a próxima entrada
            continue;  // Volta ao começo do loop
        }
        sexo = toupper(sexo);
 }
 while(sexo != 'F' && sexo != 'M');
 
//Estado Civil: 's', 'c', 'v', 'd'
do
{
 
 printf("estado_civil \n");
 scanf(" %c", &estado_civil);
 
 if (getchar( ) != '\n') {  
            printf("Por favor, digite apenas uma letra.\n");
            while (getchar( ) != '\n');  // Limpa o buffer para a próxima entrada
            continue;  // Volta ao começo do loop
         }
         estado_civil = toupper(estado_civil);
 }
 while(estado_civil != 'S' && estado_civil != 'C' && estado_civil != 'V' &&  estado_civil != 'D');


    
return 0;
}

/*Sim, você entendeu corretamente! Quando você usa o scanf, tudo o que está entre as aspas do formato (o string literal) precisa corresponder exatamente ao que é inserido na entrada de dados, antes de ele começar a interpretar os especificadores de formato (como %d, %c, etc.).
%c é pra caracter nao importa se numero ou letra ou simbolo*/
