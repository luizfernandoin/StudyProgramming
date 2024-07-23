/*Escreva um programa que leia o termo inicial e a razão de uma progressão aritmética e
um número inteiro N e imprima todos os termos da progressão menores ou iguais a N
(caso a razão seja positiva) ou todos os termos maiores ou iguais a N (caso a razão seja
negativa).*/


#include <stdio.h>
#include <string.h>

void main() {
    int inicio, razao;
    int limite;

    printf("Informe o termo inicial e a razao: ");
    scanf("%d%d", &inicio, &razao);

    printf("Informe o limite da PA: ");
    scanf("%d", &limite);

    if (razao < 0){
        while (inicio >= limite) {
            printf("%d ", inicio);
            inicio += razao;
        }
    }else {
        while (inicio <= limite) {
            printf("%d ", inicio);
            inicio += razao;
        }
    }

    getch();
}
