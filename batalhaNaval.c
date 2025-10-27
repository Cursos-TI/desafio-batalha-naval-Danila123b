#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios

    int tabuleiro [10][10];
    int navioHorizontal [3]= {3, 3, 3};
    int navioVertical [3]= {3, 3,3};
    int navioDiagonal1 [3]= {3, 3, 3};
    int navioDiagonal2 [3]= {3, 3, 3};


    //tabuleiro
    for (int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10;j++){
            tabuleiro[i][j] = 0;
        }
    }
    // Navio horizontal
    int linhaH = 2;
    int colunaH = 4;

    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
    }
    //Navio vertical
    int linhaV =5;
    int colunaV =7;

    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linhaV + i][colunaV] = navioVertical[i];
    }
    // Navil Diagonal 1
    int linhadiagonal1 = 1;
    int colunadiagonal1 = 1;
    for (int i = 0; i < 3; i++)
    {
         if (linhadiagonal1 + i < 10 && colunadiagonal1 + i < 10) {
            tabuleiro[linhadiagonal1 + i][colunadiagonal1 + i] = navioDiagonal1[i];
    }
    }
    //Navil Diagonal 2
    int linhadiagonal2 = 1;
    int colunadiagonal2 = 8;
    for (int i = 0; i < 3; i++)
    {
       if (linhadiagonal2 + i < 10 && colunadiagonal2 - i >= 0) {
            tabuleiro[linhadiagonal2 + i][colunadiagonal2 - i] = navioDiagonal2[i];
    }
    }
    
    //exibição do tabuleiro
    printf("Tabuleiro batalha naval\n\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    //Habilidades especias

    int cone [5][5];
    int cruz [5][5];
    int octaedro[5][5];

    //Habilidade do cone 
     for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j >= 2 - i && j <= 2 + i)
                cone[i][j] = 1;
            else
                cone[i][j] = 0;
        }
    }
    // Habilidade da cruz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 2 || j == 2)
                cruz[i][j] = 1;
            else
                cruz[i][j] = 0;
        }
    }
    //Habilidade octaedro
     for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (abs(i - 2) + abs(j - 2) <= 2)
                octaedro[i][j] = 1;
            else
                octaedro[i][j] = 0;
        }
    }
    //Definir pontos no tabuleiro
    int origemConeLinha = 1, origemConeColuna = 4;
    int origemCruzLinha = 6, origemCruzColuna = 2;
    int origemOctaLinha = 7, origemOctaColuna = 7;

    //Cone
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int linha = origemConeLinha + i - 2;
            int coluna = origemConeColuna + j - 2;

            if (linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10) {
                if (cone[i][j] == 1 && tabuleiro[linha][coluna] == 0)
                    tabuleiro[linha][coluna] = 5;
            }
        }
    }
    //Cruz
     for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int linha = origemCruzLinha + i - 2;
            int coluna = origemCruzColuna + j - 2;

            if (linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10) {
                if (cruz[i][j] == 1 && tabuleiro[linha][coluna] == 0)
                    tabuleiro[linha][coluna] = 5;
            }
        }
    }
    //Octaedro
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int linha = origemOctaLinha + i - 2;
            int coluna = origemOctaColuna + j - 2;

            if (linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10) {
                if (octaedro[i][j] == 1 && tabuleiro[linha][coluna] == 0)
                    tabuleiro[linha][coluna] = 5;
            }
        }
    }
    //Exibir tabuleiro com habilidades
    printf("\nTabuleiro Com Habilidades Especiais\n\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
