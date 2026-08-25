#include <stdio.h>

int main()
{
    float raio;
    float area;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = 3.14159 * raio * raio;

    printf("Area do circulo: %.2f\n", area);

    return 0;
}
