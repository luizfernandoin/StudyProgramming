/*Escreva um programa que leia um número inteiro positivo N e imprima a maior
quantidade possível de números inteiros positivos de forma que a soma de todos os
números impressos seja menor ou igual a N.*/

#include <stdio.h>
#include <string.h>

void main() {
    int num=1, soma=0;
    int limite;

    printf("Informe um numero: ");
    scanf("%d", &limite);

    while (soma < limite) {
        printf("%d ", num);
        num++;
        soma += num;
    }

    getch();
}
