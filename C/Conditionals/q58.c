/*Escreva um programa que leia um n�mero inteiro e verifique se ele � par ou �mpar.*/

#include <stdio.h>

void main() {
    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    if (num == 0){
        printf("O numero %d eh neutro!", num);
    }else {
        if (num % 2 == 0){
            printf("O numero %d eh par!", num);
        }else {
            printf("O numero %d eh impar!", num);
        }
    }
    getch();
}
