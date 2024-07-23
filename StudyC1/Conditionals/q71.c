/*Escreva um programa que leia tr�s n�meros inteiros distintos e identifique o maior
n�mero lido.*/

#include <stdio.h>

void main() {
    int num1, num2, num3, maior;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);
    printf("Informe o terceiro numero: ");
    scanf("%d", &num3);

    if (num1 >= num2 && num1 >= num3) {
        maior = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        maior = num2;
    } else {
        maior = num3;
    }

    printf("O maior numero eh %d", maior);
    getch();
}
