/*
Escreva um programa que leia dois números inteiros M e N e calcule os N primeiros
números primos maiores ou iguais a M
*/


#include <stdio.h>
#include <string.h>

void main() {
    int numM, numN;
    int tot = 0;
    printf("Informe dois numeros inteiros [M, N]: ");
    scanf("%d%d", &numM, &numN);

    while (tot < numN){
        int divisores = 0;
        for (int k = 1; k <= numM; k++){
            if (numM % k == 0){
                divisores += 1;
            }
        }
        if (divisores == 2){
            printf("%d ", numM);
            tot += 1;
        }
        numM++;
    }
}
