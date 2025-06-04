#include <stdio.h>

// Movimento recursivo da Torre para a direita
void moverTorre(int movimentos) {
    if (movimentos > 0) {
        moverTorre(movimentos - 1);
        printf("Direita %d\n", movimentos);
    }
}

// Movimento recursivo da Rainha para a esquerda
void moverRainha(int movimentos) {
    if (movimentos > 0) {
        moverRainha(movimentos - 1);
        printf("Esquerda %d\n", movimentos);
    }
}

// Movimento recursivo e com loops aninhados do Bispo na diagonal superior direita
void moverBispo(int movimentos) {
    if (movimentos > 0) {
        moverBispo(movimentos - 1);

        // Loop externo: vertical (Cima)
        for (int i = 0; i < 1; i++) {
            printf("Cima %d\n", movimentos);

            // Loop interno: horizontal (Direita)
            for (int j = 0; j < 1; j++) {
                printf("Direita %d\n", movimentos);
            }
        }
    }
}

// Loops complexos para o movimento do Cavalo
void moverCavalo(int movimento_vertical, int movimento_horizontal) {
    for (int i = 0; i < movimento_vertical; i++) {
        if (i == 1) continue;  // exemplo de uso de continue
        printf("Cima %d\n", i + 1);

        for (int j = 0; j < movimento_horizontal; j++) {
            if (j > 0) break;  // exemplo de uso de break
            printf("Cima %d\n", i + 2);
            printf("Direita %d\n", j + 1);
        }
    }
}

int main() {
    // Quantidade de movimentos definidos no código
    int movimentos_torre = 5;
    int movimentos_rainha = 8;
    int movimentos_bispo = 5;

    // Movimento do Cavalo
    int movimento_vertical = 2;
    int movimento_horizontal = 1;

    printf(">>> Movimento da Torre:\n");
    moverTorre(movimentos_torre);

    printf("\n>>> Movimento da Rainha:\n");
    moverRainha(movimentos_rainha);

    printf("\n>>> Movimento do Bispo:\n");
    moverBispo(movimentos_bispo);

    printf("\n>>> Movimento do Cavalo:\n");
    moverCavalo(movimento_vertical, movimento_horizontal);

    printf("\n");
    return 0;
}
