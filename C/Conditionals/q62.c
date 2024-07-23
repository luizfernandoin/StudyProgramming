/*Escreva um programa que leia dois n�meros inteiros M e N e verifique se N � m�ltiplo
de M.*/

#include <stdio.h>

void main() {
    int num1, num2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    if (num2 % num1 == 0) {
        printf("O numero %d � multiplo de %d", num2, num1);
    }
    else {
        printf("O numero %d n�o � multiplo de %d", num2, num1);
    }
    getch();
}
