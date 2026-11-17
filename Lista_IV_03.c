#include <stdio.h>

int main() {

    float A[6];
    float B[6];
    int i;

    for (i = 0; i < 6; i++) {
        printf("Digite o valor de A[%d]: ", i);
        scanf("%f", &A[i]);

        printf("Digite o valor de B[%d]: ", i);
        scanf("%f", &B[i]);
    }

    for (i = 0; i < 6; i++) {
        A[i] = A[i] + B[i];
    }

    printf("\nResultado do vetor A:\n");

    for (i = 0; i < 6; i++) {
        printf("A[%d] = %.2f\n", i, A[i]);
    }

    return 0;
}
