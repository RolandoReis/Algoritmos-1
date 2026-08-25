#include <stdio.h>
#include <math.h>

int main(){
    float numero;
    float quadrado, cubo;
    float raizQuadrada, raizCubica;

    printf("Digite um numero maior que zero: ");
    scanf("%f", &numero);

    quadrado = numero * numero;
    cubo = numero * numero * numero;
    raizQuadrada = sqrt(numero);
    raizCubica = pow(numero, 1.0 / 3.0);

    printf("Numero ao quadrado: %.2f\n", quadrado);
    printf("Numero ao cubo: %.2f\n", cubo);
    printf("Raiz quadrada: %.2f\n", raizQuadrada);
    printf("Raiz cubica: %.2f\n", raizCubica);

    return 0;
}
