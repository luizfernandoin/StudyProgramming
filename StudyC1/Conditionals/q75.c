/*Escreva um programa que leia os valores dos tr�s �ngulos internos de um tri�ngulo e
verifique se o mesmo � um tri�ngulo ret�ngulo.*/

#include <stdio.h>

void main() {
    float ang1, ang2, ang3;

    printf("Informe o primeiro angulo: ");
    scanf("%d", &ang1);
    printf("Informe o segundo angulo: ");
    scanf("%d", &ang2);
    printf("Informe o terceiro angulo: ");
    scanf("%d", &ang3);

    float somaAngulos = ang1 + ang2 + ang3;

    if (somaAngulos == 180 && ang1 != 0 && ang2 != 0 && ang3 != 0) {
        if (ang1 == 90 || ang2 == 90 || ang3 == 90) {
            printf("O triangulo eh retangulo!");
            printf("Angulos: %.0f, %.0f e %.0f.", ang1, ang2, ang3);
        }
    }else {
        if (somaAngulos != 180) {
            printf("N�o eh triangulo!");
        }else {
            printf("O triangulo nao eh retangulo!");
        }
    }

    getch();
}
