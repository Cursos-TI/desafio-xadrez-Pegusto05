#include <stdio.h>

/*
Desafio de Xadrez - MateCheck
Nível Novato

Neste programa, simulamos a movimentação de três peças de xadrez:
- Bispo: movimenta-se na diagonal superior direita.
- Torre: movimenta-se horizontalmente para a direita.
- Rainha: movimenta-se horizontalmente para a esquerda.

Utilizaremos estruturas de repetição para simular os movimentos e 
exibir as direções na tela com base em comandos predefinidos.
*/

int main() {
    // Introdução ao usuário
    printf("\n===================================\n");
    printf("|| Desafio de Xadrez - MateCheck ||\n");
    printf("===================================\n\n");
    printf("Neste programa, simularemos os movimentos de peças de xadrez utilizando loops.\n");
    printf("Cada peça será movimentada em uma direção específica, com base em suas regras.\n\n");

    // Constantes que definem o número de casas que cada peça pode se mover
    const int MOV_BISPO = 5;
    const int MOV_TORRE = 5;
    const int MOV_RAINHA = 8;

    // Movimentação do Bispo
    printf("Movimentação do Bispo (diagonal superior direita):\n");
    for (int i = 0; i < MOV_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // Movimentação da Torre
    printf("\nMovimentação da Torre (direita):\n");
    int i = 0;
    while (i < MOV_TORRE) {
        printf("Direita\n");
        i++;
    }

    // Movimentação da Rainha
    printf("\nMovimentação da Rainha (esquerda):\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < MOV_RAINHA);

    // Fim do programa
    printf("\nTodas as movimentações foram concluídas com sucesso.\n");

    return 0;
}