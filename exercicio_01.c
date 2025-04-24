//



#include <stdio.h>

int main (){
    float a, b, c;

    printf("digite os três lados do triâmgulo:\n");

    scanf("%f %f %f", &a, &b, &c);

    if(a + b > c && a + c > b && b + c > a) {

        printf("É um triângulo.\n");

        if (a == b && b == c) {
            printf("Tipo: Equilátero\n");

        } else if (a == b || a == c || b == c) {

            printf("Tipo: Isóseles\n");
        } else {

            printf("Tipo: Escaleno\n");
        }
    } else { 
        printf("Os valores fornecidos não formam um triângulo.\n");
    }

    return 0;
}
