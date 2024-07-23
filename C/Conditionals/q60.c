/*Escreva um programa que leia o n�mero de pessoas que v�o participar de um
churrasco e calcule quantos quilos de carne devem ser comprados. Para isso,
considere que cada pessoa consome 250 g de carne.*/

#include <stdio.h>

void main() {
    int num;

    printf("Numeros de pessoas: ");
    scanf("%d", &num);

    int kgCarne = (num * 250) / 1000;
    int gCarne = (num * 250) % 1000;

    printf("Total de carne: %dkg e %dg", kgCarne, gCarne);
    getch();
}
