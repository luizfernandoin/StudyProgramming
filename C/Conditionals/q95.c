/*Escreva um programa que leia quatro n�meros reais e verifique se eles formam, na
ordem em que foram digitados, uma progress�o aritm�tica, uma progress�o
geom�trica, os dois tipos de progress�o ou nenhum tipo de progress�o.*/

#include <stdio.h>


void main() {
    float num1, num2, num3, num4;

    printf("Informe o primeiro numero: ");
    scanf("%f", &num1);
    printf("Informe o segundo numero: ");
    scanf("%f", &num2);
    printf("Informe o terceiro numero: ");
    scanf("%f", &num3);
    printf("Informe o quarto numero: ");
    scanf("%f", &num4);

    int pa = num2 - num1 == num3 - num2 && num3 - num2 == num4 - num3;
    int pg = num2 / num1 == num3 / num2 && num3 / num2 == num4 / num3;

    if (pa) {
        printf("A sequencia %.2f %.2f %.2f %.2f eh uma PA!", num1, num2, num3, num4);
    }else if (pg) {
        printf("A sequencia %.2f %.2f %.2f %.2f eh uma PG!", num1, num2, num3, num4);
    }else if (pa && pg) {
        printf("A sequencia %.2f %.2f %.2f %.2f eh uma PA e PG!", num1, num2, num3, num4);
    }else {
        printf("A sequencia %.2f %.2f %.2f %.2f nao eh uma PA nem PG!", num1, num2, num3, num4);
    }

    getch();
}
