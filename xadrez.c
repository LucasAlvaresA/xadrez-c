#include <stdio.h>

int main() {

    // =========================
    // Definição das quantidades de casas
    // =========================
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // =========================
    // MOVIMENTO DA TORRE (for)
    // A torre vai se mover 5 casas para a direita
    // =========================
    printf("Movimento da Torre:\n");

    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // =========================
    // MOVIMENTO DO BISPO (while)
    // O bispo vai se mover 5 casas na diagonal (Cima, Direita)
    // =========================
    printf("\nMovimento do Bispo:\n");

    int contadorBispo = 0;
    while (contadorBispo < casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    // =========================
    // MOVIMENTO DA RAINHA (do-while)
    // A rainha vai se mover 8 casas para a esquerda
    // =========================
    printf("\nMovimento da Rainha:\n");

    int contadorRainha = 0;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    return 0;
}
