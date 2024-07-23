/*
Escreva um programa que leia dez números inteiros e, após finalizar a leitura,
imprima todos os números lidos na ordem inversa em que eles foram digitados.
*/


#include <stdio.h>
const int QUANTIDADE = 10;
void main(){
    int vet[QUANTIDADE];
    for(int i = 0; i < QUANTIDADE; i++){
        printf("%d numero: ", i+1);
        scanf("%d", &vet[i]);

    }
    for(int i = QUANTIDADE-1; i >= 0; i--){
        printf("%d ", vet[i]);
    }
}
