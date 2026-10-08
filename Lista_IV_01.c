#include <stdio.h>

int main(){

    int menu;
    float a, b, soma, mult;

    soma =  a + b;
    mult = a * b;

    do {
        printf("1 - Somar dois numeros\n");
        printf("2 - Multiplicar dois numeros\n");
        printf("3 - Sair\n");
        scanf("%d", &menu);

        switch (menu) {

            case 1:

                printf("somar dois numeros \n");
                scanf("%f", &a);
                scanf("%f", &b);
                printf("Resultado: %2.f\n", soma);

                break;

            case 2:
             
                printf("multiplicar dois numeros \n");
                scanf("%f", &a);
                scanf("%f", &b);
                printf("Resultado: %2.f\n", mult);

                break;

            case 3:

                printf("Sair\n");

                break;

        }

        } while(menu != 3);

    return 0;

}
