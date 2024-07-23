/*Escreva um programa que imprima todos os números inteiros entre 1 e 100 em ordem
descendente.*/

#include <stdio.h>
#include <stdlib.h>

void main() {
    for (int tot=100; tot > 0; tot--) {
        printf("%d ", tot);
    }

    getch();
}
