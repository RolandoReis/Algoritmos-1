#include <stdio.h>

int main() {
    int n;
    int cont_primos = 0;
    int numero = 2;
    int soma = 0;

    printf("Digite a quantidade de numeros primos desejada: ");
    scanf("%d", &n);

    while (cont_primos < n) {
        int i = 2;
        int eh_primo = 1;

        while (i < numero) {
            if (numero % i == 0) {
                eh_primo = 0;
            }
            i++;
        }

        if (eh_primo == 1) {
            soma = soma + numero;
            cont_primos++;
        }

        numero++;
    }

    printf("A soma dos primeiros %d numeros primos e: %d\n", n, soma);

    return 0;
}
