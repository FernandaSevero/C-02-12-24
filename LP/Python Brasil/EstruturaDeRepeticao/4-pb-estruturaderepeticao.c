/*4- Supondo que a população de um país A seja da ordem de 80000 habitantes com uma 
taxa anual de crescimento de 3% e que a população de B seja 200000 habitantes com 
uma taxa de crescimento de 1.5%. Faça um programa que calcule e escreva o número de 
anos necessários para que a população do país A ultrapasse ou iguale a população do país B,
 mantidas as taxas de crescimento.*/
 #include<stdio.h>

 int main ()
 {  // Declaração e inicialização das variáveis. A variável i começa com 1 porque começa doprimeiro ano e não de zero.
    int i = 1;
    float A = 80000;
    float B = 200000;

    /* Condição whie usado quando não sei o numero de iterações mas sei até onde deve acontecer.
    Acontece enquanto A ainda nao for maior que a B*/
    while (A < B)
    {
        // A cada iteração somando 1 ano, respeitando as condições do enunciado
        i++;
        A = A * 1.3;
        B = B * 1.15;
        printf("%.2f e %.2f \n",A,B);
    }

    printf("Levarão %d anos a população A será de %.2f habitantes e a população B sera de %.2f habitantes \n",i,A,B);
        
    return 0;
 }