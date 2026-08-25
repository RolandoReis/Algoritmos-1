#include <stdio.h>

int main(){
    float horas;
    float salarioMinimo;
    float valorHora;
    float salarioBruto;
    float imposto;
    float salarioReceber;

    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &horas);

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salarioMinimo);

    valorHora = salarioMinimo / 2;
    salarioBruto = horas * valorHora;
    imposto = salarioBruto * 0.05;
    salarioReceber = salarioBruto - imposto;

    printf("Valor da hora: %.2f\n", valorHora);
    printf("Salario bruto: %.2f\n", salarioBruto);
    printf("Imposto: %.2f\n", imposto);
    printf("Salario a receber: %.2f\n", salarioReceber);

    return 0;
}
