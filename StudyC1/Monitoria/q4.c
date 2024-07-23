/*
Crie um programa capaz de ler os dados de uma matriz quadrada de inteiros.
Ao final da leitura, o programa deverá imprimir o número da linha que contém
o menor dentre todos os números lidos.
*/

#include <stdio.h>

void main() {
    int matrix[3][3] = {
        {1, 2, 3,},
        {4, 5, 6},
        {7, 8, 9}
    };

    int menor;

    for (int l = 0; l < 3; l++) {
        int menorLinha;
        for (int c = 0; c < 3; c++) {
            int atual = matrix[l][c];
            if (c = 0 || atual < menorLinha) {
                menorLinha =  l;
            }
        }

        menor = menorLinha;
    }

    printf("O menor numero é ")
}