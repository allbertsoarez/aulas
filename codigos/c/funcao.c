#include <stdio.h>

// MINHA FUNÇÃO
int dobrar(int numero) {
    return numero * 2;
}

// PROGRAMA PRINCIPAL
int main() {
    int valor;
    
    printf("Digite um numero: ");
    scanf("%d", &valor);
    
    int resultado = dobrar(valor);  // Chamando MINHA função
    
    printf("O dobro e: %d\n", resultado);
    
    return 0;
}
