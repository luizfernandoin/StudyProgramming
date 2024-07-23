/* Escreva um programa que leia dois números inteiros M e N e calcule a média
aritmética dos números primos do intervalo [M, N].*/

#include <stdio.h>
#include <stdlib.h>

void main() {
    int numM, numN, totDivisores=0, totPrimos=0, somaPrimos=0;

    printf("Informe os numero M e N: ");
    scanf("%d%d", &numM, &numN);

    for (numM; numM <= numN; numM++){
        for (int divisor = 2; divisor < numM; divisor++){
            if (numM % divisor == 0){
                totDivisores++;
            }
        }
        if (totDivisores == 0 && numM != 1){
            totPrimos += 1;
            somaPrimos += numM;
        }

        totDivisores = 0;
    }
    float media = (float)somaPrimos / totPrimos;

    printf("A media aritmetica dos primos foi %.2f.", media);

    getch();
}
