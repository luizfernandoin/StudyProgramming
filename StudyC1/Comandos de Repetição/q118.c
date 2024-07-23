/*Escreva um programa que leia um número N e imprima os N primeiros números
primos positivos.*/

#include <stdio.h>
#include <string.h>

void main() {
    int k, num, totPrimos=0;
    int dividendo = 2;

    printf("Informe um numero: ");
    scanf("%d", &num);

    while (totPrimos != num) {
        int totDivisores = 0;
        for (k=1; k<=dividendo; k++){
            if (dividendo % k == 0){
                totDivisores++;
            }
        }
        if (totDivisores == 2){
            printf("%d ", dividendo);
            totPrimos++;
        }
        dividendo++;
    }

    getch();
}
