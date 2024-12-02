#include<stdio.h>
int main (){
   char str[20];
   printf("Enter your name: ");

   fgets(str, sizeof(str),stdin);
// nomde da string, tamango da string , stdin(que a entrada sera pelo teclado)
   printf("%s", str);

   return 0;
}