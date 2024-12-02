#include <stdio.h>
/*precisa de 3 statementes, declaração
1 int index = x (onde começa a contagem)
2 index <=/> (ate onde vai a contagem), que ai ser verificada a cada iteração
3 como vai ocorrer a contagem*/
int main(){
    for (int index = 30; index >20; index --)
    /*
    int index = 1; index <= 10
    index=1+index
    i++ pode
    index +=2 para o loop andar de dois em dois
    _______________
    */
    { 
        printf("test");
        printf("%d\n",index);
        
    }

    return 0;}