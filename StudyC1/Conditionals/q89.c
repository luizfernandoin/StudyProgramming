/*Escreva um programa que leia um n�mero inteiro entre 1 e 999 e calcule o seu valor
correspondente em algarismos romanos.*/

#include <stdio.h>
#include <string.h>

void main() {
    int numero;
    char numeroRomano[4] = "";

    printf("Informe um numero entre 1 e 999: ");
    scanf("%d", &numero);

    if (numero < 1 || numero > 999) {
        printf("Numero invalido!");
    }else {
        int centenas = numero / 100;
        int dezenas = (numero % 100) / 10;
        int unidades = numero % 10;

        if (centenas > 0) {
            switch (centenas) {
            case 1:
                strcat(numeroRomano, "C");
                break;
            case 2:
                strcat(numeroRomano, "CC");
                break;
            case 3:
                strcat(numeroRomano, "CCC");
                break;
            case 4:
                strcat(numeroRomano, "CD");
                break;
            case 5:
                strcat(numeroRomano, "D");
                break;
            case 6:
                strcat(numeroRomano, "DC");
                break;
            case 7:
                strcat(numeroRomano, "DCC");
                break;
            case 8:
                strcat(numeroRomano, "DCCC");
                break;
            case 9:
                strcat(numeroRomano, "CM");
                break;
            }
        }

        if (dezenas > 0) {
            switch (dezenas) {
            case 1:
                strcat(numeroRomano, "X");
                break;
            case 2:
                strcat(numeroRomano, "XX");
                break;
            case 3:
                strcat(numeroRomano, "XXX");
                break;
            case 4:
                strcat(numeroRomano, "XL");
                break;
            case 5:
                strcat(numeroRomano, "L");
                break;
            case 6:
                strcat(numeroRomano, "LX");
                break;
            case 7:
                strcat(numeroRomano, "LXX");
                break;
            case 8:
                strcat(numeroRomano, "LXXX");
                break;
            case 9:
                strcat(numeroRomano, "XC");
                break;
            }
        }

        if (unidades > 0) {
            switch (unidades) {
            case 1:
                strcat(numeroRomano, "I");
                break;
            case 2:
                strcat(numeroRomano, "II");
                break;
            case 3:
                strcat(numeroRomano, "III");
                break;
            case 4:
                strcat(numeroRomano, "IV");
                break;
            case 5:
                strcat(numeroRomano, "V");
                break;
            case 6:
                strcat(numeroRomano, "VI");
                break;
            case 7:
                strcat(numeroRomano, "VII");
                break;
            case 8:
                strcat(numeroRomano, "VIII");
                break;
            case 9:
                strcat(numeroRomano, "IX");
                break;
            }
        }

        printf("Numero romano: %s", numeroRomano);
    }
    getch();
}
