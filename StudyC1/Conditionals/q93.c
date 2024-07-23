/*Escreva um programa em que leia um n�mero inteiro entre 1000 e 9999 e verifique se
o n�mero lido � ou n�o um pal�ndromo.*/

#include <stdio.h>


void main() {
    int num, reverso, resto;

    printf("Informe o numero inteiro entre 1000 e 9999: ");
    scanf("%d", &num);

    if (num < 1000 || num > 9999) {
        printf("Numero invalido!");
    }else {
        int milhar = num / 1000;
        resto = num % 1000;
        int centena = resto / 100;
        resto = resto % 100;
        int dezena = resto / 10;
        resto = resto % 10;
        int unidade = resto;

        reverso = (unidade * 1000 + dezena * 100 + centena * 10 + milhar);

        if (num == reverso) {
            printf("O numero %d eh um palindromo.", num);
        }else {
            printf("O numero %d nao eh um palindromo.", num);
        }
    }

    getch();
}
