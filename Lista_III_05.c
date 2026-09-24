#include <stdio.h>

int main() {
    int numero;
    int binario = 0;
    int resto;
    int i = 1;

    printf("Digite um numero natural: ");
    scanf("%d", &numero);

    if (numero == 0) {
        printf("O numero em binario e: 0\n");
    } else {
        int temp = numero;

        while (temp > 0) {
            resto = temp % 2;
            binario = binario + (resto * i);
            temp = temp / 2;
            i = i * 10;
        }

        printf("O numero em binario e: %d\n", binario);
    }

    return 0;
}
