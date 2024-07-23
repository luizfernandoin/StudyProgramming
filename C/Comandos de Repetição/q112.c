/*Escreva um programa que leia um número inteiro N e imprima o enésimo termo da
série de Fibonacci. (1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...).*/

#include <stdio.h>
#include <stdlib.h>


void main() {
    int tot, termoAtual = 1, termoAnterior = 0, proximoTermo;

    printf("Informe o numero total: ");
    scanf("%d", &tot);

    for (int k=tot; k > 0; k--){
        proximoTermo = termoAnterior + termoAtual;
        termoAnterior = termoAtual;
        termoAtual = proximoTermo;
    }
    printf("O %d termo da serie de Fibonacci eh %d ", tot, proximoTermo);

    getch();
}
