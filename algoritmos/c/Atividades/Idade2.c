#include <stdio.h>
int main() {
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
   
    if (idade >= 18) {
        printf("Voce e MAIOR de idade!\n");
        printf("Pode dirigir, votar e ser preso!\n");
    } else {
        printf("Voce e MENOR de idade!\n");
        printf("Faltam %d anos para ser maior.\n", 18 - idade);
    }
   
    return 0;
}
