#include <stdio.h>

int main() {
    char nome[50];
    int idade;
    
    printf("Qual e o seu nome? ");
    scanf("%s", nome);
    
    printf("Qual e a sua idade? ");
    scanf("%d", &idade);
    
    printf("\nOla %s, voce tem %d anos.\n", nome, idade);
    
    return 0;
}
