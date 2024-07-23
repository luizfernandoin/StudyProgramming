/*Escreva um programa que leia dois números inteiros e os armazene em duas variáveis
a e b. Após a leitura, o programa deve permutar os valores armazenados nas duas
variáveis. O programa deve imprimir os valores das duas variáveis antes e após a
permutação.*/


#include <stdio.h>
#include <string.h>

void main() {
    int a, b, numTemp;

    printf("Informe o primeiro número: ");
    scanf("%d", &a);
    printf("Informe o segundo número: ");
    scanf("%d", &b);

    numTemp = a;
    a = b;
    b = numTemp;

    printf("b: %d virou b: %d\n", a, b);
    printf("a: %d virou a: %d\n", numTemp, a);
}
