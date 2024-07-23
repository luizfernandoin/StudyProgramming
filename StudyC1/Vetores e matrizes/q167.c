/*
Escreva um programa que leia dois vetores A e B de 5 números inteiros e calcule um
terceiro vetor que contenha todos os elementos que estão presentes nos dois
vetores. O terceiro vetor não deverá armazenar valores repetidos.
*/

#include <stdio.h>

void bubbleSort(int vetor[], int tamanho) {

    /*
    vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
               0  1  2  3  4  5  6  7  8  9

    i = 0
    j = 0
    1 <
    */

    for(int i = 0; i < tamanho - 1; i++){
        for(int k = 0; k < tamanho - i - 1; k++){
            if(vetor[k] > vetor[k + 1]){
                int temp = vetor[k];
                vetor[k] = vetor[k + 1];
                vetor[k + 1] = temp;
            }
        }
    }
}

int main() {
    int vetor[20];
    int i;

    // Leitura dos valores
    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
    }

    // Ordenação do vetor
    bubbleSort(vetor, 20);

    // Impressão do vetor ordenado em ordem decrescente
    printf("Vetor ordenado em ordem decrescente:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}


