#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Programa completo com os três níveis de desafio:
//   Novato     — loops simples (for, while, do-while)
//   Aventureiro — loops aninhados para o Cavalo
//   Mestre     — funções recursivas (Torre, Bispo, Rainha) e loops complexos (Cavalo)

// =======================================================
// NÍVEL MESTRE — Funções Recursivas
// =======================================================

// Recursão da Torre: imprime "Direita" e decrementa o contador a cada chamada.
// Caso base: casasRestantes == 0 encerra a recursão.
void moverTorre(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// Recursão do Bispo: imprime "Cima" e "Direita" (diagonal) a cada chamada.
// Caso base: casasRestantes == 0 encerra a recursão.
void moverBispo(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispo(casasRestantes - 1);
}

// Recursão da Rainha: imprime "Esquerda" e decrementa o contador a cada chamada.
// Caso base: casasRestantes == 0 encerra a recursão.
void moverRainha(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// =======================================================
// FUNÇÃO PRINCIPAL
// =======================================================
int main() {
    // Número de casas que cada peça irá se mover (definidos diretamente no código)
    int casasTorre = 5;             // Torre:  5 casas para a direita
    int casasBispo = 5;             // Bispo:  5 casas na diagonal (cima e direita)
    int casasRainha = 8;            // Rainha: 8 casas para a esquerda
    int casasCavaloVertical = 2;    // Cavalo: 2 casas para cima
    int casasCavaloHorizontal = 1;  // Cavalo: 1 casa para a direita

    // -------------------------------------------------------
    // Torre — Função Recursiva (Nível Mestre)
    // moverTorre() chama a si mesma reduzindo o contador até 0,
    // imprimindo "Direita" a cada chamada.
    // -------------------------------------------------------
    printf("Torre:\n");
    moverTorre(casasTorre);

    // -------------------------------------------------------
    // Bispo — Função Recursiva + Loops Aninhados (Nível Mestre)
    //
    // 1) Recursão: moverBispo() imprime "Cima" e "Direita" por chamada,
    //    reduzindo o contador até 0.
    //
    // 2) Loops aninhados: o loop externo (FOR) itera os passos verticais;
    //    o loop interno (FOR) itera os passos horizontais correspondentes.
    //    Como a diagonal é 1:1, o interno executa exatamente 1 vez por
    //    iteração do externo, produzindo a mesma saída da recursão.
    // -------------------------------------------------------
    printf("\nBispo (recursao):\n");
    moverBispo(casasBispo);

    printf("\nBispo (loops aninhados):\n");
    // Loop externo: controla o deslocamento vertical (Cima)
    for (int vertical = 0; vertical < casasBispo; vertical++) {
        printf("Cima\n");
        // Loop interno: controla o deslocamento horizontal (Direita) para cada passo vertical
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Direita\n");
        }
    }

    // -------------------------------------------------------
    // Rainha — Função Recursiva (Nível Mestre)
    // moverRainha() chama a si mesma reduzindo o contador até 0,
    // imprimindo "Esquerda" a cada chamada.
    // -------------------------------------------------------
    printf("\nRainha:\n");
    moverRainha(casasRainha);

    // -------------------------------------------------------
    // Cavalo — Loops Aninhados Complexos (Nível Aventureiro + Mestre)
    // Movimento em "L": 2 casas para cima, depois 1 para a direita.
    //
    // Loop externo (FOR) com duas variáveis de inicialização (v e h):
    //   - 'v' conta os passos verticais executados
    //   - 'h' conta os passos horizontais executados
    //   - a condição do for é intencionalmente vazia (loop infinito controlado)
    //
    // Fluxo de controle:
    //   - 'continue' retorna ao inicio do loop externo (executando v++) enquanto
    //     ainda há passos verticais a percorrer.
    //   - loop interno (FOR) executa o deslocamento horizontal após o vertical.
    //   - 'break' encerra o loop externo quando o movimento em L está completo.
    // -------------------------------------------------------
    printf("\nCavalo:\n");
    for (int v = 0, h = 0; ; v++) {
        // Fase vertical: enquanto houver casas para subir, imprime "Cima"
        if (v < casasCavaloVertical) {
            for (int passo = 0; passo < 1; passo++) {
                printf("Cima\n");
            }
            continue; // retorna ao loop externo para o próximo passo vertical
        }

        // Fase horizontal: após concluir o vertical, executa o deslocamento lateral
        for ( ; h < casasCavaloHorizontal; h++) {
            printf("Direita\n");
        }

        break; // movimento em L completo — encerra o loop externo
    }

    return 0;
}
