#include <stdio.h>
int main(void) 
{
//Declaração de Variáveis
	char nome[50];
	int idade;
	char endereco[50];

//Entrada de Dados
    printf("Qual e o seu nome? ");
    scanf("%s", nome);
    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    
    printf("Digite o seu endereco: ");
    scanf("%s", endereco);
	
//Saída de Dados
    printf("Eu me chamo: %s\n", nome);
	printf("Minha idade e: %d\n", idade);
    printf("Meu endereco: %s\n", endereco);

//Boa prática
	return 0;    
}

/* Algoritmo "CadastroPessoal"
Var
   nome: caractere
   idade: inteiro
   endereco: caractere

Inicio
//Entrada de dados
   Escreva("Qual e o seu nome? ")
   Leia(nome)
   
   Escreva("Digite a sua idade: ")
   Leia(idade)
   
   Escreva("Digite o seu endereco: ")
   Leia(endereco)
   
//Saída de dados
   EscrevaL("")
   Escreva("Eu me chamo: ")
   EscrevaL(nome)
   
   Escreva("Minha idade e: ")
   Escreva(idade)
   EscrevaL(" anos")
   
   Escreva("Meu endereco: ")
   EscrevaL(endereco)

FimAlgoritmo
*/
