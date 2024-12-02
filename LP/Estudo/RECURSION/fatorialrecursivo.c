#include <stdio.h>
int fatorial (int x);
int main(void){
   int numero, resultado;
   printf("Digite um numero inteiro: ");
   scanf("%d",&numero);
   resultado = fatorial(numero);
   printf("O fatorial é %d",resultado);
   return 0;
}
// 1º x = 3
// 2º x = 2
// 3º x = 1
int fatorial (int x){
int result;
   if(x == 0){
      result = 1;
      // 4º = 0
   }
   else{
      result = x * fatorial(x-1);
      // 1º result = 3 * (chamar função fatorial com parametro(3-1))
      // 2º result = 2 * (chamar função fatorial com parametro(2-1))
      // 3º result = 1 * (chamar função fatorial com parametro(1-1))
      // 4º result = 1
   // Agora que result = 1, a função encerra a recursão e os valores vão ser devolvidos
      // 1º result = 3 * 2
      // 2º result = 2 * 1
      // 3º result = 1 * 1
      // 4º result = 1
   // saida = 3
   }
   return result;
}   