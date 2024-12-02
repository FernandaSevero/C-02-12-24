#include <stdio.h>

int addNumber(int number1, int number2);// isso é um functionprototype, int main vai porcurar função, vai achar esse protype e combinar ele com a funçao que esta abaixo do main e seguira o programa normalmente 


int main(){
 int result = addNumber(1,2); 
 printf("%d resultado",result);
 return 0;
}
// Definição da função 'addNumber' (corpo)
int addNumber(int number1, int number2){
int sum = number1+number2;

return sum; 
}
/*Sua descrição (analisada)

Prototype (Protótipo de Função):
-O protótipo de função int addNumber(int number1, int number2); é uma declaração que informa ao compilador:
-O nome da função: addNumber.
-Os tipos de argumentos: dois inteiros (int number1 e int number2).
-O tipo de retorno: um inteiro (int).
-Função do protótipo: Ele permite que a função seja chamada no main, mesmo que sua definição (o corpo da função) apareça depois do main.

Funcionamento do programa:
-Quando o compilador encontra a chamada addNumber(1, 2) no main, ele verifica o protótipo para validar:
-Se o nome da função está correto.
-Se o número e os tipos dos argumentos coincidem.
-Se o tipo de retorno é compatível.
-O compilador então combina essa chamada com a definição da função encontrada após o main, seguindo a execução do programa normalmente.

Execução Normal:
-A chamada de função no main (int result = addNumber(1, 2);) passa os argumentos 1 e 2 para a função addNumber.
-A função addNumber calcula a soma (1 + 2), armazena em sum, e retorna o valor para o main.
-No main, o valor retornado (3) é armazenado em result e exibido com printf.*/