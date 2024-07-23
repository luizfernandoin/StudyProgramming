/*Escreva um programa que leia individualmente os valores dos quatro dígitos de um
valor em binário e calcule o seu valor correspondente em decimal.*/

#include <stdio.h>
#include <math.h>

void main() {
    int v1, v2, v3, v4;
    printf("Digite os 4 digitos individualmente: ");
    scanf("%d%d%d%d", &v1, &v2, &v3, &v4);

    int conversao = v4 * pow(2, 0) + v3 * pow(2, 1) + v2 * pow(2, 2) + v1 * pow(2, 3);

    int binario = v1 * 1000 + v2 * 100 + v3 * 10 + v4;
    printf("O numero binario %d corresponde a %d em decimal!", binario, conversao);
    getch();
}
