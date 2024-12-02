#include <stdio.h>

// Função para ler e validar um número positivo
float le_valor_positivo(const char* mensagem) {
    float valor;
    int valido;
    
    // Exibindo o endereço de memória de 'mensagem' (ponteiro) e da string literal
    printf("Endereço de 'mensagem': %p\n", (void*) &mensagem); // Endereço de memória do ponteiro
    printf("Endereço de 'População A: ': %p\n", (void*) mensagem); // Endereço de memória da string

    do {
        printf("%s", mensagem);  // Exibe a string "População A: "
        valido = scanf("%f", &valor);

        // Limpa o buffer caso a entrada seja inválida
        if (valido != 1 || valor < 0) {
            printf("Por favor, insira um número positivo válido.\n");

            // Limpa o buffer até o fim da linha
            while (getchar() != '\n'); 
        }
    } while (valido != 1 || valor < 0);
    
    return valor;
}

int main() {
    int i = 0;  // Inicializamos o contador de anos com 0

    // Lê e valida as populações A e B
    float A = le_valor_positivo("População A: ");
    float B = le_valor_positivo("População B: ");

    // Loop que calcula o crescimento anual até que A seja maior que B
    while (A < B) {
        i++;  // Incrementa o ano
        A = A * 1.3;   // Aumenta a população A em 30%
        B = B * 1.15;  // Aumenta a população B em 15%
    }

    printf("Levarão %d anos para a população A atingir %.2f habitantes e a população B atingir %.2f habitantes.\n", i, A, B);
        
    return 0;
}
