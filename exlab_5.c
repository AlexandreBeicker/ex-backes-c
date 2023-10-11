#include <stdio.h>

int main() {
    int n;

    printf("Digite o numero de termos para a sequencia de Fibonacci (maior que 0): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O numero de termos deve ser maior que 0.\n");
        return 1;
    }

    int termo1 = 0, termo2 = 1, proximoTermo;

    printf("Sequencia de Fibonacci para os primeiros %d termos:\n", n);

    
    printf("%d, %d", termo1, termo2);


    for (int i = 3; i <= n; i++) {
        proximoTermo = termo1 + termo2;
        printf(", %d", proximoTermo);

        termo1 = termo2;
        termo2 = proximoTermo;
    }

    printf("\n");

    return 0;
}
