/*Escreva um programa que leia um caractere correspondente ao estado civil de uma
pessoa e imprima o estado civil informado por extenso. As op��es para o estado civil
s�o: S (solteiro), C (casado), D (divorciado) e V (vi�vo).*/

#include <stdio.h>
#include <ctype.h>

void main() {
    char estadoCivil;

    printf("Informe o estado civil [S, C, D, V]: ");
    scanf("%c", &estadoCivil);

    estadoCivil = toupper(estadoCivil);

    switch (estadoCivil){
    case 'S':
        printf("Solteiro.");
        break;
    case 'C':
        printf("Casado.");
        break;
    case 'D':
        printf("Divorciado.");
        break;
    case 'V':
        printf("Viuvo");
        break;
    default:
        printf("Op��o Invalida!");
        break;
    }

    getch();
}
