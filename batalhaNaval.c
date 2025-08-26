#include <stdio.h>

#define linhas 10
#define colunas 10


int main() {
    
    char coluna [10] = {'A','B','C','D','E','F','G','H','I','J'};
    int linha [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tabuleiro[linhas][colunas];
    
    printf("TABULEIRO BATALHA NAVAL\n");
    printf("------------------------------------------\n");
    printf("    "); 
    
    for(int c = 0; c <= 9; c++){
            printf(" %c ", coluna[c]);}
            printf("\n");
            //imprime as letras acima da matriz
            
        for(int l = 0; l < linhas; l++){
            printf(" %2d ", linha[l]);//imprime o numero ao lado de cada linha 
            
            for(int c = 0; c < colunas; c++){ 
                if((l == 0) && ((c > 1) &&(c <= 4)))
                {
                    tabuleiro[l][c] = 3; 
                    printf(" %d ", tabuleiro[l][c]);

                }
                
                else if(((l > 4) && (l <=7) && (c == 9)))
                {
                    tabuleiro[l][c] = 3; 
                    printf(" %d ", tabuleiro[l][c]);

                }
                
                else if((l == c) && ((l > 0)&&(l < 4)))
                {
                    tabuleiro[l][c] = 3; 
                    printf(" %d ", tabuleiro[l][c]); 

                }
                
                else if((l + c == 9) && ((l > 3) && (l <= 6))) 
                {
                    tabuleiro[l][c] = 3; 
                    printf(" %d ", tabuleiro[l][c]);                        
                }
                
                else if((l + c == 12) && ((l > 6) && (l <= 9))){
                    tabuleiro[l][c] = 3; 
                    printf(" %d ", tabuleiro[l][c]);   
                    
                }
                
                else{
                    tabuleiro[l][c] = 0;
                    printf(" %d ", tabuleiro[l][c]);
                }
            }
            printf("\n");
        }


    return 0;
}
