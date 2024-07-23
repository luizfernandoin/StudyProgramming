/*
Escreva um programa que leia um vetor de 10 números inteiros e inverta todos os
elementos do vetor. O programa deve ser resolvido com a utilização de apenas um
vetor.
*/

#include <stdio.h>
const int TAMANHO = 10;

void main(){
    int vet[TAMANHO];
    int controle;

    for(int i=0; i<TAMANHO; i++){
        printf("%d numero: ", i+1);
        scanf("%d", &vet[i]);
    }

    for(int i = 0; i<TAMANHO; i++){
        printf("%d ", vet[i]);
    }


    for(int k=0; k<TAMANHO/2; k++){
        controle = vet[k];
        int final = (TAMANHO - 1) - k;
        vet[k] = vet[final];
        vet[final] = controle;
    }

    printf("\n");
    for(int i = 0; i<TAMANHO; i++){
        printf("%d ", vet[i]);
    }

    getch();
}
