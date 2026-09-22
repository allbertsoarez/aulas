#include <stdio.h>
#include <conio.h>
#include <math.h>
#define LIMITE 30

int main(void)
{

//Declarando variáveis peso, altura e imc como tipo float    
    float peso, altura, imc;

//Entrada e captura de dados
    printf("\n Qual o seu peso? ");
    scanf("%f", &peso);  
    printf("\n Qual e a sua altura? "); 
    scanf("%f", &altura);   

//Processamento dos dados
    imc = peso/pow(altura, 2);
    printf("\n Seu I.M.C. e %.1f", imc);

    if (imc <= LIMITE)
        printf("\n Parabens! Voce nao esta obeso!");
    else                
        printf("\n Cuidado! Voce esta obeso!");

//    getch();
    return 0;
}
