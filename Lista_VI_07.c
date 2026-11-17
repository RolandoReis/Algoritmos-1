#include <stdio.h>

int main() {

    int logica[10];
    int linguagem[8];
    int qtdLogica;
    int qtdLinguagem;
    int i, j;
    int encontrou = 0;

    do {
        printf("Quantidade de alunos de Logica (maximo 10): ");
        scanf("%d", &qtdLogica);
    } while (qtdLogica < 0 || qtdLogica > 10);

    for (i = 0; i < qtdLogica; i++) {
        printf("Digite a matricula do aluno: ");
        scanf("%d", &logica[i]);
    }

    do {
        printf("\nQuantidade de alunos de Linguagem (maximo 8): ");
        scanf("%d", &qtdLinguagem);
    } while (qtdLinguagem < 0 || qtdLinguagem > 8);

    for (i = 0; i < qtdLinguagem; i++) {
        printf("Digite a matricula do aluno: ");
        scanf("%d", &linguagem[i]);
    }

    for (i = 0; i < qtdLogica; i++) {
        for (j = 0; j < qtdLinguagem; j++) {
            if (logica[i] == linguagem[j]) {
                printf("\nMatricula em comum: %d\n", logica[i]);
                encontrou = 1;
            }
        }
    }

    if (encontrou == 0) {
        printf("\nNenhum aluno em comum.\n");
    }

    return 0;
}
