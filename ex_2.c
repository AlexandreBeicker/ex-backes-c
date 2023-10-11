// Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente.

#include <stdio.h>

    int main () {

        int inteiro, i;

        printf("Digite um número inteiro positivo: \n");
        scanf("%d", &inteiro);

        if (inteiro < 0){
            printf("O número deve ser positivo \n");
        }

        for (i = inteiro; i >= 0; i--) {
                printf("%d", i);
        }

    }