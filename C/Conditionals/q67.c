/*Escreva um programa que leia o valor de um ano e verifique se ele � ou n�o bissexto.
Um ano � bissexto se ele for divis�vel por quatrocentos ou se se ele for divis�vel por 4
mas n�o for divis�vel por 100.*/

#include <stdio.h>

void main() {
    int ano;

    printf("Informe o ano: ");
    scanf("%d", &ano);

    if (ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0) {
        printf("O ano %d eh bissexto!", ano);
    }else {
        printf("O ano %d nao eh bissexto!", ano);
    }
    getch();
}
