/*Exercício 5: Criando uma Função que Usa Ponteiros
Objetivo: Passar valores para uma função por referência usando ponteiros.
Tarefa: Generalize a função swap para aceitar dois float.*/

#include <stdio.h>

void swap(void *x, void *y) {// rocar os parametros pra void
	float temp = *(float*)x; //tive que fazer  ,O casting em C serve para instruir o compilador sobre como interpretar o ponteiro void*
	*(float*)x = *(float*)y;
	*(float*)y = temp;
}

int main() {
	float a = 5, b = 10;

	printf("Antes da troca: a = %f, b = %f\n", a, b); // trocar os especificadores de formato
	swap(&a, &b);
	printf("Depois da troca: a = %f, b = %f\n", a, b);

	return 0;
}
