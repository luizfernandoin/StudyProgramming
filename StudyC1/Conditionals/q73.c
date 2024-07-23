/*Escreva um programa que leia tr�s n�meros inteiros distintos e identifique o maior e o
menor n�mero lido.*/

#include <stdio.h>

void main() {
    int num1, num2, num3, maior, menor;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);
    printf("Informe o terceiro numero: ");
    scanf("%d", &num3);

    if (num1 >= num2 && num1 >= num3) {
        maior = num1;
        if (num2 < num3) {
            menor = num2;
        }else {
            menor = num3;
        }
    } else if (num2 >= num1 && num2 >= num3) {
        maior = num2;
        if (num1 < num3) {
            menor = num1;
        }else {
            menor = num3;
        }
    } else {
        maior = num3;
        if (num1 < num2) {
            menor = num1;
        }else {
            menor = num2;
        }
    }

    printf("O maior numero eh %d e o menor eh %d", maior, menor);
    getch();
}
