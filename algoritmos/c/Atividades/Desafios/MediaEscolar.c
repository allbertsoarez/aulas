/*
EXERCÍCIO: MÉDIA ESCOLAR
Peça 4 notas, calcule a média e diga se o aluno está aprovado (média ≥ 7)
*/
#include <stdio.h>

int main() {
    
    float n1, n2, n3, n4, media;
    
    printf("=== CALCULADORA DE MEDIAS ===\n");
    printf("Digite as 4 notas: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    
    media = (n1 + n2 + n3 + n4) / 4;
    
    printf("Media: %.1f\n", media);
    
    if (media >= 7) {
        printf("APROVADO!");
    } else {
        printf("RECUPERAÇÃO!");
    }
    
    return 0;
}
