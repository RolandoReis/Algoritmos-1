#include <stdio.h>

int main(){
    float raio;
    float volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    volume = (4.0 / 3.0) * 3.14159 * raio * raio * raio;

    printf("Volume da esfera: %.2f\n", volume);

    return 0;
}
