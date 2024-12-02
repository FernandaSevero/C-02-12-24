#include<stdio.h>
#include<stdbool.h>

int main(){
int toconvert;
bool sunny;

printf("essa é uma porta inversora digite 0 e receba 1 digite 1 e receba 0: \n");

scanf("%d",&toconvert);
sunny = (toconvert == 1);

if(!sunny ){
    printf("recebeu 0 transformou em 1");
}
else{
    printf("recebeu 1 transformou em 0");
}



return 0; }