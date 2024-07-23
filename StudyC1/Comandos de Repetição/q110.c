/*Escreva um programa que leia um número natural N e calcule o seu fatorial.*/

#include <stdio.h>
#include <stdlib.h>


void main() {
    int numN, fatorial=1;

    printf("Informe um numero: ");
    scanf("%d", &numN);

    for (int k=numN; k > 0; k--){
        fatorial *= k;
    }

    printf("%d! = %d", numN, fatorial);

    getch();
}
