/*
Escreva um programa que leia um número inteiro entre 0 e 255 e calcule o seu valor
correspondente em binário.
*/

#include <stdio.h>
const int TAMANHO = 32;

void main(){
    int vet[TAMANHO];
    int num, tot=0;

    printf("Informe um numero [0, 255]: ");
    scanf("%d", &num);

    while(num > 0){
        vet[tot] = num % 2;
        num /= 2;
        tot++;
    }

    printf("\n");
    for(int k=tot-1; k>=0; k--){
        printf("%d ", vet[k]);
    }

    getch();
}