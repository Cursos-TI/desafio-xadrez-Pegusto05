#include <stdio.h>

/*
Desafio de Xadrez - MateCheck
Nível Aventureiro

Neste nível, implementamos a movimentação do Cavalo em L, utilizando:
- Um loop "for" como estrutura principal;
- Um loop interno "while" aninhado para representar a sequência do movimento.

O Cavalo se moverá em L para baixo e para a esquerda:
- 2 casas para baixo;
- 1 casa para a esquerda.
*/

int main() {
    // Introdução ao usuário
    printf("\n===================================\n");
    printf("|| Desafio de Xadrez - MateCheck ||\n");
    printf("========== Nível Aventureiro ==========\n\n");

    printf("Neste nível, simularemos o movimento da peça Cavalo usando loops aninhados.\n");
    printf("O Cavalo se moverá em formato L (2 casas para baixo e 1 para a esquerda).\n\n");

    // Número de movimentos em L que desejamos simular
    const int MOVIMENTOS_CAVALO = 3; // Podemos aumentar esse valor se quisermos repetir o L mais vezes

    for (int i = 0; i < MOVIMENTOS_CAVALO; i++) {
        printf("Movimento em L #%d:\n", i + 1);

        // Parte 1: movimento vertical (para baixo)
        int passos_baixo = 0;
        while (passos_baixo < 2) {
            printf("Baixo\n");
            passos_baixo++;
        }

        // Parte 2: movimento horizontal (para a esquerda)
        printf("Esquerda\n");

        printf("\n"); // Separador entre movimentos
    }

    printf("Movimentações do Cavalo concluídas com sucesso!\n");

    return 0;