#include <stdio.h>
int main() {
    float nota;
    
    printf("Digite sua nota (0 a 10): ");
    scanf("%f", &nota);
    
    if (nota >= 7) {
        printf("APROVADO! Parabens!\n");
        printf("Sua nota foi %.1f\n", nota);
    } else {
        printf("REPROVADO! Estude mais!\n");
        printf("Sua nota foi %.1f\n", nota);
        printf("Faltaram %.1f pontos para passar.\n", 7 - nota);
    }
    
    return 0;
}
