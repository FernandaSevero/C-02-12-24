#include<stdio.h>
int globalVar = 10; // Variável global

void func1() {
    printf("func1: %d\n", globalVar);
}

void func2() {
    globalVar += 5; // Modifica a variável global
    printf("func2: %d\n", globalVar);
}

int main() {
    func1(); // Exibe 10
    func2(); // Exibe 15
    return 0;
}
