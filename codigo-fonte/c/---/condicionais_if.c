#include <stdio.h>

int main() {
    int nota;

    printf("Digite a nota do aluno (0 a 100): ");
    scanf("%d", &nota);

    if (nota >= 70) {
        printf("Aluno APROVADO!\n");
    } else if (nota >= 50) {
        printf("Aluno em RECUPERACAO.\n");
    } else {
        printf("Aluno REPROVADO.\n");
    }

    return 0;
}