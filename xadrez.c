#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Número de casas que cada peça irá se mover
    int casasTorre = 5;   // Torre: 5 casas para a direita
    int casasBispo = 5;   // Bispo: 5 casas na diagonal (cima e direita)
    int casasRainha = 8;  // Rainha: 8 casas para a esquerda

    // -------------------------------------------------------
    // Implementação de Movimentação da Torre
    // A Torre move-se em linha reta; aqui simulamos 5 casas para a direita.
    // Utiliza estrutura de repetição: FOR
    // -------------------------------------------------------
    printf("Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // -------------------------------------------------------
    // Implementação de Movimentação do Bispo
    // O Bispo move-se na diagonal; aqui simulamos 5 casas para cima e à direita.
    // A cada casa percorrida são impressas as duas direções que compõem a diagonal.
    // Utiliza estrutura de repetição: DO-WHILE
    // -------------------------------------------------------
    printf("\nBispo:\n");
    int i = 0;
    do {
        printf("Cima\n");
        printf("Direita\n");
        i++;
    } while (i < casasBispo);

    // -------------------------------------------------------
    // Implementação de Movimentação da Rainha
    // A Rainha move-se em qualquer direção; aqui simulamos 8 casas para a esquerda.
    // Utiliza estrutura de repetição: WHILE
    // -------------------------------------------------------
    printf("\nRainha:\n");
    int j = 0;
    while (j < casasRainha) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}
