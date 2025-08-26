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

    printf("------------------------------------------\n");
    printf("    "); 
        for(int c = 0; c <= 9; c++){
            printf(" %c ", coluna[c]);//imprime as letras acima da matriz
        }
        printf("\n");  
        for (int i = 0;  i <= 9 ; i++)
        {   printf(" %2d ", linha[i]);//imprime o numero ao lado de cada linha 

            for(int j = 0; j <= 9 ; j++){ //"i" são as linha e "j" são as colunas
                printf(" %d ", tabuleiro[i][j]); //aqui, imprime o valor de cada indice, linha a linha,
        }
        printf("\n");  

        }
        printf("\n");

    return 0;
}
