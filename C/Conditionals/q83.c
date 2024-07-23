/*Escreva um programa que leia um n�mero inteiro entre 1 e 10 e imprima o n�mero
lido por extenso.*/

#include <stdio.h>
#include <math.h>

void main() {
    int num;

    printf("Informe um numero de 1 a 10: ");
    scanf("%d", &num);

    switch (num) {
    case 1:
        printf("Um");
        break;
    case 2:
        printf("Dois");
        break;
    case 3:
        printf("Tres");
        break;
    case 4:
        printf("Quatro");
        break;
    case 5:
        printf("Cinco");
        break;
    case 6:
        printf("Seis");
        break;
    case 7:
        printf("Sete");
        break;
    case 8:
        printf("Oito");
        break;
    case 9:
        printf("Nove");
        break;
    case 10:
        printf("Dez");
        break;
    }
    if (num < 0 || num > 10){
        printf("Numero invalido!");
    }

    getch();
}
