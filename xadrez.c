#include <stdio.h>

int main() {
    int linha, linhaFinal;
    char coluna, colunaFinal;
    int opcao;

    // -------------------
    // TORRE (while)
    // -------------------
    printf("=== TORRE ===\n");
    printf("Digite a linha da torre (1-8): ");
    scanf("%d", &linha);
    printf("Digite a coluna da torre (a-h): ");
    scanf(" %c", &coluna);

    while(1) {
        printf("Torre está em %c%d\n", coluna, linha);

        printf("Digite linha destino da torre: ");
        scanf("%d", &linhaFinal);
        printf("Digite coluna destino da torre: ");
        scanf(" %c", &colunaFinal);

        // Limita movimentos da torre: só horizontal ou vertical
        if(linhaFinal == linha || colunaFinal == coluna) {
            linha = linhaFinal;
            coluna = colunaFinal;
            printf("Movimento válido! Torre agora em %c%d\n", coluna, linha);
        } else {
            printf("Movimento inválido! Torre só se move em linha ou coluna.\n");
            continue;
        }

        printf("Digite negativo para sair, positivo para continuar: ");
        scanf("%d", &opcao);
        if(opcao < 0) break;
    }

    // -------------------
    // BISPO (do-while)
    // -------------------
    printf("\n=== BISPO ===\n");
    printf("Digite a linha do bispo (1-8): ");
    scanf("%d", &linha);
    printf("Digite a coluna do bispo (a-h): ");
    scanf(" %c", &coluna);

    do {
        printf("Bispo está em %c%d\n", coluna, linha);

        printf("Digite linha destino do bispo: ");
        scanf("%d", &linhaFinal);
        printf("Digite coluna destino do bispo: ");
        scanf(" %c", &colunaFinal);

        int colunaNum = coluna - 'a';
        int colunaFinalNum = colunaFinal - 'a';

        // Limita movimentos do bispo: diagonal sem abs()
        if ((linhaFinal - linha) == (colunaFinalNum - colunaNum) ||
            (linhaFinal - linha) == (colunaNum - colunaFinalNum)) {
            linha = linhaFinal;
            coluna = colunaFinal;
            printf("Movimento válido! Bispo agora em %c%d\n", coluna, linha);
        } else {
            printf("Movimento inválido! Bispo só se move em diagonal.\n");
        }

        printf("Digite negativo para sair, positivo para continuar: ");
        scanf("%d", &opcao);

    } while(opcao >= 0);

    // -------------------
    // RAINHA (for)
    // -------------------
    printf("\n=== RAINHA ===\n");
    printf("Digite a linha da rainha (1-8): ");
    scanf("%d", &linha);
    printf("Digite a coluna da rainha (a-h): ");
    scanf(" %c", &coluna);

    for(;;) {
        printf("Rainha está em %c%d\n", coluna, linha);

        printf("Digite linha destino da rainha: ");
        scanf("%d", &linhaFinal);
        printf("Digite coluna destino da rainha: ");
        scanf(" %c", &colunaFinal);

        int colunaNum = coluna - 'a';
        int colunaFinalNum = colunaFinal - 'a';

        // Limita movimentos da rainha: linha, coluna ou diagonal sem abs()
        if (linhaFinal == linha || colunaFinal == coluna ||
            (linhaFinal - linha) == (colunaFinalNum - colunaNum) ||
            (linhaFinal - linha) == (colunaNum - colunaFinalNum)) {
            linha = linhaFinal;
            coluna = colunaFinal;
            printf("Movimento válido! Rainha agora em %c%d\n", coluna, linha);
        } else {
            printf("Movimento inválido! Rainha só se move em linha, coluna ou diagonal.\n");
            continue;
        }

        printf("Digite negativo para sair, positivo para continuar: ");
        scanf("%d", &opcao);
        if(opcao < 0) break;
    }

    printf("Fim do programa!\n");
    return 0;
}
