/*Escreva um programa que leia um número inteiro N e verifique se ele é um número
perfeito. Um número é perfeito quando ele é igual à soma de todos os seus divisores
exatos exceto ele mesmo. Por exemplo, o número 6 (1+2+3) é um número perfeito.*/

#include <stdio.h>
#include <stdlib.h>

void main() {
    int num, soma = 0;

    printf("Informe o numero: ");
    scanf("%d", &num);

    for (int tot = 1; tot <= num - 1; tot++) {
        if (num % tot == 0) {
            soma = soma + tot;
        }
    }

    if (num == soma) {
        printf("O numero %d eh perfeito!", num);
    }
    else {
        printf("O numero %d nao eh perfeito!", num);
    }

    getch();
}
