// int isBissexto(int ano): Função que verifica se um ano é bissexto.
// return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);: Retorna verdadeiro se o ano for bissexto.
// int main(): Função principal onde a execução do programa começa.
// int ano1, ano2;: Declaração das variáveis para armazenar os anos fornecidos pelo usuário.
// printf("Digite o primeiro ano: ");: Solicita ao usuário o primeiro ano.
// scanf("%d", &ano1);: Lê o primeiro ano inserido pelo usuário.
// printf("Digite o segundo ano: ");: Solicita ao usuário o segundo ano.
// scanf("%d", &ano2);: Lê o segundo ano inserido pelo usuário.
// if (ano1 >= ano2): Verifica se o primeiro ano é maior ou igual ao segundo.
// printf("O primeiro ano deve ser menor que o segundo.\n");: Exibe uma mensagem de erro caso o primeiro ano não seja menor que o segundo.
// return 1;: Retorna 1 para indicar que houve erro na entrada.
// printf("Anos bissextos entre %d e %d:\n", ano1, ano2);: Exibe uma mensagem com o intervalo de anos bissextos.
// for (int ano = ano1 + 1; ano < ano2; ano++): Laço que percorre os anos entre ano1 e ano2.
// if (isBissexto(ano)): Verifica se o ano é bissexto.
// printf("%d\n", ano);: Exibe o ano bissexto encontrado.


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
