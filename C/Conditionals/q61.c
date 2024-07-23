/*Escreva um programa que leia um n�mero inteiro e determine o seu valor absoluto. O
valor absoluto deve ser calculado sem o uso de qualquer fun��o oferecida pela
linguagem.*/

#include <stdio.h>

void main() {
    int num, absoluto;

    printf("Informe o numero: ");
    scanf("%d", &num);

    if (num < 0) {
        absoluto = num * -1;
    }else {
        absoluto = num;
    }

    printf("O valor absoluto de %d eh %d", num, absoluto);
    getch();
}
