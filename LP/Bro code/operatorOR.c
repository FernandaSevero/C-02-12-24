#include <stdio.h>
#include <stdbool.h>

int main(){
    int boleano;
    scanf("%d",&boleano);

    if(boleano == 0 || boleano > 6){
        printf("não");    
    }

    else if (boleano == 1 || boleano <= 5){
        printf("sim");

    }
    return 0;
}