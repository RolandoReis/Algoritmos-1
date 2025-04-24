#include <stdio.h>

int isBissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

int main() {
    int ano1, ano2;

    printf("Digite o primeiro ano: ");
    scanf("%d", &ano1);
    printf("Digite o segundo ano: ");
    scanf("%d", &ano2);

    if (ano1 >= ano2) {
        printf("O primeiro ano deve ser menor que o segundo.\n");
        return 1;
    }
    printf("Anos bissextos entre %d e %d:\n", ano1, ano2);

    for (int ano = ano1 + 1; ano < ano2; ano++) {
        if (isBissexto(ano)) {
            printf("%d\n", ano);
      }
    }

    return 0;
}
