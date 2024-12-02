#include <stdio.h>

int main() { 
// continue =skips rest of code and force the next interation of the loop(para o da condiçao e parte pro proximo) trabalha com iteraçoes
// break exits a loop / switch (sai do loop em que esta e vai pro poximo), trabalha com loop/fução


    for(int i = 1;  i <= 20;  i++)
    {
        if(i == 13)
        {
             break;
         }
     printf("%d \n", i);
    }

for(int i = 1;  i <= 20;  i++)
    {
        if(i == 13)
        {
             continue;
         }
     printf("%d \n", i);
    }
   




    return 0; 
}

