#include <stdio.h>


int main() {

    // Variáveis com os números constantes de movimentos de cada peça
    int movimentos_torre = 5;
    int movimentos_rainha = 8;
    int movimentos_bispo = 5;
    int movimento_baixo_cavalo = 2;
    int movimento_esquerda_cavalo = 1;

    // Movimento da Torre 5 casas para a direita
    // Estrutura: for
    printf(">>> Movimento da Torre:\n");
    for (int i = 0; i < movimentos_torre; i++) {
        printf("Direita %d\n", i + 1);
    }

    // Movimento da Rainha 8 casas para a esquerda
    // Estrutura: while
    printf("\n>>> Movimento da Rainha:\n");
    int j = 0;
    while (j < movimentos_rainha) {
        printf("Esquerda %d\n", j + 1);
        j++;
    }

    // Movimento do Bispo 5 casas na diagonal superior direita
    // Estrutura: do-while
    printf("\n>>> Movimento do Bispo:\n");
    int k = 0;
    do {
        printf("Cima %d\n", k + 1);
        printf("Direita %d\n", k + 1);
        k++;
    } while (k < movimentos_bispo);

    // Movimento do Cavalo 2 casas para baixo e 1 casa para a esquerda
    // Estrutura: for + while
    printf("\n>>> Movimento do Cavalo:\n");
    int l = 0;
    while (l < movimento_esquerda_cavalo) {
        for (int m = 0; m < movimento_baixo_cavalo; m++) {
            printf("Baixo %d\n", m + 1);
        }
        printf("Esquerda %d\n", l + 1);
        l++;
    }

    printf("\n");

    return 0;
}
