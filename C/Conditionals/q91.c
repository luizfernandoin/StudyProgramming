/*Escreva um programa que leia o valor de um m�s e de um ano e verifique a
quantidade de dias do m�s informado pelo usu�rio.*/

#include <stdio.h>
#include <string.h>

void main() {
    int mes, ano, dias;

    printf("Informe um mes de 1 a 12: ");
    scanf("%d", &mes);
    printf("Informe o ano: ");
    scanf("%d", &ano);

    if (mes < 1 || mes > 12) {
        printf("Mes invalido!");
    }else {
        if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
            dias = 31;
        }else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
            dias = 30;
        }else {
            if (ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0) {
                dias = 29;
            }else {
                dias = 28;
            }
        }
    }
    printf("O mes %d do ano %d tem %d dias.", mes, ano, dias);

    getch();
}
