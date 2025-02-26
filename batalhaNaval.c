#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Declaração do tabuleiro 5x5
    int tabuleiro[5][5] = {0}; // Inicializa todas as posições com 0 (água)

    // Posicionamento do navio horizontal (3 posições)
    int navio_horizontal[3] = {3, 3, 3}; // Navio horizontal representado pelo valor 1
    int inicio_horizontal_x = 1; // Coordenada inicial X do navio horizontal
    int inicio_horizontal_y = 2; // Coordenada inicial Y do navio horizontal

    for (int i = 0; i < 3; i++) {
        tabuleiro[inicio_horizontal_x][inicio_horizontal_y + i] = navio_horizontal[i];
    }

    // Posicionamento do navio vertical (3 posições)
    int navio_vertical[3] = {3, 3, 3}; // Navio vertical representado pelo valor 2
    int inicio_vertical_x = 2; // Coordenada inicial X do navio vertical
    int inicio_vertical_y = 1; // Coordenada inicial Y do navio vertical

    for (int i = 0; i < 3; i++) {
        tabuleiro[inicio_vertical_x + i][inicio_vertical_y] = navio_vertical[i];
    }

    // Exibição do tabuleiro com os navios posicionados
    printf("Tabuleiro com navios posicionados:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Exibição das coordenadas de cada parte dos navios
    printf("\nCoordenadas do navio horizontal:\n");
    for (int i = 0; i < 3; i++) {
        printf("(%d, %d)\n", inicio_horizontal_x, inicio_horizontal_y + i);
    }

    printf("\nCoordenadas do navio vertical:\n");
    for (int i = 0; i < 3; i++) {
        printf("(%d, %d)\n", inicio_vertical_x + i, inicio_vertical_y);
    }

    return 0;
}
