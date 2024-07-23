/*
Crie um tabuleiro de jogo da velha utilizando uma matriz de caracteres 3x3.
Seu programa deve exibir para o usuário o estado atual do tabuleiro no início
de cada jogada. Um usuário do seu programa deve, inicialmente, escolher o
número da linha e da coluna do tabuleiro onde deseja marcar sua jogada. Em
seguida, cada jogador pode entrar com as letras "x" ou "o" para marcar uma
jogada. Exiba, ao final do jogo (após 9 jogadas), qual dos jogadores foi o
vencedor.
*/

#include <stdio.h>

const int TAMANHO = 3;

void mostrarLinha() {
    for (int i = 0; i < (TAMANHO * 3) + 2; i++){
        printf("-");
    }
    printf("\n");
}


void mostrarTabuleiro(char tabuleiro[TAMANHO][TAMANHO]) {
    for (int row = 0; row < TAMANHO; row++) {
        for (int col = 0; col < TAMANHO; col++) {
            printf(" %c ", tabuleiro[row][col]);
            if (col < (TAMANHO - 1)) {
                printf("|");                
            }
        }
        printf("\n");
        if (row < (TAMANHO - 1)) {
            mostrarLinha();               
        }
    }
}

char verificarVencedor(char tabuleiro[TAMANHO][TAMANHO]) {
    // Verificar linhas
    for (int i = 0; i < TAMANHO; i++) {
        if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2] && tabuleiro[i][0] != ' ') {
            return tabuleiro[i][0];
        }
    }

    // Verificar colunas
    for (int j = 0; j < TAMANHO; j++) {
        if (tabuleiro[0][j] == tabuleiro[1][j] && tabuleiro[1][j] == tabuleiro[2][j] && tabuleiro[0][j] != ' ') {
            return tabuleiro[0][j];
        }
    }

    // Verificar diagonais
    if ((tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[0][0] != ' ') ||
        (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] != ' ')) {
        return tabuleiro[1][1];
    }

    // Se não houver vencedor
    return ' ';
}

void main() {
    char tabuleiro[3][3] = {
        {' ', ' ', ' '}, 
        {' ', ' ', ' '}, 
        {' ', ' ', ' '}
    };

    int row, col;
    char jogador = 'x';
    
    for (int jogada = 0; jogada < (TAMANHO * TAMANHO); jogada++){
        mostrarTabuleiro(tabuleiro);

        printf("\n%c, digite a linha e a coluna (1 a 3) separadas por espaço: ", jogador);
        scanf("%d %d", &row, &col);

        row -= 1;
        col -= 1;

        if (row >= 0 && row < TAMANHO && col >= 0 && col < TAMANHO &&
            tabuleiro[row][col] == ' ') {
            tabuleiro[row][col] = jogador;

            // Verificar se há um vencedor
            char vencedor = verificarVencedor(tabuleiro);
            if (vencedor != ' ') {
                printf("\nParabéns! O jogador %c venceu!\n", vencedor);
                mostrarTabuleiro(tabuleiro);
                break;
            }

            // Alternar entre os jogadores
            jogador = (jogador == 'x') ? 'o' : 'x';
        } else {
            printf("\nPosição inválida. Tente novamente.\n");
        }
    }
}