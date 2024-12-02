#include <stdio.h>

int main() 
{   char c;
    int d;
    scanf("%d",&d);
    printf("%d \n",d);
    getchar(); //tirar a linha '\n' depois do scanf
    printf("Buffer contém: \n");
    while ((c = getchar()) != '\n' ) {
        printf("\n");
        putchar(c);  // Imprime cada caractere no buffer
    }
    printf("\n saiu\n");  // Linha final após exibir o conteúdo do buffer
    printf("%c",c);
    
return 0;
}
