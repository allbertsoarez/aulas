#include <stdio.h>
int main() {
    float nota1, nota2, nota3;
    float media;
    float mediaAprovacao;
    
// Usuário define a média de aprovação
    printf("Qual a media minima para aprovacao? ");
    scanf("%f", &mediaAprovacao);
    
// Entrada das notas
    printf("\nDigite as tres notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    
// Cálculo da média
    media = (nota1 + nota2 + nota3) / 3;
    
// Resultado
    printf("\nMedia necessaria: %.1f\n", mediaAprovacao);
    printf("Sua media: %.1f\n", media);
    
    if (media >= mediaAprovacao) {
        printf("APROVADO! \n");
    } else {
        printf("REPROVADO! \n");
    }
    
    return 0;
}
