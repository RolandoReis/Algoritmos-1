#include <stdio.h>

int main() {

    int A[6];
    int i;
    int pares = 0;
    int impares = 0;

    for (i = 0; i < 6; i++) {
        printf("Digite um numero: ");
        scanf("%d", &A[i]);
    }

    for (i = 0; i < 6; i++) {
        if (A[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("\nQuantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros impares: %d\n", impares);

    printf("\nNumeros pares:\n");

    for (i = 0; i < 6; i++) {
        if (A[i] % 2 == 0) {
            printf("%d ", A[i]);
        }
    }

    printf("\n\nNumeros impares:\n");

    for (i = 0; i < 6; i++) {
        if (A[i] % 2 != 0) {
            printf("%d ", A[i]);
        }
    }

    printf("\n");

    return 0;
}
