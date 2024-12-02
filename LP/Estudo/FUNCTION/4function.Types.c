#include <stdio.h>
int addNumber(int number1, int number2){
int sum = number1+number2;
return sum; //return ao inves do print, assimreturn me retorna o valor
/*return permite que o valor calculado seja reutilizado em outras partes do programa.*/
}

int main(){
 int result = addNumber(1,2); //comente essa (linha 9 e 19) caso de utilizado e nao armazenado
  /* o valor de return tem ser armazenado em uma variavel, aqui result.
  Isso está correto, pois o valor de retorno precisa ser armazenado ou utilizado diretamente.
  Quando uma função em C usa return, ela devolve um valor ao local onde foi chamada. Esse valor não é automaticamente guardado pelo programa. Para que ele seja útil, precisamos:

Armazená-lo em uma variável.
Utilizá-lo diretamente em uma expressão ou operação.
Se você não armazenar ou usar o valor retornado, ele será descartado.

*/
 printf("%d resultado",result);//comente essa (linha 9 e 19) caso de utilizado e nao armazenaado
//printf("Resultado: %d\n", addNumber(1, 2));
//este caso(linha a cima), o valor retornado por addNumber(1, 2) é passado diretamente como argumento para a função printf, sem precisar de uma variável intermediária.
}
//a variavel que vai armazenar o return da funçao tem que ter o tipo igual ao do tipo da função