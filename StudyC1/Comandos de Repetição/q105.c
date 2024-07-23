/*Escreva um programa que leia dois números inteiros M e N e calcule a soma de todos
os números do intervalo [M, N].*/

#include <stdio.h>
#include <stdlib.h>

void main() {
    int numM, numN, soma;

    printf("Informe os numeros [M e N] do intervalo: ");
    scanf("%d%d", &numM, &numN);

    for (int tot = numM; tot <= numN; tot++) {
        soma = soma + tot;
    }

    printf("A soma dos numeros de %d a %d foi %d!", numM, numN, soma);

    getch();
}
