/*Escreva um programa que leia tr�s n�meros distintos e identifique o n�mero que n�o
� nem o menor e nem o maior n�mero.*/

#include <stdio.h>

void main() {
    int num1, num2, num3, intermediario;
    char possui = 'N';

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);
    printf("Informe o terceiro numero: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 < num3) {
        intermediario = num1;
        possui = 'S';
    } else if (num2 > num1 && num2 < num3) {
        intermediario = num2;
        possui = 'S';
    } else {
        intermediario = num3;
        printf("Os numeros nao possuem intermediario", intermediario);
    }

    if (possui == 'S') {
        printf("O numero intermediario eh %d", intermediario);
    }
    getch();
}
