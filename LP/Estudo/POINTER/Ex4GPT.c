/*Exercício 4: Ponteiros e Arrays
Objetivo: Relacionar ponteiros e arrays, mostrando que o nome do array é um ponteiro constante.
Tarefa: Modifique o código para imprimir os endereços de cada elemento do array, usando tanto o array quanto o ponteiro.*/
#include <stdio.h>

int main() {
	int arr[] = {5, 10, 15, 20};
	int *p = arr; // array é um endereço entao nao precicso do '&', Ou seja, arr é equivalente a &arr[0].

	printf("Usando o array diretamente:\n");
	for (int i = 0; i < 4; i++) {
    	printf("arr[%d] = %p\n", i,&arr[i]); // bastou acrescentar o operador de endereço e mudar o especificador de formato
	}

	printf("\nUsando o ponteiro:\n");
	for (int i = 0; i < 4; i++) {
    	printf("(p + %d) = %p\n", i, (p + i)); // bastou tirar o operador de desreferencia e mudar o especificador de formato
	}

	return 0;
}
