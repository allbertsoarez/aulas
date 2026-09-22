#include <stdio.h>
#include <conio.h>
#include <math.h>
#define LIMITE 30

int main(void)
{
    
//Declarando variáveis peso, altura e imc como tipo float
    float peso, altura, imc;

//Entrada e captura de dados
    printf("\n Qual o seu peso e altura? ");
	scanf("%f %f", &peso, &altura);
    
//Processamento dos dados
    imc = peso/pow(altura, 2);

//Saída de dados
    printf("\n Seu I.M.C. e %.1f", imc);

    if (imc <= LIMITE)
        printf("\n Parabens! Voce nao esta obeso!");
    else                
        printf("\n Cuidado! Voce esta obeso!");
    return 0;
}
