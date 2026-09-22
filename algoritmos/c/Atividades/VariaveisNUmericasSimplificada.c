#include <stdio.h>
#include <locale.h>

int main() {
    
    int numero;
    float decimal;
    
    printf("Digite um numero INTEIRO (sem virgula): ");
    scanf("%d", &numero);
    printf("Voce digitou: %d\n\n", numero);
    
    printf("Digite um numero REAL (com virgula): ");
    scanf("%f", &decimal);
    printf("Voce digitou: %.2f\n\n", decimal);
    
    printf("INTEIRO: guarda numeros como 1, 10, -5\n");
    printf("REAL:    guarda numeros como 1.5, 3.14, 2.0\n");
    
    return 0;
}
