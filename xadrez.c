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

    // -------------------------------------------------------
    // Implementação de Movimentação do Cavalo
    // O Cavalo move-se em "L": 2 casas para baixo e 1 casa para a esquerda.
    // Loops aninhados: o loop externo (FOR) controla a etapa vertical (2 casas para baixo),
    // e o loop interno (WHILE) controla a etapa horizontal (1 casa para a esquerda).
    // O loop interno só executa na última iteração do externo, garantindo o formato em "L".
    // -------------------------------------------------------
    int casasCavaloVertical = 2;    // número de casas para baixo
    int casasCavaloHorizontal = 1;  // número de casas para a esquerda

    printf("\nCavalo:\n");
    for (int v = 1; v <= casasCavaloVertical; v++) {
        printf("Baixo\n");

        // Após concluir o movimento vertical, executa o deslocamento horizontal
        int h = 0;
        while (v == casasCavaloVertical && h < casasCavaloHorizontal) {
            printf("Esquerda\n");
            h++;
        }
    }

    return 0;
}
