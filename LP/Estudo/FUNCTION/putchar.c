#include<stdio.h>

int main(void){
    int i = 0;
    char x;

    while((x = getchar()) != '\n')
    {putchar(x);
    }

    return 0;
}