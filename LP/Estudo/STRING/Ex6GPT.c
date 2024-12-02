
/*6. Copiar uma String
Objetivo: Copiar o conteúdo de uma string para outra.
Exercício: Crie uma string com o valor "Aprendendo C!" e copie essa string para outra variável. Depois, imprima ambas as strings.
*/
#include <stdio.h>
#include <string.h>

int main(void){

    
    // Declaração e inicialização da string 'str'
    char str[] = "Aprendendo C!";

    // Declaração da str "destine" , que será o destino da copia
    char destine[50];

    //o argumento é sempre(destino,conteudo)
    //os dois arrays são independentes, com áreas de memória diferentes, mas o conteúdo de str é replicado em destine.
    
    // Copia do conteúdo de 'str' para destine
    strcpy(destine, str);

    // Exibe o conteudo da string "destine"
    printf("%s",destine);

    return 0;
}