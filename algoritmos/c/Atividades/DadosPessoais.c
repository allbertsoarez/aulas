#include <stdio.h>

int main() {
	int idade;
	float altura;
	char nome[50];
	
	printf("Digite o seu nome: ");
	scanf("%s", nome);
	
	printf("Qual sua idade? ");
    scanf("%d", &idade);
		
	printf("Digite a sua altura: ");
	scanf("%f", &altura);
	
	printf("Meu nome e: %s\n", nome);
   printf("Minha idade e: %d\n", idade);
	//printf("Minha altura e: %f\n", altura);
	//printf("Minha altura e: %.2f\n", altura);
	printf("Minha altura e: %.2f metros\n", altura);
    
	return 0;
}



/*
Algoritmo "DadosPessoais"

Var
   nome: caractere
   idade: inteiro
   altura: real

Inicio

Entrada de dados
   Escreva("Digite seu nome: ")
   Leia(nome)
   
   Escreva("Digite sua idade: ")
   Leia(idade)
   
   Escreva("Digite sua altura: ")
   Leia(altura)
   
Saída de dados
   EscrevaL("Nome: ", nome)
   Escreva("Idade: ", idade, " anos")
   Escreva("Altura: ", altura, " metros")

FimAlgoritmo 
*/
