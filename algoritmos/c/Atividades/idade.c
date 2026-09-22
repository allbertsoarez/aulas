#include <stdio.h>
// FUNÇÃO: converter_anos_para_dias
int converter_anos_para_dias(int anos) {
    return anos * 365;
}

// PROGRAMA PRINCIPAL
int main() {
    
    int idade;
    char continuar;
    
    printf("=== CALCULADORA DE IDADE EM DIAS ===\n");
    
    do {
        printf("\n Qual sua idade? ");
        scanf("%d", &idade);
        
// Chamando a função
        int dias = converter_anos_para_dias(idade);
        
        printf("Quem tem %d anos ja viveu %d dias!\n", idade, dias);
        
        printf("\nCalcular outra idade? (s/n): ");
        scanf(" %c", &continuar);
        
    } while(continuar == 's' || continuar == 'S');
    
    printf("\n Programa encerrado. Até mais!\n");
    return 0;
}

/*
Algoritmo "CalculadoraIdadeEmDias"
Descrição: Converte anos em dias usando função

FUNÇÃO: converter_anos_para_dias
Recebe a idade em anos e retorna em dias

Funcao converter_anos_para_dias(anos: inteiro): inteiro
Var
   dias: inteiro
Inicio
   dias <- anos * 365
   retorne dias
FimFuncao

PROGRAMA PRINCIPAL
Var
   idade: inteiro
   diasVividos: inteiro
   continuar: caractere

Inicio
   EscrevaL("=== CALCULADORA DE IDADE EM DIAS ===")
   
// Loop para repetir enquanto usuário quiser
   repita

// Entrada da idade
      EscrevaL("")
      Escreva("Qual sua idade? ")
      Leia(idade)
      
// Chamando a função para calcular os dias
      diasVividos <- converter_anos_para_dias(idade)
      
// Mostrando o resultado
      Escreva("Quem tem ", idade, " anos ja viveu ")
      EscrevaL(diasVividos, " dias!")
      
// Perguntando se quer continuar
      EscrevaL("")
      Escreva("Calcular outra idade? (s/n): ")
      Leia(continuar)
      ate continuar <> 's' e continuar <> 'S'
   
// Mensagem de encerramento
   EscrevaL("")
   EscrevaL("Programa encerrado. Ate mais!")

FimAlgoritmo 
 */
