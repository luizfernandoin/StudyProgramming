/*Escreva um programa que leia um número inteiro N e verifique se ele é um número
primo.*/

#include <stdio.h>
#include <stdlib.h>

void main() {
    int num, tot, totDivisiveis = 0;

    printf("Informe o numero: ");
    scanf("%d", &num);

    for (tot = 1; tot <= num; tot++) {
        if (num % tot == 0) {
            totDivisiveis += 1;
        }
    }

    if (totDivisiveis == 2) {
        printf("O numero %d eh primo!", num);
    }
    else {
        printf("O numero %d nao eh primo!", num);
    }

    getch();
}
