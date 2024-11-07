#include <stdio.h>

#define TAM 10 // Tamanho do Tabuleiro

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    /*
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
    */
   int tabuleiro [TAM][TAM] = {{0}};

   //definir navios
    int navio1X = 2;
    int navio1Y = 2;
    int tamanhoNavio1 = 3;

    int navio2X = 7;
    int navio2Y = 7;
    int tamanhoNavio2 = 3;

    //posicionando navios no tabuleiro
    for (int i = 0; i < tamanhoNavio1; i++) {
        tabuleiro[navio1X + i][navio1Y] = 1; //navio vertical
    }

    for (int i = 0; i < tamanhoNavio2; i++) {
        tabuleiro[navio2X][navio2Y + i] = 1; //navio horizontal
    }

    // imprimir coordenadas dos navios
    printf("Navio 1 (vertical):\n");
    for (int i = 0; i < tamanhoNavio1; i++) {
        printf("(%d, %d)\n", navio1X + i, navio1Y);
    }

    printf("\nNavio 2 (horizontal):\n");
    for (int i = 0; i < tamanhoNavio2; i++) {
        printf("(%d, %d)\n", navio2X, navio2Y + i);
    }

    //imprimir tabuleiro
    printf("\nTabuleiro:\n");
    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++) {
            printf("%d", tabuleiro[i][j]);
        }
        printf("\n")
    }
    
    
    
    return 0;
}
