/*Escreva um programa que leia um número inteiro positivo N e imprima os N
primeiros números ímpares positivos.*/

#include <stdio.h>
#include <stdlib.h>

void main() {
    int tot, num;

    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &num);

    for (tot = 0; tot <= num; tot++) {
        printf("%d\n", 2 * tot + 1);
    }
    getch();
}
