#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhaJogador, escolhaComputador;

    srand(time(NULL));

    printf("*** JOKENPO ***\n");
    printf("Escolha sua jogada:\n");
    printf("[ 1 ] Pedra\n");
    printf("[ 2 ] Papel\n");
    printf("[ 3 ] Tesoura\n");
    printf("Sua opcao: ");
    scanf("%d", &escolhaJogador);

    if (escolhaJogador < 1 || escolhaJogador > 3) {
        printf("\nOpcao invalida! O jogo terminou.\n");
        return 1; 
    }

    escolhaComputador = (rand() % 3) + 1;

    printf("\nVocê escolheu: ");
    switch(escolhaJogador) {
        case 1: printf("Pedra\n"); break;
        case 2: printf("Papel\n"); break;
        case 3: printf("Tesoura\n"); break;
    }

    printf("O computador escolheu: ");
    switch(escolhaComputador) {
        case 1: printf("Pedra\n"); break;
        case 2: printf("Papel\n"); break;
        case 3: printf("Tesoura\n"); break;
    }

    printf("---------------------------\n");

    if (escolhaJogador == escolhaComputador) {
        printf("Deu EMPATE!\n");
    } 
    
    else if ((escolhaJogador == 1 && escolhaComputador == 3) || 
             (escolhaJogador == 2 && escolhaComputador == 1) || 
             (escolhaJogador == 3 && escolhaComputador == 2)) {  
        printf("Parabens! Voce VENCEU!\n");
    } 
    
    else {
        printf("Que pena! O Computador VENCEU!\n");
    }

    printf("---------------------------\n");

    return 0;
}