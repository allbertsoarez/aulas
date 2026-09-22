#include <stdio.h>

int main() {
    float n1, n2, n3, n4, media;
    
   printf("=== CALCULADORA DE MEDIAS ===\n");
   printf("\n Digite a primeira nota: ");
   scanf("%f", &n1);
    
   printf("\n Digite a segunda nota: ");
   scanf("%f", &n2);
    
   printf("\n Digite a terceira nota: ");
   scanf("%f", &n3);
    
   printf("\n Digite a quarta nota: ");
   scanf("%f", &n4);
    
   media = (n1 + n2 + n3 + n4) / 4;
    
   printf("Media: %.1f\n", media);
    
   if (media >= 7) {
       printf("APROVADO!");
   } else {
       printf("RECUPERACAO!");
   }
    
    return 0;
}
