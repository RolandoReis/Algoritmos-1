#include <stdio.h>

int main() {

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (numero != 0) {

        printf("Quadrado: %d\n", numero * numero);

        printf("Digite outro numero: ");
        scanf("%d", &numero);
    }

    return 0;
}
