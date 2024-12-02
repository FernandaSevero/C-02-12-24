/*Exercício 3: Uso de Ponteiros Void
Objetivo: Trabalhar com void* e usar casting para acessar diferentes tipos de dados.
Tarefa: Adicione suporte para exibir um valor double no printValue.*/
#include <stdio.h>
/* printValue recebe comoprametro um ponteiro void e type tipo char, 
type vai receber um letra e apartir dessa letra vai entrar em uma condidional onde o ponteiro void vai apontar para varios tipos */
void printValue(void *ptr, char type) {
	if (type == 'i') {
    	printf("Valor inteiro: %d\n", *(int *)ptr);
	} else if (type == 'f') {
    	printf("Valor float: %.2f\n", *(float *)ptr);
	} else if (type == 'c') {
    	printf("Valor char: %c\n", *(char *)ptr);
	} else if (type == 'd') {
    	printf("Valor double: %lf\n", *(double *)ptr);
	}
}

int main() {
	int a = 42;
	float b = 3.14;
	char c = 'X';
    double d = 1.32101;

	printValue(&a, 'i');
	printValue(&b, 'f');
	printValue(&c, 'c');
    printValue(&d, 'd');

	return 0;
}
