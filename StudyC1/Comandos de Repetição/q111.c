/*Escreva um programa que leia o termo inicial e a razão de uma PA e um número
inteiro positivo N e imprima os N primeiros termos da progressão.*/

#include <stdio.h>
#include <stdlib.h>


void main() {
    int numInicial, razao, tot;

    printf("Informe o termo inicial e a razão da PA: ");
    scanf("%d%d", &numInicial, &razao);
    printf("Informe o total de termos: ");
    scanf("%d", &tot);

    for (tot; tot > 0; tot--){
        printf("%d ", numInicial);
        numInicial += razao;
    }

    getch();
}
