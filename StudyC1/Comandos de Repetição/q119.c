/*Escreva um programa que leia um número inteiro N e imprima todos os termos da
série de Fibonacci que são menores ou iguais a N.*/

#include <stdio.h>
#include <string.h>

void main() {
    int k, num, tot=0;
    int t1=1, t2=1;

    printf("Informe um numero: ");
    scanf("%d", &num);

    while (tot <= num) {
        printf("%d, %d, ", t1, t2);
        int soma = t1 + t2;
        t1 = soma;
        t2 += t1;
        tot++;
    }
}
