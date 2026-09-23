#include <stdio.h>

// Declaração da função
int somar(int a, int b) {
    return a + b;
}

void exibirMensagem() {
    printf("Esta funcao nao retorna nada (void).\n");
}

int main() {
    int resultado = somar(10, 5);
    printf("A soma eh: %d\n", resultado);
    
    exibirMensagem();

    return 0;
}