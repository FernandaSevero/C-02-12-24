#include<stdio.h>
int main(void){
int array[5]={2,4,6,8,1};

for(int i = 0; i < 5; i++){
    printf("Endereço: %p e valor: %d \n",&array[i],array[i]);
    
    int *p =&array[i];
    printf("Endereço: %p e valor: %d ponteiro\n",p,*p);


    printf("Endereço: %p e valor: %d repete\n",&array[i+1],array[i+1]); //proximo endereço e valor
    printf("Endereço: %p e valor: %d ponteiro\n",p+1,*(p+1));
}
    return 0; 
}