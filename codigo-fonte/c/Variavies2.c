#include <stdio.h>
//#include <locale.h>

int main() {
//    setlocale(LC_ALL, "Portuguese");
    
    int numero1, numero2;
    float numero3, numero4;
    
    // Testando números inteiros
    printf("Digite dois numeros INTEIROS (ex: 5 e 2): ");
    scanf("%d %d", &numero1, &numero2);
    
    printf("\n%d + %d = %d\n", numero1, numero2, numero1 + numero2);
    printf("%d - %d = %d\n", numero1, numero2, numero1 - numero2);
    printf("%d * %d = %d\n", numero1, numero2, numero1 * numero2);
    printf("%d / %d = %d (divisao de inteiros PERDE as casas decimais!)\n", 
           numero1, numero2, numero1 / numero2);
    
    // Testando números reais
    printf("\nDigite dois numeros REAIS (ex: 5.5 e 2.2): ");
    scanf("%f %f", &numero3, &numero4);
    
    printf("\n%.2f + %.2f = %.2f\n", numero3, numero4, numero3 + numero4);
    printf("%.2f - %.2f = %.2f\n", numero3, numero4, numero3 - numero4);
    printf("%.2f * %.2f = %.2f\n", numero3, numero4, numero3 * numero4);
    printf("%.2f / %.2f = %.2f (divisao de reais MANTEM as casas decimais!)\n", numero3, numero4, numero3 / numero4);
    
    return 0;
}
