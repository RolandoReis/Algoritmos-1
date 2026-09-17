#include <stdio.h>

int main() {
    
    int quantidade;
    int numero;
    int soma = 0;
    int contador = 0;
    
    printf("Quantos números você deseeja digitar? ");
    scanf("%d", &quantidade);
    
    while(contador < quantidade) {
        
        printf("Digite um número: \n");
        scanf("%d", &numero);
        
        soma = soma + numero;
        
        contador++;
    }
    
    printf("A soma dos valores é: %d\n", soma);
    
    return 0;
}
