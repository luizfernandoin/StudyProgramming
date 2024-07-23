/*Escreva um programa que leia dois números inteiros M e N e imprima todos os
números primos existentes no intervalo [M, N].*/

#include <stdio.h>
#include <stdlib.h>


void main() {
    int numM, numN, totDivisores;

    printf("Informe dois numeros: ");
    scanf("%d%d", &numM, &numN);

    for (numM; numM < numN; numM++){
        for (int divisor = 2; divisor < numM; divisor++){
            if (numM % divisor == 0){
                totDivisores++;
            }
        }
        if (totDivisores == 0 && numM > 1){
            printf("%d ", numM);
        }

        totDivisores = 0;
    }

    getch();
}
