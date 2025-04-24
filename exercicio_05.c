// #include <stdio.h>: Inclui a biblioteca padrão para entrada e saída de dados, como printf e scanf.
// #include <math.h>: Inclui a biblioteca matemática para usar a função sqrt(), que calcula a raiz quadrada.
// int main(): Função principal do programa, onde a execução começa.
// float a, b, c, delta, x1, x2;: Declara as variáveis necessárias para armazenar os coeficientes da equação, o discriminante (delta) e as raízes (x1, x2).
// printf("Digite os valores de a, b e c: ");: Exibe uma mensagem pedindo ao usuário para inserir os valores dos coeficientes a, b e c.
// scanf("%f %f %f", &a, &b, &c);: Lê os valores dos coeficientes a, b e c inseridos pelo usuário.
// delta = b * b - 4 * a * c;: Calcula o discriminante (delta), que é dado por b² - 4ac.
// if (delta > 0): Se o discriminante for maior que 0, existem duas raízes reais e distintas.
// x1 = (-b + sqrt(delta)) / (2 * a);: Calcula a primeira raiz real usando a fórmula de Bhaskara.
// x2 = (-b - sqrt(delta)) / (2 * a);: Calcula a segunda raiz real usando a fórmula de Bhaskara.
// printf("As raízes são: x1 = %.2f e x2 = %.2f\n", x1, x2);: Exibe as duas raízes reais encontradas.
// else if (delta == 0): Se o discriminante for igual a 0, existe uma única raiz real.
// x1 = -b / (2 * a);: Calcula a única raiz real usando a fórmula de Bhaskara.
// printf("A raiz única é: x = %.2f\n", x1);: Exibe a única raiz real encontrada.
// else: Se o discriminante for menor que 0, não existem raízes reais.
// printf("Não existem soluções reais.\n");: Informa ao usuário que não existem soluções reais para a equação.
// return 0;: Finaliza a execução do programa com sucesso.


#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;

    // Recebe os valores de a, b e c
    printf("Digite os valores de a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calcula o discriminante (delta)
    delta = b * b - 4 * a * c;

    if (delta > 0) {
        // Duas raízes reais e distintas
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raízes são: x1 = %.2f e x2 = %.2f\n", x1, x2);
    } else if (delta == 0) {
        // Uma raiz real
        x1 = -b / (2 * a);
        printf("A raiz única é: x = %.2f\n", x1);
    } else {
        printf("Não existem soluções reais.\n");
    }

    return 0;
}
