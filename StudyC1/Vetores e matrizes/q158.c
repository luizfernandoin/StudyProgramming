/*
Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a
leitura, imprima todos os elementos do vetor que são maiores do que a média
aritmética de todos os elementos do vetor.
*/

#include <stdio.h>

const int QUANTIDADE = 10;
void main(){
    int vet[QUANTIDADE];
    int soma = 0;
    for(int i = 0; i<QUANTIDADE; i++){
        printf("%d numero: ", i+1);
        scanf("%d", &vet[i]);
        soma += vet[i];
    }

    int media = soma / QUANTIDADE;

    for(int i=0; i<QUANTIDADE; i++){
        if(vet[i] > media){
            printf("%d ", vet[i]);
        }
    }
    getch();
}
