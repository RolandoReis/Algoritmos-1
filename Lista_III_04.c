#include <stdio.h>

int main(){

    int i = 2;
    int valor = 5;
    int primo = 0;
    int cont_mult = 0;

    printf("Digite um numero: \n");
    scanf("%d", &valor);

    while(i < valor){

        if(valor % i == 0){
            primo = 1;
        i++;
        }
        if(primo == 0){
            printf("E primo\n");
        } else {
            printf("Nao e primo\n");
        }

            return 0;
    } 
