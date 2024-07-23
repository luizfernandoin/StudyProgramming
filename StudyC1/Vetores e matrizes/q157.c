/*
Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a
leitura, leia um número inteiro N e imprima todas as posições em que o número N
aparece dentro do vetor.
*/

#include <stdio.h>

const int QUANTIDADE = 10;
void main(){
    int vet[QUANTIDADE];
    for(int i = 0; i<QUANTIDADE; i++){
        printf("%d numero: ", i+1);
        scanf("%d", &vet[i]);
    }
    int num;
    printf("Informe um numero: ");
    scanf("%d", &num);
    for(int i=0; i<QUANTIDADE; i++){
        if(vet[i] == num){
            printf("%d ", i);
        }
    }
    getch();
}
