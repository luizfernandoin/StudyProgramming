/*
Escreva um programa que leia dez números inteiros e, após finalizar a leitura, leia um
número inteiro N (entre 1 e 10) e imprima qual foi o enésimo número digitado pelo
usuário. 
*/


#include <stdio.h>
const int QUANTIDADE = 10;
void main(){
    int vet[QUANTIDADE];
    for(int i = 0; i < QUANTIDADE; i++){
        printf("%d numero: ", i+1);
        scanf("%d", &vet[i]);

    }
    int num;
    printf("Informe um numero: ");
    scanf("%d", &num);
    printf("Voce digitou o numero %d!", vet[num-1]);
}
