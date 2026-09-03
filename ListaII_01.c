#include <stdio.h>

int main(){

    int idade;
    float peso;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite seu peso: \n");
    scanf("%f", &peso);

    if (idade < 70 && idade > 17 && peso >= 50){
        printf("Você está apto!!\n");

    } else {
        printf("Vocẽ não está apto!!\n");    

    }

return 0;

}
