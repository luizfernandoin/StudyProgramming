/*Escreva um programa que leia as coordenadas x e y de um ponto e verifique se este
ponto pertence � reta y = 2x +1.*/

#include <stdio.h>

void main() {
    float pontox, pontoy;

    printf("Informe a coordenada X: ");
    scanf("%f", &pontox);
    printf("Informe a coordenada Y: ");
    scanf("%f", &pontoy);

    float reta = 2 * pontox + 1;

    if (reta == pontoy) {
        printf("O ponto (%.1f, %.1f) pertence a reta!", pontox, pontoy);
    }else {
        printf("O ponto (%.1f, %.1f) nao pertence a reta!", pontox, pontoy);
    }

    getch();
}
