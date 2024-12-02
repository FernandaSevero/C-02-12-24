#include <stdio.h>
int main(void){
/*Se eu deixar os dois arrays no programa da erro, porque nao posso tratar o array com um variavel e mudar o valor
que ele recebe
*/
   //char meuArray[16] = {'A','m','o','r',' ','n','a','s',' ','R','e','d','e','s','.'}; nao é uma string
   char meuArray[16] = {'A','m','o','r',' ','n','a','s',' ','R','e','d','e','s','.','\0'}; // é uma string

  
   // saidas de characteres no array
   for(int i = 0; i < 16; i++){
      printf("\n posição %dº = ",i);
      printf("%c",meuArray[i]);
      
   }
   printf("\n Aqui acabou o array.");
   return 0;
}