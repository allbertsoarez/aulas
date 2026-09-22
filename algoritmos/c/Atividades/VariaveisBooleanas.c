#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main() {
       
    bool esta_chovendo;
    bool tem_guarda_chuva;
    
    printf("Esta chovendo? (1 para Sim, 0 para Nao): ");
    scanf("%d", &esta_chovendo);
    
    printf("Voce tem guarda-chuva? (1 para Sim, 0 para Nao): ");
    scanf("%d", &tem_guarda_chuva);
    
    bool vai_se_molhar = esta_chovendo && !tem_guarda_chuva;
    
    printf("\nEsta chovendo? %s", esta_chovendo "Sim" : "Nao");
    printf("Tem guarda-chuva? %s", tem_guarda_chuva "Sim" : "Nao");
    
    if (vai_se_molhar) 
		{
			printf("\n Voce VAI se molhar! (corre pegar um guarda-chuva!)");
    } else 
		{
			printf("Voce NAO vai se molhar!\n");
		}
    
    return 0;
}
