#include <stdio.h>

int main() {
    int num, i;
    int ehPrimo = 1;  // Assume que o número é primo inicialmente

    // Solicita o número ao usuário
    printf("Digite um número inteiro maior do que 1: ");
    scanf("%d", &num);

    // Verifica se o número é divisível por algum número diferente de 1 e ele próprio
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            ehPrimo = 0;  // O número não é primo
            break;
        }
    }

    // Se o número for 1 ou não for primo, exibe a mensagem correspondente
    if (num <= 1 || ehPrimo == 0)
        printf("%d não é um número primo.\n", num);
    else
        printf("%d é um número primo.\n", num);

    return 0;
}
