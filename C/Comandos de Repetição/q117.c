/*Escreva um programa que leia 10 números inteiros e, para cada número lido, calcule o
seu fatorial.*/

#include <stdio.h>
#include <string.h>
const int TOT_NUM = 10;

void main() {
    int k, num;

    for (k=1; k<=TOT_NUM; k++){
        int fatorial=1;

        printf("Informe um numero: ");
        scanf("%d", &num);

        for (int f=num; f > 0; f--){
            fatorial *= f;
        }

        printf("%d! = %d\n", num, fatorial);
    }

    getch();
}
