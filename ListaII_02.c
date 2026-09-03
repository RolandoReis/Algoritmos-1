#include <stdio.h>

int main(){

    char sexo;
    int idade;
    printf("Digite seu sexo: \n");
    scanf("%c", &sexo);
    printf("Digite sua idade: \n");
    scanf("%d", &idade);

if (idade >= 18 && sexo == 'M' || sexo == 'm'){
    printf("Alistamento obrigatório!\n");

} else {
    printf("Não obrigatório!\n");

}

return 0;

}
