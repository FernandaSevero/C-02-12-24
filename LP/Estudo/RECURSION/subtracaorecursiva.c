#include<stdio.h>

int sum(int n);

int main (){
   int number,result;

   printf("enter  postive number: ");
   scanf("%d",&number);
   result = sum(number);
   printf("sum = %d",result);
   return 0;
}

int sum (int n){
   // 1º n = -4
   // 2º n = -3
   // 3º n = -2
   // 4º n = -1
   // 5º n = 0
 
   if (n != 0){
      // sum() fucntion calls itself
      return n + sum(n+1);
      // 1º return -4 + (chama sum com parametro(-4+1))
      // 2º return -3 + (chama sum com parametro(-3+1))
      // 3º return -2 + (chama sum com parametro(-2+1))
      // 4º return -1 + (chama sum com parametro(-1+1))
      // 5º return 0 
   // Agora os que entramos no else, a funçao retorna os valores que estavam em "pausa/esperando resultado da função"
      // 1º return -4 + -6 = -10 (saida)
      // 2º return -3 + -3 = -6
      // 3º return -2 + -1 = -3
      // 4º return -1 + 0 = -1
      // 5º return 0
   //saida = -10
   }
   else {
      return n;
      // 5º n = 0
   }
}