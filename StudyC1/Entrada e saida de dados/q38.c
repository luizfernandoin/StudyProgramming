/*Escreva um programa que leia um valor em segundos e converta para a forma X horas
Y minutos e Z segundos. Por exemplo, o valor 3670 equivale a 1 hora 1 minutos e 10
segundos.*/


#include <stdio.h>
#include <string.h>

void main() {
    int tTotal, resto;

    printf("Informe o valor em segundos: ");
    scanf("%d", &tTotal);

    int tHoras = tTotal / 3600;
    resto = tTotal % 3600;
    int tMinutos = resto / 60;
    resto = tMinutos % 60;
    int tSegundos = resto;

    printf("%d:%d:%d", tHoras, tMinutos, tSegundos);
}
