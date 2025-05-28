#include <stdio.h>

// Funções Recursivas para o Nível Mestre
void moverBispoRecursivo(int passos_restantes) {
    if (passos_restantes <= 0) {
        return;
    }
    printf("Cima Direita\n");
    moverBispoRecursivo(passos_restantes - 1);
}

void moverTorreRecursivo(int passos_restantes) {
    if (passos_restantes <= 0) {
        return;
    }
    printf("Direita\n");
    moverTorreRecursivo(passos_restantes - 1);
}

void moverRainhaRecursivo(int passos_restantes) {
    if (passos_restantes <= 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainhaRecursivo(passos_restantes - 1);
}

int main() {
    // Constantes para movimentação das peças
    const int MOV_BISPO_NOVATO = 5;
    const int MOV_TORRE_NOVATO = 5;
    const int MOV_RAINHA_NOVATO = 8;

    const int MOV_L_CAVALO_PRIMEIRO_SEGMENTO_AVENTUREIRO = 2; // Ex: 2 para baixo
    const int MOV_L_CAVALO_SEGUNDO_SEGMENTO_AVENTUREIRO = 1;  // Ex: 1 para a esquerda

    const int MOV_BISPO_MESTRE = 5;
    const int MOV_TORRE_MESTRE = 5;
    const int MOV_RAINHA_MESTRE = 8;
    const int MOV_L_CAVALO_PRIMEIRO_SEGMENTO_MESTRE = 2; // Ex: 2 para cima
    const int MOV_L_CAVALO_SEGUNDO_SEGMENTO_MESTRE = 1;  // Ex: 1 para a direita

    printf("--- Desafio de Xadrez - Nível Novato ---\n\n");

    // Movimentação do Bispo (Nível Novato - for)
    printf("Movimentação do Bispo (5 casas na diagonal superior direita):\n");
    for (int i = 0; i < MOV_BISPO_NOVATO; i++) {
        printf("Cima Direita\n");
    }
    printf("\n");

    // Movimentação da Torre (Nível Novato - while)
    printf("Movimentação da Torre (5 casas para a direita):\n");
    int contador_torre = 0;
    while (contador_torre < MOV_TORRE_NOVATO) {
        printf("Direita\n");
        contador_torre++;
    }
    printf("\n");

    // Movimentação da Rainha (Nível Novato - do-while)
    printf("Movimentação da Rainha (8 casas para a esquerda):\n");
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < MOV_RAINHA_NOVATO);
    printf("\n");

    printf("--- Desafio de Xadrez - Nível Aventureiro ---\n\n");

    // Movimentação do Cavalo (Nível Aventureiro - loops aninhados conceitualmente)
    printf("Movimentação do Cavalo (1 vez em L para baixo e para a esquerda):\n");
    for (int i = 0; i < MOV_L_CAVALO_PRIMEIRO_SEGMENTO_AVENTUREIRO; i++) {
        printf("Baixo\n");
    }
    int j = 0;
    while (j < MOV_L_CAVALO_SEGUNDO_SEGMENTO_AVENTUREIRO) {
        printf("Esquerda\n");
        j++;
    }
    printf("\n");

    printf("--- Desafio de Xadrez - Nível Mestre ---\n\n");

    // Movimentação do Bispo (Nível Mestre - funções recursivas)
    printf("Movimentação do Bispo (5 casas na diagonal superior direita - Recursivo):\n");
    moverBispoRecursivo(MOV_BISPO_MESTRE);
    printf("\n");

    // Movimentação da Torre (Nível Mestre - funções recursivas)
    printf("Movimentação da Torre (5 casas para a direita - Recursivo):\n");
    moverTorreRecursivo(MOV_TORRE_MESTRE);
    printf("\n");

    // Movimentação da Rainha (Nível Mestre - funções recursivas)
    printf("Movimentação da Rainha (8 casas para a esquerda - Recursivo):\n");
    moverRainhaRecursivo(MOV_RAINHA_MESTRE);
    printf("\n");

    // Movimentação do Cavalo (Nível Mestre - loops aninhados com múltiplas variáveis/condições, continue/break)
    printf("Movimentação do Cavalo (1 vez em L para cima à direita - Loops aninhados):\n");
    int x_mov = 0;
    int y_mov = 0;
    int total_movimentos_L = MOV_L_CAVALO_PRIMEIRO_SEGMENTO_MESTRE + MOV_L_CAVALO_SEGUNDO_SEGMENTO_MESTRE;

    for (int i = 0, k = 0; i < total_movimentos_L; i++) {
        if (i < MOV_L_CAVALO_PRIMEIRO_SEGMENTO_MESTRE) {
            printf("Cima\n");
            x_mov++;
            if (x_mov % 2 == 0) {
                continue;
            }
        } else {
            if (k < MOV_L_CAVALO_SEGUNDO_SEGMENTO_MESTRE) {
                printf("Direita\n");
                y_mov++;
                k++;
            } else {
                break;
            }
        }
    }
    printf("\n");

    printf("--- Fim do Desafio ---\n");

    return 0;
}
