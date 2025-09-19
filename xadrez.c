#include <stdio.h>

int main() {
    int linha, linhaFinal;
    char coluna, colunaFinal;
    int opcao;

    // -------------------
    // TORRE
    // -------------------
    printf("=== TORRE ===\n");
    printf("Digite a posição da torre (ex: a1): ");
    scanf(" %c%d", &coluna, &linha);

    while(1) {
        printf("Digite o destino da torre: ");
        scanf(" %c%d", &colunaFinal, &linhaFinal);

        if(linhaFinal == linha) {
            if(colunaFinal > coluna) {
                printf("Torre foi ");
                for(char c=coluna; c<colunaFinal; c++) printf("direita ");
                printf("\n");
            }
            if(colunaFinal < coluna) {
                printf("Torre foi ");
                for(char c=coluna; c>colunaFinal; c--) printf("esquerda ");
                printf("\n");
            }
        }
        else if(colunaFinal == coluna) {
            if(linhaFinal > linha) {
                printf("Torre foi ");
                for(int l=linha; l<linhaFinal; l++) printf("cima ");
                printf("\n");
            }
            if(linhaFinal < linha) {
                printf("Torre foi ");
                for(int l=linha; l>linhaFinal; l--) printf("baixo ");
                printf("\n");
            }
        }
        else {
            printf("Movimento inválido da torre!\n");
        }

        linha = linhaFinal;
        coluna = colunaFinal;

        printf("Continuar torre? (1 sim, 0 não): ");
        scanf("%d",&opcao);
        if(opcao==0) break;
    }

    // -------------------
    // BISPO
    // -------------------
    printf("\n=== BISPO ===\n");
    printf("Digite a posição do bispo (ex: c1): ");
    scanf(" %c%d", &coluna, &linha);

    while(1) {
        printf("Digite o destino do bispo: ");
        scanf(" %c%d", &colunaFinal, &linhaFinal);

        int andaLinha = linhaFinal - linha;
        int andaColuna = colunaFinal - coluna;

        if(andaLinha > 0 && andaColuna > 0 && andaLinha == andaColuna) {
            printf("Bispo foi ");
            for(int i=0; i<andaLinha; i++) printf("cima direita ");
            printf("\n");
        }
        else if(andaLinha > 0 && andaColuna < 0 && andaLinha == -andaColuna) {
            printf("Bispo foi ");
            for(int i=0; i<andaLinha; i++) printf("cima esquerda ");
            printf("\n");
        }
        else if(andaLinha < 0 && andaColuna > 0 && -andaLinha == andaColuna) {
            printf("Bispo foi ");
            for(int i=0; i<-andaLinha; i++) printf("baixo direita ");
            printf("\n");
        }
        else if(andaLinha < 0 && andaColuna < 0 && andaLinha == andaColuna) {
            printf("Bispo foi ");
            for(int i=0; i<-andaLinha; i++) printf("baixo esquerda ");
            printf("\n");
        }
        else {
            printf("Movimento inválido do bispo!\n");
        }

        linha = linhaFinal;
        coluna = colunaFinal;

        printf("Continuar bispo? (1 sim, 0 não): ");
        scanf("%d",&opcao);
        if(opcao==0) break;
    }

    // -------------------
    // RAINHA
    // -------------------
    printf("\n=== RAINHA ===\n");
    printf("Digite a posição da rainha (ex: d1): ");
    scanf(" %c%d", &coluna, &linha);

    while(1) {
        printf("Digite o destino da rainha: ");
        scanf(" %c%d", &colunaFinal, &linhaFinal);

        int andaLinha = linhaFinal - linha;
        int andaColuna = colunaFinal - coluna;

        if(linhaFinal == linha) {
            printf("Rainha foi ");
            if(colunaFinal > coluna) for(char c=coluna; c<colunaFinal; c++) printf("direita ");
            if(colunaFinal < coluna) for(char c=coluna; c>colunaFinal; c--) printf("esquerda ");
            printf("\n");
        }
        else if(colunaFinal == coluna) {
            printf("Rainha foi ");
            if(linhaFinal > linha) for(int l=linha; l<linhaFinal; l++) printf("cima ");
            if(linhaFinal < linha) for(int l=linha; l>linhaFinal; l--) printf("baixo ");
            printf("\n");
        }
        else if(andaLinha > 0 && andaColuna > 0 && andaLinha == andaColuna) {
            printf("Rainha foi ");
            for(int i=0; i<andaLinha; i++) printf("cima direita ");
            printf("\n");
        }
        else if(andaLinha > 0 && andaColuna < 0 && andaLinha == -andaColuna) {
            printf("Rainha foi ");
            for(int i=0; i<andaLinha; i++) printf("cima esquerda ");
            printf("\n");
        }
        else if(andaLinha < 0 && andaColuna > 0 && -andaLinha == andaColuna) {
            printf("Rainha foi ");
            for(int i=0; i<-andaLinha; i++) printf("baixo direita ");
            printf("\n");
        }
        else if(andaLinha < 0 && andaColuna < 0 && andaLinha == andaColuna) {
            printf("Rainha foi ");
            for(int i=0; i<-andaLinha; i++) printf("baixo esquerda ");
            printf("\n");
        }
        else {
            printf("Movimento inválido da rainha!\n");
        }

        linha = linhaFinal;
        coluna = colunaFinal;

        printf("Continuar rainha? (1 sim, 0 não): ");
        scanf("%d",&opcao);
        if(opcao==0) break;
    }

    // -------------------
    // CAVALO
    // -------------------
    printf("\n=== CAVALO ===\n");
    printf("Digite a posição do cavalo (ex: b1): ");
    scanf(" %c%d", &coluna, &linha);

    while(1) {
        printf("Digite o destino do cavalo: ");
        scanf(" %c%d", &colunaFinal, &linhaFinal);

        int andaLinha = linhaFinal - linha;
        int andaColuna = colunaFinal - coluna;

        if(andaLinha == 2 && andaColuna == 1) {
            printf("Cavalo foi cima cima direita\n");
        }
        else if(andaLinha == 2 && andaColuna == -1) {
            printf("Cavalo foi cima cima esquerda\n");
        }
        else if(andaLinha == -2 && andaColuna == 1) {
            printf("Cavalo foi baixo baixo direita\n");
        }
        else if(andaLinha == -2 && andaColuna == -1) {
            printf("Cavalo foi baixo baixo esquerda\n");
        }
        else if(andaLinha == 1 && andaColuna == 2) {
            printf("Cavalo foi cima direita direita\n");
        }
        else if(andaLinha == -1 && andaColuna == 2) {
            printf("Cavalo foi baixo direita direita\n");
        }
        else if(andaLinha == 1 && andaColuna == -2) {
            printf("Cavalo foi cima esquerda esquerda\n");
        }
        else if(andaLinha == -1 && andaColuna == -2) {
            printf("Cavalo foi baixo esquerda esquerda\n");
        }
        else {
            printf("Movimento inválido do cavalo!\n");
        }

        linha = linhaFinal;
        coluna = colunaFinal;

        printf("Continuar cavalo? (1 sim, 0 não): ");
        scanf("%d",&opcao);
        if(opcao==0) break;
    }

    printf("\nFim do programa!\n");
    return 0;
}
