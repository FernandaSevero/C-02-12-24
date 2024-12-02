#include <stdio.h>
int main (){
char str[] = "Programiz";
printf("insira uma letra: ");
scanf("%c",&str[0]);


for(int i = 0; i<=9;i++)
   printf("%c",str[i]); // dentro do loop
   printf("\n"); // fora do loop

return 0;
}