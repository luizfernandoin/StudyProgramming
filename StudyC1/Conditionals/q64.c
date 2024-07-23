/*Escreva um programa que leia um n�mero inteiro e verifique se ele � positivo,
negativo ou neutro.*/

#include <stdio.h>

void main() {
    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("O numero %d eh positivo.", num);
    } else if (num < 0) {
        printf("O numero %d eh negativo.", num);
    } else {
        printf("O numero %d eh neutro.", num);
    }
    getch();
}
