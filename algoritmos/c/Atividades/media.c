#include <stdio.h>
int main() {
    float nota1, nota2, nota3, media;
    
    printf("Digite as tres notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    
    media = (nota1 + nota2 + nota3) / 3;
    
    printf("\nMedia: %.1f\n", media);
    
    if (media >= 7) {
        printf("Aprovado!\n");
    } else {
        printf("Reprovado!\n");
    }
    
    return 0;
}
