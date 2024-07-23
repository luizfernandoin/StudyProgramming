/*Escreva um programa que leia as coordenadas x e y de um ponto e verifique a
quantidade de quadrantes a que este ponto pertence.*/

#include <stdio.h>

void main() {
    float pontox, pontoy;

    printf("Informe a coordenada X: ");
    scanf("%f", &pontox);
    printf("Informe a coordenada Y: ");
    scanf("%f", &pontoy);

    if (pontox > 0 && pontoy > 0) {
        printf("O ponto (%.1f, %.1f) esta no primeiro quadrante!", pontox, pontoy);
    }else if (pontox < 0 && pontoy > 0) {
        printf("O ponto (%.1f, %.1f) esta no segundo quadrante!", pontox, pontoy);
    }else if (pontox < 0 && pontoy < 0) {
        printf("O ponto (%.1f, %.1f) esta no terceiro quadrante!", pontox, pontoy);
    }else if (pontox > 0 && pontoy < 0) {
        printf("O ponto (%.1f, %.1f) esta no quarto quadrante!", pontox, pontoy);
    }else {
        printf("O ponto (%.1f, %.1f) esta na origem!", pontox, pontoy);
    }
    getch();
}
