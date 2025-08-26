#include <stdio.h>



int main() {
    
    char coluna [10] = {'A','B','C','D','E','F','G','H','I','J'};
    int linha [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tabuleiro[10][10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };
    tabuleiro[3][3] = 3; //declarando o valor para cada posição
    tabuleiro[4][3] = 3; //mantendo o navio na coluna "D", indice "3"
    tabuleiro[5][3] = 3;

    tabuleiro[1][1] = 3; //declarando o valor para cada posição
    tabuleiro[1][2] = 3; //manteidno da linha "2", indice "1"
    tabuleiro[1][3] = 3;

    printf("TABULEIRO BATALHA NAVAL\n");
    printf("------------------------------------------\n");
    printf("   "); 
        for(int c = 0; c <= 9; c++){
            printf(" %c ", coluna[c]);
        }
        printf("\n");  
        for (int i = 0;  i <= 9 ; i++)
        {   printf("%2d ", linha[i]);

            for(int j = 0; j <= 9 ; j++){ //"i" são as linha e "j" são as colunas
                printf(" %d ", tabuleiro[i][j]); //aqui, imprime o valor de cada indice, linha a linha,
        }
        printf("\n");  

        }
        printf("\n");


    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
