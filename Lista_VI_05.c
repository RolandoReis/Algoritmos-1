#include <stdio.h>

int main() {

    int A[8];
    int i;

    for (i = 0; i < 8; i++) {
        printf("Digite um numero: ");
        scanf("%d", &A[i]);
    }

    printf("\nMultiplos de 2:\n");

    for (i = 0; i < 8; i++) {
        if (A[i] % 2 == 0) {
            printf("%d ", A[i]);
        }
    }

    printf("\n\nMultiplos de 3:\n");

    for (i = 0; i < 8; i++) {
        if (A[i] % 3 == 0) {
            printf("%d ", A[i]);
        }
    }

    printf("\n\nNao sao multiplos de 2 nem de 3:\n");

    for (i = 0; i < 8; i++) {
        if (A[i] % 2 != 0 && A[i] % 3 != 0) {
            printf("%d ", A[i]);
        }
    }

    printf("\n");

    return 0;
}
