/*Escreva um programa que leia um número positivo entre 1 e 9999 e calcule o valor da
unidade de milhar, da centena, da dezena e da unidade.*/


#include <stdio.h>
#include <string.h>

void main() {
    int numero;

    printf("Informe um numero positivo [1-9999]: ");
    scanf("%d", &numero);

    int uMilhar = numero / 1000;
    int centena = (numero - uMilhar * 1000) / 100;
    int dezena = (numero - (uMilhar * 1000 + centena * 100)) / 10;
    int unidade = (numero - (uMilhar * 1000 + centena * 100 + dezena * 10));

    printf("Unidade de Milhar: %d\n", uMilhar);
    printf("Centena: %d\n", centena);
    printf("Dezena: %d\n", dezena);
    printf("Unidade: %d\n", unidade);
}
