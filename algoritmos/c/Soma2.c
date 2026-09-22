// Calcular soma de dois números
#include <stdio.h>

int main() {
    int num1, num2, soma;
    
    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);
    
    soma = num1 + num2;
    printf("A soma e: %d", soma);
    
    return 0;
}
