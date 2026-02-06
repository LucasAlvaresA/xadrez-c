#include <stdio.h>

// ======================================================
// FUNÇÃO RECURSIVA DA TORRE
// Move para a direita N casas
// ======================================================
void moverTorre(int casas) {
    if (casas <= 0) {
        return; // Condição de parada
    }

    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

// ======================================================
// FUNÇÃO RECURSIVA DA RAINHA
// Move para a esquerda N casas
// ======================================================
void moverRainha(int casas) {
    if (casas <= 0) {
        return;
    }

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// ======================================================
// FUNÇÃO RECURSIVA + LOOPS ANINHADOS DO BISPO
// Diagonal: Cima + Direita
// Loop externo: vertical (Cima)
// Loop interno: horizontal (Direita)
// ======================================================
void moverBispo(int casas) {
    if (casas <= 0) {
        return;
    }

    // Loop vertical (externo)
    for (int v = 0; v < 1; v++) {
        printf("Cima\n");

        // Loop horizontal (interno)
        for (int h = 0; h < 1; h++) {
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1);
}

// ======================================================
// MOVIMENTO COMPLEXO DO CAVALO
// 2 casas para Cima e 1 para Direita em "L"
// Uso de loops aninhados + break e continue
// ======================================================
void moverCavalo() {

    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    for (int i = 0; i < movimentosVerticais; i++) {

        // Exemplo de controle com continue
        if (i < movimentosVerticais) {
            printf("Cima\n");
        } else {
            continue;
        }

        // Loop interno executa apenas na última subida
        for (int j = 0; j < movimentosHorizontais; j++) {

            // Só executa quando terminar as duas subidas
            if (i == movimentosVerticais - 1) {
                printf("Direita\n");
            } else {
                continue;
            }

            // Uso do break para sair após executar
            break;
        }
    }
}

// ======================================================
// FUNÇÃO PRINCIPAL
// ======================================================
int main() {

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    return 0;
}
