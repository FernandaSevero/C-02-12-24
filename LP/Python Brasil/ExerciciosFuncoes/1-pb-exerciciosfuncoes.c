#include <stdio.h>

//funçao que executa o loop para formar os numero em ordem crescente formando um triangulo
int numeros_triangulo (int n){
  //loop externo para controlar a quantidade de linhas
  for(int i = 1; i <= n; i++){ 
    //loop interno pra controlar a quantidade de numeros em cada linha
    for(int j = 1; j <= i; j++){
      printf("%d ",i);
    }
    //quebra de linha apos cada linha do triangulo  
    printf("\n");
  }
  
  return 0;
}


int main(void){
int numero_linhas; 
//Solicita ao usuário o número de linhas
printf("insira o numero de linhas: ");
scanf("%d",&numero_linhas);// Lê a quantidade de linhas para o triângulo

// Chama a função que imprime o triângulo com o número de linhas fornecido
numeros_triangulo(numero_linhas); 

return 0;
}