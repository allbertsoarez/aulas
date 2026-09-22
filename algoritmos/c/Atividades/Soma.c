// Calcular soma de dois números
#include <stdio.h>

int main() {
    int num1, num2, soma;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo  numero: ");
	scanf("%d", &num2);
        
    soma = num1 + num2;
    printf("A soma e: %d", soma);
    
    return 0;
}

/*Algoritmo "SomaDoisNumeros"
Descrição: Calcula a soma de dois números

// Declaração das variáveis
Var
   num1, num2: inteiro
   soma: inteiro

// Entrada de dados
Inicio
   Escreva("Digite o primeiro numero: ")
   Leia(num1)
   
   Escreva("Digite o segundo numero: ")
   Leia(num2)
   
// Processamento
   soma <- num1 + num2
   
// Saída de dados
   Escreva("A soma e: ", soma)

FimAlgoritmo
*/
