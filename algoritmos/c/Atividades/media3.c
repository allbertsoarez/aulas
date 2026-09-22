#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    float media;
    float mediaAprovacao;
    int opcao;
    
    printf("========================================\n");
    printf("     SISTEMA DE MEDIAS - VARIAS ESCOLAS\n");
    printf("========================================\n\n");
    
// Menu de opções para o usuário escolher
    printf("Escolha a escola/curso:\n");
    printf("1 - Escola Publica (media 6.0)\n");
    printf("2 - Escola Particular (media 7.0)\n");
    printf("3 - Curso Tecnico (media 5.0)\n");
    printf("4 - Definir minha propria media\n");
    printf("\nDigite sua opcao: ");
    scanf("%d", &opcao);
    
// Definindo a média de aprovação baseada na escolha
    switch(opcao) {
        case 1:
            mediaAprovacao = 6.0;
            printf("\n Voce escolheu ESCOLA PÚBLICA (media %.1f)\n", mediaAprovacao);
            break;
        case 2:
            mediaAprovacao = 7.0;
            printf("\n Voce escolheu ESCOLA PARTICULAR (media %.1f)\n", mediaAprovacao);
            break;
        case 3:
            mediaAprovacao = 5.0;
            printf("\n Voce escolheu CURSO TECNICO (media %.1f)\n", mediaAprovacao);
            break;
        case 4:
            printf("\nDigite a media de aprovacao desejada: ");
            scanf("%f", &mediaAprovacao);
            break;
        default:
            printf("\nOpcao invalida! Usando media 7.0 como padrão.\n");
            mediaAprovacao = 7.0;
    }
    
    printf("\n--- INSIRA AS NOTAS ---\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    
// Cálculo da média
    media = (nota1 + nota2 + nota3) / 3;
    
// Resultado final
    printf("\n========================================\n");
    printf("                BOLETIM                 \n");
    printf("========================================\n");
    printf("Notas: %.1f, %.1f, %.1f\n", nota1, nota2, nota3);
    printf("Media necessaria: %.1f\n", mediaAprovacao);
    printf("Sua media: %.1f\n", media);
    printf("----------------------------------------\n");
    
    if (media >= mediaAprovacao) {
        printf("SITUACAO: APROVADO! \n");
        float diferenca = media - mediaAprovacao;
        printf("Voce superou a media em %.1f pontos!\n", diferenca);
    } else {
        printf("SITUACAO: REPROVADO! \n");
        float diferenca = mediaAprovacao - media;
        printf("Faltaram %.1f pontos para aprovacao.\n", diferenca);
    }
    
    printf("========================================\n");
    
    return 0;
}
