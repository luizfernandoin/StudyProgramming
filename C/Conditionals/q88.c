/*Escreva um programa que leia um �nico n�mero entre 10000 e 99999 referente ao
n�mero de um deputado estadual e identifique o partido pelo qual ele est�
concorrendo. O n�mero do partido pode ser identificado pelos dois primeiros
algarismos do n�mero do candidato. Por exemplo, um candidato com n�mero 13457
concorre pelo PT, que � o partido de n�mero 13, enquanto que um candidato com
n�mero 45879 concorre pelo PSDB, que � o partido de n�mero 45. Neste programa,
considere os seguintes n�meros de partido: 13 (PT), 14 (PTB), 15 (PMDB), 25 (DEM), 45
(PSDB) e 65( PCdoB).*/

#include <stdio.h>
#include <ctype.h>

void main() {
    int numero;

    printf("Informe o numero do candidato [10000 - 99999]: ");
    scanf("%d", &numero);

    if (numero < 1000 || numero > 99999) {
        printf("Numero invalido!");
    }else {
        int nCandidato = (numero / 10000) * 10 + (numero % 10000) / 1000;

        if (nCandidato < 10) {
            nCandidato *= 10;
        }
        switch (nCandidato) {
        case 13:
            printf("%d - PT", nCandidato);
            break;
        case 14:
            printf("%d - PTB", nCandidato);
            break;
        case 15:
            printf("%d - PMDB", nCandidato);
            break;
        case 25:
            printf("%d - DEM", nCandidato);
            break;
        case 45:
            printf("%d - PSDB", nCandidato);
            break;
        case 65:
            printf("%d - PCdoB", nCandidato);
            break;
        }
    }

    getch();
}
