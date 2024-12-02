// 6- Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.
#include<stdio.h>
#include<math.h>
int main(){
    float raiocirculo;
    float areacirculo;
    
    printf("Digite o raio: \n");
    scanf("%f",&raiocirculo);
    
    areacirculo = pow(raiocirculo,2) * M_PI;//pow é função nao operador
    // pi = M_PI = 3.14
    printf("%f \n",areacirculo);
    
    
    
    
    return 0;
}