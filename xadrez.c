#include <stdio.h>

// Constantes para o número de passos de cada peça
const int BISPO_PASSOS = 5;
const int TORRE_PASSOS = 5;
const int RAINHA_PASSOS = 8;

// Função recursiva para movimentação do Bispo (diagonal direita para cima)
void moveBispo(int passos) {
    if (passos >= BISPO_PASSOS) {
        printf("Bispo atingiu o limite de movimento.\n");
        return;
    }
    printf("Cima e Direita\n"); // Movimenta na diagonal direita para cima
    moveBispo(passos + 1); // Chamada recursiva para próximo movimento
}

// Função recursiva para movimentação da Torre (direita)
void moveTorre(int passos) {
    if (passos >= TORRE_PASSOS) {
        printf("Torre atingiu o limite de movimentos.\n");
        return;
    }
    printf("Direita\n"); // Movimenta para a direita
    moveTorre(passos + 1); // Chamada recursiva para próximo movimento
}

// Função recursiva para movimentação da Rainha (esquerda)
void moveRainha(int passos) {
    if (passos >= RAINHA_PASSOS) {
        printf("Rainha atingiu o limite de movimentos.\n");
        return;
    }
    printf("Esquerda\n"); // Movimenta para a esquerda
    moveRainha(passos + 1); // Chamada recursiva para próximo movimento
}

// Função para movimentação do Cavalo (2 casas para cima e 1 casa para a direita)
void moveCavalo() {
    printf("\nMovimentação do Cavalo (2 casas para cima e 1 casa à direita):\n");
    
    // Movimenta 2 casas para cima
    printf("Cima\n");
    printf("Cima\n");
    
    // Movimenta 1 casa para a direita
    printf("Direita\n");
    
    printf("Cavalo completou uma movimentação em L.\n");
}

int main() {
    // Movimentação do Bispo
    printf("Movimentação do Bispo (Diagonal Superior Direita):\n");
    moveBispo(0);
    
    // Movimentação da Torre
    printf("\nMovimentação da Torre (Direita):\n");
    moveTorre(0);

    // Movimentação da Rainha
    printf("\nMovimentação da Rainha (Esquerda):\n");
    moveRainha(0);
    
    // Movimentação do Cavalo
    moveCavalo();

    return 0;
}