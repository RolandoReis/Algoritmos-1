#include <stdio.h>

int main(){

    int i = 2;
    int soma = 0;

    while (i <= 100){
        
        if(i % 2 == 0)
            soma = soma + i;
        i++;

    }

        printf("Soma: %d\n", soma);

    return 0;
}
