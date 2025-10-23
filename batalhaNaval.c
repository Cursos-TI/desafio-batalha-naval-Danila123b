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
    
    //Fim do nivel aventureiro

    

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
