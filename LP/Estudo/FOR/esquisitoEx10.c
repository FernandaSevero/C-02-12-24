/*10- Encontrar o maior e o menor número entre 5 números*/
#include <stdio.h>
#include <stdlib.h> 
int main ()
{
    int numero, maior,menor;
    printf("Digite o 1º numero: ");
    scanf("%d",&numero);
    
    maior = menor = numero;

    for(int i = 2; i <= 5; i++)
    {
        printf("Digite o %dº numero: ",i);
        scanf("%d",&numero);
        if(maior < numero)
        {
            maior = numero;
        }
        if(menor > numero)
        {
            menor = numero;
        }
        
    }
    printf("%d é o meior número e ",maior);
    printf("%d é o menor número ",menor);
    /*getchar() Isso ajuda a resolver o problema de que, em algumas IDEs ou ambientes de execução, o terminal pode fechar 
    imediatamente após a execução do programa. No entanto, essa abordagem não é a mais elegante ou ideal,
    pois o programa ainda está aguardando uma entrada do usuário, o que pode ser desnecessário.*/
    system("read -p 'Pressione Enter para continuar...'");
    return 0;
}
/*O comportamento que você descreve, onde o comando system() é executado antes do printf(), pode ser confuso, mas ocorre devido à forma 
como o buffer de saída (stdout) funciona em C e o comportamento do sistema operacional. 
Vou explicar isso com mais detalhes.


O Buffer de Saída (stdout)

No C, a saída padrão (stdout) é geralmente bufferizada. Isso significa que o conteúdo enviado para a saída (por exemplo, 
o que é impresso com printf()) é inicialmente armazenado em um buffer e só é efetivamente exibido na tela quando
 o buffer é "descarregado" ou "limpo".

Em muitas implementações do C, isso acontece quando o programa termina ou quando há uma chamada para uma função que força o 
descarregamento do buffer, como fflush(stdout) ou, no caso do Linux, ao chamar exit().


Como o system("read") interfere:

Quando você usa system("read") em um programa no Linux, o sistema operacional chama o shell para executar o comando. 
Isso pode bloquear o programa até que o usuário pressione a tecla Enter, mas, antes de bloquear, ele pode estar "atrasando" 
a saída do printf().

O que acontece é que, antes de o programa esperar pela entrada do usuário, a execução da linha com system("read") pode acontecer
imediatamente — antes do printf() ter realmente escrito na tela. Isso pode dar a impressão de que o system() está sendo executado
primeiro, mas o que realmente ocorre é que o conteúdo do buffer de saída de printf() ainda não foi exibido na tela quando a execução
da linha com system() começa.*/