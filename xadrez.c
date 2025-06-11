#include <stdio.h>

/*
Desafio de Xadrez - MateCheck
Nível Mestre

Objetivo:
- Usar funções recursivas para movimentar Bispo, Torre e Rainha.
- Usar loops com múltiplas variáveis, continue e break para o Cavalo.
- Bispo se movimenta 5 casas na diagonal direita para cima usando loops aninhados.
- Torre se movimenta 5 casas para a direita.
- Rainha se movimenta 8 casas para a esquerda.
- Cavalo faz 1 movimento em L para cima à direita.
*/

// Função recursiva para mover Torre 5 casas para a direita
void moverTorre(int passos) {
    if (passos == 0) {
        return; // fim da recursão
    }
    printf("Direita\n");
    moverTorre(passos - 1); // chamada recursiva diminuindo passos
}

// Função recursiva para mover Rainha 8 casas para a esquerda
void moverRainha(int passos) {
    if (passos == 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// Função recursiva para mover Bispo 5 casas na diagonal direita para cima
// Aqui usamos loops aninhados para mostrar o movimento diagonal (direita + cima)
void moverBispo(int passos) {
    if (passos == 0) {
        return;
    }
    // Loop aninhado: uma casa para cima, uma casa para direita (diagonal)
    for (int i = 0; i < 1; i++) {       // movimento para cima
        printf("Cima\n");
        for (int j = 0; j < 1; j++) {   // movimento para direita
            printf("Direita\n");
        }
    }
    moverBispo(passos - 1);
}

// Função para mover Cavalo 1 vez em L para cima à direita usando loops com múltiplas variáveis
void moverCavalo() {
    int passos_cima = 0;
    int passos_direita = 0;

    printf("Movimento do Cavalo em L:\n");

    while (1) {
        // Subir 2 casas (passos_cima < 2)
        if (passos_cima < 2) {
            printf("Cima\n");
            passos_cima++;
            continue; // volta para o início do loop
        }
        // Depois mover 1 casa para direita (passos_direita < 1)
        if (passos_direita < 1) {
            printf("Direita\n");
            passos_direita++;
            continue;
        }
        break; // quando ambos passos realizados, sai do loop
    }
}

int main() {
    printf("\n=========================================\n");
    printf("|| Desafio de Xadrez - MateCheck - Mestre ||\n");
    printf("=========================================\n\n");

    printf("Movimentação da Torre (5 casas para a direita):\n");
    moverTorre(5);
    printf("\n");

    printf("Movimentação da Rainha (8 casas para a esquerda):\n");
    moverRainha(8);
    printf("\n");

    printf("Movimentação do Bispo (5 casas diagonal direita para cima):\n");
    moverBispo(5);
    printf("\n");

    moverCavalo();
    printf("\nMovimentações concluídas com sucesso!\n");

    return 0;
}
