#include <stdio.h>

// Função recursiva para imprimir o número binário
void decimalParaBinario(int n) {
    if (n > 1) {
        // Chama a função recursivamente com o quociente da divisão por 2
        decimalParaBinario(n / 2);
    }
    // Imprime o resto da divisão por 2, que representa o dígito binário
    printf("%d", n % 2);
}

int main() {
    int numeroDecimal;

    // Solicita ao usuário que insira um número decimal
    printf("Digite um número decimal: ");
    scanf("%d", &numeroDecimal);

    // Verifica se o número é 0
    if (numeroDecimal == 0) {
        printf("0");
    } else {
        // Chama a função recursiva para converter o número para binário
        decimalParaBinario(numeroDecimal);
    }

    // Quebra de linha para uma melhor visualização da saída
    printf("\n");

    return 0;
}