#include <stdio.h>

int main() {
    
    int n = 5;
    int i = 3;
    int j = 5;
    int numero = 1;
    int contador = 0;
    
    while(contador < n) {
        
        if(numero % i == 0 || numero % j == 0) {
            printf("%d\n", numero);
            contador++;
        }
        
        numero++;
    }
    
    return 0;
    
}
