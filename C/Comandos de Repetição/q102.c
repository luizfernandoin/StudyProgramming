/*Escreva um programa que leia um número inteiro N e imprima todos os seus
divisores exatos.*/

#include <stdio.h>
#include <stdlib.h>

void main() {
    int tot, num;

    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &num);

    printf("O numero %d é divisivel por: ", num);
    for (tot = 1; tot <= num; tot++) {
        if (num % tot == 0) {
            printf("%d ", tot);
        }
    }
    getch();
}
