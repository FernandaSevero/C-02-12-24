/*4- Faça um Programa que verifique se uma letra digitada é vogal ou consoante.*/
#include <stdio.h>
#include <ctype.h>

int main()
    {// Declarar variavel
    char letra;
    //entrada de dado e inicializaçao
    printf("Digite uma letra \n");
    scanf("%c",&letra);
    
    // converter pra minuscula
    letra = tolower(letra);
    // comparar por intevalo
     if(letra == 'a' || letra == 'e'  || letra == 'i' || letra == 'o' || letra == 'u'){printf("Vogal \n");}
     
     else if(letra >= 'a' && letra <= 'z'){printf("Consoante \n");}
     
     else{printf("So letra porra");}
        
        
        
    return 0;
    }