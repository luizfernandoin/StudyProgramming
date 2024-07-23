/*
Escreva um programa que leia um vetor de 10 números inteiros e dois números
inteiros M e N entre 1 e 10 e inverta os elementos que ocupam as posições M e N do
vetor. O programa deve também imprimir o estado do vetor antes e após a inversão.
*/

#include <stdio.h>
const int QUANTIDADE = 10;

void main(){
    int vet[QUANTIDADE];
    for(int i=0; i<QUANTIDADE; i++){
        printf("%d numero: ", i+1);
        scanf("%d", &vet[i]);
    }

    printf("Antes: ");
    for(int i = 0; i<QUANTIDADE; i++){
        printf("%d ", vet[i]);
    }

    int numM, numN;
    printf("\nInforme os numeros M e N do intervalo [1 - 10]: ");
    scanf("%d%d", &numM, &numN);

    int controle = vet[numM-1];
    vet[numM-1] = vet[numN-1];
    vet[numN-1] = controle;

    printf("\nDepois: ");
    for(int i = 0; i<QUANTIDADE; i++){
        printf("%d ", vet[i]);
    }

    getch();
}
