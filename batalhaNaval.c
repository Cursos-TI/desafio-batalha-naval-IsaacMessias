#include <stdio.h>
#include <stdlib.h> // para abs()

#define LINHAS 10
#define COLUNAS 10

/*
    TABULEIRO:
    0 = água
    1 = navio

    EFEITO:
    0 = não afetado
    1 = afetado pela habilidade

    SAÍDA:
    ~ = água
    # = navio
    * = área de efeito
    X = navio atingido
*/

// ---------- Inicialização ----------
void inicializarMatriz(int m[LINHAS][COLUNAS]) {
    for (int l = 0; l < LINHAS; l++) {
        for (int c = 0; c < COLUNAS; c++) {
            m[l][c] = 0;
        }
    }
}

// ---------- Habilidades ----------

// Cruz: afeta linha e coluna da origem
void aplicarCruz(int efeito[LINHAS][COLUNAS], int origemL, int origemC) {
    for (int l = 0; l < LINHAS; l++) {
        for (int c = 0; c < COLUNAS; c++) {
            if (l == origemL || c == origemC) {
                efeito[l][c] = 1;
            }
        }
    }
}

// Cone: afeta células em diagonal para baixo-direita a partir da origem
void aplicarCone(int efeito[LINHAS][COLUNAS], int origemL, int origemC, int alcance) {
    for (int i = 0; i <= alcance; i++) {
        int l = origemL + i;
        int c = origemC + i;
        if (l >= 0 && l < LINHAS && c >= 0 && c < COLUNAS) {
            efeito[l][c] = 1;
        }
    }
}

// Octaedro: forma de losango, raio em "distância Manhattan"
void aplicarOctaedro(int efeito[LINHAS][COLUNAS], int origemL, int origemC, int raio) {
    for (int l = 0; l < LINHAS; l++) {
        for (int c = 0; c < COLUNAS; c++) {
            if (abs(l - origemL) + abs(c - origemC) <= raio) {
                efeito[l][c] = 1;
            }
        }
    }
}

// ---------- Exibição ----------
void exibirTabuleiro(int tab[LINHAS][COLUNAS], int efeito[LINHAS][COLUNAS]) {
    // Cabeçalho com letras
    printf("    ");
    for (int c = 0; c < COLUNAS; c++) {
        printf(" %c ", 'A' + c);
    }
    printf("\n");

    // Corpo do tabuleiro
    for (int l = 0; l < LINHAS; l++) {
        printf(" %2d ", l + 1);
        for (int c = 0; c < COLUNAS; c++) {
            if (tab[l][c] == 1 && efeito[l][c] == 1) {
                printf(" X "); // navio atingido
            } else if (tab[l][c] == 1) {
                printf(" # "); // navio
            } else if (efeito[l][c] == 1) {
                printf(" * "); // área de efeito
            } else {
                printf(" ~ "); // água
            }
        }
        printf("\n");
    }
}

// ---------- Programa Principal ----------
int main() {
    int tabuleiro[LINHAS][COLUNAS];
    int efeito[LINHAS][COLUNAS];

    inicializarMatriz(tabuleiro);
    inicializarMatriz(efeito);

    // Colocar alguns navios fixos (exemplo)
    tabuleiro[0][2] = 1;
    tabuleiro[0][3] = 1;
    tabuleiro[5][9] = 1;
    tabuleiro[7][7] = 1;
    tabuleiro[9][0] = 1;

    // Aplicar habilidades
    aplicarCruz(efeito, 4, 4);          // Cruz com origem em (4,4)
    aplicarCone(efeito, 2, 2, 5);       // Cone partindo de (2,2), alcance 5
    aplicarOctaedro(efeito, 7, 7, 2);   // Octaedro com raio 2, origem (7,7)

    // Mostrar resultado
    printf("TABULEIRO BATALHA NAVAL\n");
    printf("------------------------------------------\n");
    exibirTabuleiro(tabuleiro, efeito);

    return 0;
}