#include <stdio.h>

int main(){
    int numero;
    float horas;
    float valorHora;
    float salario;

    printf("Digite o numero do funcionario: ");
    scanf("%d", &numero);

    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &horas);

    printf("Digite o valor recebido por hora: ");
    scanf("%f", &valorHora);

    salario = horas * valorHora;

    printf("Numero do funcionario: %d\n", numero);
    printf("Salario: %.2f\n", salario);

    return 0;
}
