/*Escreva um programa que leia os coeficientes a, b e c de uma equa��o do 2o grau e
verifique a quantidade de ra�zes reais da equa��o.*/

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

    if (delta > 0) {
        printf("Possui 2 raizes reais!");
    }else if (delta == 0){
        printf("Possui 1 raiz real!");
    }else {
        printf("Nao possui raizes reais!");
    }

    getch();
}
