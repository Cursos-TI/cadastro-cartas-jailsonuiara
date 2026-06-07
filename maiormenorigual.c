#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto, chute;
    int tentativas = 0;

    srand(time(NULL));

    numeroSecreto = (rand() % 100) + 1;

    printf("=========================================\n");
    printf("   BEM-VINDO AO JOGO MAIOR OU MENOR!    \n");
    printf("=========================================\n");
    printf("Eu pensei em um numero entre 1 e 100.\n");
    printf("Tente adivinhar qual e!\n\n");

    do {
        printf("Digite o seu palpite: ");
        scanf("%d", &chute);
        tentativas++; 

        
        if (chute > numeroSecreto) {
            printf(">> O numero secreto e MENOR do que %d!\n\n", chute);
        } 
        else if (chute < numeroSecreto) {
            printf(">> O numero secreto e MAIOR do que %d!\n\n", chute);
        } 
        else {
            printf("****************************************\n");
            printf("PARABENS! Voce acertou o numero secreto!\n");
            printf("O numero era realmente %d.\n", numeroSecreto);
            printf("Voce precisou de %d tentativas para vencer.\n", tentativas);
            printf("******************************************\n");
        }

    } while (chute != numeroSecreto); 

    return 0;
}