



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
