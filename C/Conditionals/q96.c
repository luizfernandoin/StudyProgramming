/*Escreva um programa que leia cinco n�meros inteiros e determine o segundo maior
n�mero digitado pelo usu�rio e a ordem em que o mesmo foi digitado.*/

#include <stdio.h>

//N�o esta pronto!
void main() {
    int num1, num2, num3, num4, num5, maior, segundoMaior, ordem;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);
    printf("Informe o terceiro numero: ");
    scanf("%d", &num3);
    printf("Informe o quarto numero: ");
    scanf("%d", &num4);
    printf("Informe o quinto numero: ");
    scanf("%d", &num5);

    if (num1 > maior) {
        segundoMaior = maior;
        maior = num1;
    } else if (num1 > segundoMaior) {
        segundoMaior = num1;
        ordem = 1;
    }

    if (num2 > maior) {
        segundoMaior = maior;
        maior = num2;
    } else if (num2 > segundoMaior) {
        segundoMaior = num2;
        ordem = 2;
    }

    if (num3 > maior) {
        segundoMaior = maior;
        maior = num3;
    } else if (num3 > segundoMaior) {
        segundoMaior = num3;
        ordem = 3;
    }

    if (num4 > maior) {
        segundoMaior = maior;
        maior = num4;
    } else if (num4 > segundoMaior) {
        segundoMaior = num4;
        ordem = 4;
    }

    if (num5 > maior) {
        segundoMaior = maior;
        maior = num5;
    } else if (num5 > segundoMaior) {
        segundoMaior = num5;
        ordem = 5;
    }

    printf("O %d numero eh o segundo maior: %d\n", ordem, segundoMaior);
    getch();
}
