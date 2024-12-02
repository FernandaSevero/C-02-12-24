#include<stdio.h>
int main()
{
int litros, latas, galoes, resto;
litros = 24 + ((18/100)*5);
printf("litros %d",litros);

if(litros>=18)
{
    resto = litros % 18;
    printf("resto %d \n",resto);
    if (resto == 0){ 
    
    latas = litros/18;
    printf("%f latas /n ",latas);}

    else{galoes = resto/3.6;

    printf("%d latas e %d galoes \n",latas,galoes);}
}

else
{latas = litros/18;
printf("%d latas \n",latas);}

return 0;
}