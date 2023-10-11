// Faça um programa que leia um número inteiro N e depois imprima os N primei- ros números naturais ímpares.

#include <stdio.h>

int main() {
    int N;

    printf("Digite um número inteiro N: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("O número inserido não é não-negativo.\n");
        return 1;
    }

    printf("Os primeiros %d números naturais ímpares:\n", N);

    int contador = 0;
    int numero = 1;

    while (contador < N) {
        if (numero % 2 != 0) {
            printf("%d ", numero);
            contador++;
        }
        numero++;
    }
}
