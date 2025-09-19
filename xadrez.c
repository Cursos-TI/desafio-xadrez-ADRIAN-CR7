#include <stdio.h>

// -------------------
// TORRE
// -------------------
void torre(int casas) {
    if(casas == 0) return;       // caso base
    printf("cima ");
    torre(casas - 1);            // recursão
}

// -------------------
// BISPO
// -------------------
void bispo(int casas) {
    if(casas == 0) return;       // caso base
    printf("cima direita ");
    bispo(casas - 1);            // recursão
}

// -------------------
// RAINHA
// -------------------
void rainha(int casas) {
    if(casas == 0) return;       // caso base
    printf("cima ");
    rainha(casas - 1);           // recursão
}

void rainhaBispo(int casas) {
    if(casas == 0) return;       // caso base
    printf("cima direita ");
    rainhaBispo(casas - 1);      // recursão
}

// -------------------
// CAVALO
// -------------------
void cavalo() {
    int movimentos = 2;
    int i, j;
    printf("Cavalo foi: ");
    for(i = 0; i < movimentos; i++) {
        for(j = 0; j < 1; j++) {  // loop aninhado
            printf("cima cima direita ");
        }
    }
    printf("\n");
}

int main() {
    printf("=== TORRE ===\nTorre foi: ");
    torre(5);
    printf("\n\n");

    printf("=== BISPO ===\nBispo foi: ");
    bispo(5);
    printf("\n\n");

    cavalo();
    printf("\n");

    printf("=== RAINHA ===\nRainha tipo torre: ");
    rainha(5);
    printf("\nRainha tipo bispo: ");
    rainhaBispo(5);
    printf("\n\n");

    printf("=== Fim do programa ===\n");
    return 0;
}
