#include<stdio.h>

int findMax(int x, int y)
{

/*if(x>y)
{return x;}
else {return y;}*/
 return (x>y) ?  x : y;
 /*(condition) ? value if true : value if false\ just a shortcut*/
}

int main()
{
     // o prefixo 0 indica octalp  int max = findMax(027, 045);
    int max = findMax(27,45);
    printf("%d", max);
    return 0;
 }