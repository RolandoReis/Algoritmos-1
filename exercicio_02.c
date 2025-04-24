// float altura: Essa variável vai guardar a altura que o usuário digitar.
// primeiro printf: A gente pede pro usuário informar a altura.
// scanf: E aqui a gente lê essa altura digitada.
// primeiro if e printf: Se a altura for maior que 1.70, a gente avisa isso
// else if e printf: Se for menor, avisamos que tá abaixo da média.
// else printf: E se for exatamente 1.70, então tá na média certa.


#include <stdio.h>

int main() {
    float altura;

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    if (altura > 1.70) {
        printf("Sua altura é maior que a média nacional.\n");
    } else if (altura < 1.70) {
        printf("Sua altura é menor que a média nacional.\n");
    } else {
        printf("Sua altura é igual à média nacional.\n");
    }

    return 0;
}
