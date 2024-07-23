/*
Escreva um programa que leia dois vetores A e B de 5 números inteiros e calcule um
terceiro vetor que contenha todos os elementos que estão presentes nos dois
vetores. O terceiro vetor não deverá armazenar valores repetidos.
*/

#include <stdio.h>
#include <conio.h>

const int TAMANHO = 5;

void main(){
    int vetA[TAMANHO];
    int vetB[TAMANHO];
    int tot = 0;
    //int vetC[5] = {1, 2, 3, 4, 5, 6, 7}

    for(int k=0; k<2; k++){
        printf("Vetor %d\n", k+1);
        for(int i=0; i<TAMANHO; i++){
            printf("Informe um numero: ");
            if(k == 0){
                scanf("%d", &vetA[i]);
            }
            else {
                scanf("%d", &vetB[i]);
            }
        }
        printf("\n");
    }

    for(int i=0; i<TAMANHO; i++){
        int igual = 0;
        for(int j=0; j<TAMANHO; j++){
            if(vetB[i] == vetA[j]){
                igual = 1;
            }
        }
        if(igual == 1){
            tot++;
        }
    }
    int vetC[tot];
    int indice = 0;

    for(int i=0; i<TAMANHO; i++){
        int igual = 0;
        for(int j=0; j<TAMANHO; j++){
            if(vetB[i] == vetA[j]){
                igual = 1;
            }
        }
        if(igual == 1){
            vetC[indice] = vetB[i];
            indice++;
        }
    }

    for(int k=0; k<tot; k++){
        printf("%d ", vetC[k]);
    }

    getch();
}
