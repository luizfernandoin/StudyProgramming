/*Escreva um programa que leia dois números inteiros M e N e um número inteiro X e
imprima todos os divisores exatos de X existentes no intervalo [M, N].*/

#include <stdio.h>
#include <stdlib.h>


void main() {
    int numM, numN, numX;

    printf("Informe os numero M, N e X: ");
    scanf("%d%d%d", &numM, &numN, &numX);

    for (numM; numM <= numN; numM++){
        if (numX % numM == 0){
            printf("%d ", numM);
        }
    }

    getch();
}
