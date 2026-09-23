#include <stdio.h>

int main() {
    int numero;
    char nome[50];

    printf("Digite o seu nome: ");
    scanf("%49s", nome); // Limita o tamanho para evitar overflow

    printf("Digite a sua idade: ");
    scanf("%d", &numero);

    printf("\nOlá, %s! Você tem %d anos.\n", nome, numero);

    return 0;
}