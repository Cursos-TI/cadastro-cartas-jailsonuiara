#include <stdio.h>

int main() {
   
   float nota1, nota2, nota3;
   float media;

   printf("*** programa de calculo de media ***\n");

   
   printf("Digite a sua primeira nota: ");
   scanf("%f", &nota1);

   printf("Digite a sua segunda nota: ");
   scanf("%f", &nota2);

   printf("Digite a sua terceira nota: ");
   scanf("%f", &nota3);

   media = (nota1 + nota2 + nota3) / 3.0;

   
   printf("A média é: %.2f\n", media);

   return 0;
} 