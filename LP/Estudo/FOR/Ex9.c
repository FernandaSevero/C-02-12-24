/*9- Imprimir os primeiros N números da sequência de Fibonacci*/
#include<stdio.h>

int main(){
unsigned long long int anterior, posterior,final;
int numero;
anterior = 1;
posterior = 1; 
final = 0;
printf("Digite o numero de termos o limite é 100,não  cracha meu programa :( ");
scanf("%d",&numero);
//imprimir a sequencia de fibonacci
for(int i = 1; i <=numero; i++){
    printf("%dº termo é  \n",i);
    anterior = posterior;
    posterior = final;
    final = anterior + posterior;
    printf("%llu \n",final);
    }
    

 
    return 0;
}