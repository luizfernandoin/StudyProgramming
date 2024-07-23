/*Escreva um programa que leia os coeficientes a, b e c de uma equa��o do 2o grau e
calcule todas as suas ra�zes reais.*/

#include <stdio.h>
#include <math.h>

void main() {
    float a, b, c;

    printf("Coeficiente a: ");
    scanf("%f", &a);
    printf("Coeficiente b: ");
    scanf("%f", &b);
    printf("Coeficiente c: ");
    scanf("%f", &c);

    float delta = pow(b, 2) - 4 * a * c;

    if (delta >= 0) {
        float x1 = (-1 * b + sqrt(delta)) / 2 * a;
        float x2 = (-1 * b - sqrt(delta)) / 2 * a;
        if (delta == 0) {
            printf("Possui %.1f como raiz real!", x1);
        } else {
            printf("Possui %.1f e %.1f como raizes reais!", x1, x2);
        }
    }else {
        printf("Nao possui raizes reais!");
    }

    getch();
}
