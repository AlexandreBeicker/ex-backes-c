// Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente.

#include <stdio.h>

    int main () {

        int inteiro, i;

        printf("Digite um número inteiro positivo: \n");
        scanf("%d", &inteiro);

        if (inteiro < 0){
            printf("O número deve ser positivo \n");
        }

        for (i = 0; i <= inteiro; i++) {
                printf("%d", i);
        }

    }