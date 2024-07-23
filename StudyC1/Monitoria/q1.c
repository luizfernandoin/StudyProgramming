// Crie 3 vetores de inteiros A, B e C com 3 posições cada. Depois, combine os
// vetores para formar uma matriz D de inteiros 3x3, onde cada coluna da matriz
// contém os elementos de um dos vetores. Ao final do programa, exiba a matriz
// obtida.
// Ex.:​ A primeira coluna de D contém todos os elementos do vetor A, a segunda,
// do vetor B, e assim por diante.

#include <stdio.h>

void main() {
    int A[3] = {1, 2, 3};
    int B[3] = {4, 5, 6};
    int C[3] = {7, 8, 9};

    int matrix[2][3];

    for (int l = 0; l < 3; l++){
        matrix[l][0] = A[l];
        matrix[l][1] = B[l];
        matrix[l][2] = C[l];
    }

    
    for (int l = 0; l < 3; l++) {
        for (int c = 0; c < 3; c ++){
            printf("%d ", matrix[l][c]);
        }
        printf("\n");
    }
}