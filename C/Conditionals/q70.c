/*Escreva um programa que leia os valores dos tr�s lados de um tri�ngulo e o classifique
como equil�tero, is�sceles ou escaleno.*/

#include <stdio.h>

void main() {
    float lado1, lado2, lado3;

    printf("Informe o primeiro lado: ");
    scanf("%f", &lado1);
    printf("Informe o segundo lado: ");
    scanf("%f", &lado2);
    printf("Informe o terceiro lado: ");
    scanf("%f", &lado3);

    if (lado1 == lado2 && lado2 == lado3) {
        printf("Triangulo equilatero!");
    }else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("Triangulo isosceles!");
    } else {
        printf("Triangulo escaleno!");
    }
    getch();
}
