/*Escreva um programa que leia dois n�meros e determine se o segundo n�mero �
menor, igual ou maior que o primeiro.*/

#include <stdio.h>

void main() {
    float num1, num2;

    printf("Primeiro numero: ");
    scanf("%f", &num1);
    printf("Segundo numero: ");
    scanf("%f", &num2);

    if (num2 > num1){
        printf("O numero %.2f eh maior que %.2f!", num2, num1);
    }else if (num2 < num1){
        printf("O numero %.2f eh menor que %.2f!", num2, num1);
    }else {
        printf("O numero %.2f eh igual a %.2f!", num2, num1);
    }
    getch();
}
