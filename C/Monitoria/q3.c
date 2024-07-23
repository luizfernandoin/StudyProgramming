/*
Faça um programa que leia dois vetores de 10 elementos e crie um novo vetor
que seja a interseção dos vetores anteriores, ou seja, que contenha apenas os
números que aparecem em ambos os vetores. Imprima o vetor resultante na
tela.
*/

#include <stdio.h>

void imprimirVetor(int vetor[10]) {
    for (int i = 0; i < 10; i++) {
        printf("%d, ", vetor[i]);
    }
}


void main() {
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, B[10] = {5, 6, 7, 8, 9, 0}, C[10], tot = 0;

    for (int ia = 0; ia < 10; ia++) {
        for (int ib = 0; ib < 10; ib++){
            if (A[ia] == B[ib]) {
                C[tot] = A[ia];
                tot++;
            }
        }
    }

    imprimirVetor(C);
}