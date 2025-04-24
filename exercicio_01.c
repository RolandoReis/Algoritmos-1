// o #include <stdio.h> inclui a biblioteca padrão de entrada e saída, que permite o uso de funções como printf() e scanf().
// float a, b, c declara três variáveis do tipo float para armazenar os lados do triângulo.
// o primeiro printf exibe uma mensagem pedindo que o usuário digite os três lados do triângulo.
// o scanf lê três números reais digitados pelo usuário e armazena nas variáveis a, b e c. Verifica se os três lados formam um triângulo válido. Para formar um triângulo, a soma de dois lados deve ser sempre maior que o terceiro.
// o primeiro if e printf: Se a condição for verdadeira, informa que os lados formam um triângulo. Verifica se todos os lados são iguais.
// o segundo if e printf: Se forem todos iguais, é um triângulo equilátero. Verifica se apenas dois lados são iguais.
// o else if: Se dois lados forem iguais, é um triângulo isósceles. Caso contrário, todos os lados são diferentes.
// o primeiro else: Se todos os lados forem diferentes, é um triângulo escaleno.
// o segundo else: Se a condição do triângulo não for satisfeita, exibe mensagem de erro.
// return 0 finaliza o programa com retorno 0, indicando que foi executado com sucesso.


#include <stdio.h>

int main (){
    float a, b, c;

    printf("digite os três lados do triângulo:\n");

    scanf("%f %f %f", &a, &b, &c);

    if(a + b > c && a + c > b && b + c > a) {

        printf("É um triângulo.\n");

        if (a == b && b == c) {
            printf("Tipo: Equilátero\n");

        } else if (a == b || a == c || b == c) {

            printf("Tipo: Isósceles\n");
        } else {

            printf("Tipo: Escaleno\n");
        }
    } else { 
        printf("Os valores fornecidos não formam um triângulo.\n");
    }

    return 0;
}
