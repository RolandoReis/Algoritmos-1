#include <stdio.h>

int main() {

    int A[8];
    int i;
    int maior;
    int posicao;

    for (i = 0; i < 8; i++) {
        printf("Digite um numero: ");
        scanf("%d", &A[i]);
    }

    maior = A[0];
    posicao = 0;

    for (i = 1; i < 8; i++) {
        if (A[i] > maior) {
            maior = A[i];
            posicao = i;
        }
    }

    printf("\nMaior valor: %d\n", maior);
    printf("Posicao: %d\n", posicao + 1);

    return 0;
}
