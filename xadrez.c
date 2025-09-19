int main() {
    int linha, linhaFinal, passos;
    char coluna, colunaFinal;
    int opcao;

    // -------------------
    // TORRE (while)
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

        printf("Continuar? (1 sim, 0 não): ");
        scanf("%d",&opcao);
        if(opcao==0) break;
    }

    // -------------------
    // BISPO (while)
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

        printf("Continuar? (1 sim, 0 não): ");
        scanf("%d",&opcao);
        if(opcao==0) break;
    }

    // -------------------
    // RAINHA (for infinito)
    // -------------------
    printf("\n=== RAINHA ===\n");
    printf("Digite a posição da rainha (ex: d1): ");
    scanf(" %c%d", &coluna, &linha);

    for(;;) {
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

        printf("Continuar? (1 sim, 0 não): ");
        scanf("%d",&opcao);
        if(opcao==0) break;
    }

    printf("\nFim do programa!\n");
    return 0;
}
