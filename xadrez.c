#include <stdio.h>

// Função recursiva com loop aninhado para imprimir movimento
void moverRecursivo(const char *movimento, int casas) {
    if(casas == 0) return; // caso base

    // Loop aninhado: apenas 1 repetição por passo, mas mostra a ideia de aninhamento
    for(int j=0; j<1; j++) {
        printf("%s ", movimento);
    }

    moverRecursivo(movimento, casas - 1); // chamada recursiva
}

// Função para a torre
void torre() {
    printf("=== TORRE ===\n");
    moverRecursivo("cima", 5);
    printf("\n\n");
}

// Função para o bispo
void bispo() {
    printf("=== BISPO ===\n");
    moverRecursivo("cima direita", 5);
    printf("\n\n");
}

// Função para o cavalo
void cavalo() {
    printf("=== CAVALO ===\n");
    moverRecursivo("cima cima direita", 1); // 1 movimento apenas
    printf("\n\n");
}

// Função para a rainha
void rainha() {
    printf("=== RAINHA ===\n");
    // Movimento tipo torre
    moverRecursivo("cima", 5);
    printf("\n");
    // Movimento tipo bispo
    moverRecursivo("cima direita", 5);
    printf("\n\n");
}

int main() {
    torre();
    bispo();
    cavalo();
    rainha();

    printf("=== Fim do programa ===\n");
    return 0;
}
