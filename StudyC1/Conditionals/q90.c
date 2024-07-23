/*Escreva um programa que leia um n�mero inteiro entre 1 e 12 correspondente a um
m�s do ano e verifique o trimestre a que este m�s pertence.*/

#include <stdio.h>
#include <string.h>

void main() {
    int mes, trimestre;

    printf("Informe um mes de 1 a 12: ");
    scanf("%d", &mes);

    if (mes < 1 || mes > 12) {
        printf("Mes invalido!");
    }else {
        if (mes <= 3) {
            trimestre = 1;
        }else if (mes <= 6) {
            trimestre = 2;
        }else if (mes <= 9){
            trimestre = 3;
        }else {
            trimestre = 4;
        }
    }
    printf("O mes %d corresponde ao %d trimestre!", mes, trimestre);

    getch();
}
