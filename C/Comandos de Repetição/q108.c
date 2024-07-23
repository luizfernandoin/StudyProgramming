/*Escreva um programa que leia 20 números entre 10000 e 99999 referente aos
números dos deputados estaduais eleitos e identifique a quantidade de candidatos
que cada partido elegeu. O número do partido do deputado pode ser identificado
pelos dois primeiros algarismos do número do candidato. Por exemplo, um candidato
com número 13457 concorre pelo PT, que é o partido de número 13, enquanto que um
candidato com número 45879 concorre pelo PSDB, que é o partido de número 45.
Neste programa, considere os seguintes números de partido: 13 (PT), 14 (PTB), 15
(PMDB), 25 (DEM), 45 (PSDB) e 65( PCdoB).*/

#include <stdio.h>
#include <stdlib.h>


void main() {
    int numCandidato, pt=0, ptb=0, pmdb=0, dem=0, psdb=0, pcdob=0;

    for (int tot=1; tot <= 20; tot++) {
        printf("Informe um numero entre 10000 e 99999: ");
        scanf("%d", &numCandidato);

        int numPartido = numCandidato / 1000;

        switch (numPartido) {
            case 13:
                pt += 1;
                break;
            case 14:
                ptb += 1;
                break;
            case 15:
                pmdb += 1;
                break;
            case 25:
                dem += 1;
                break;
            case 45:
                psdb += 1;
                break;
            case 65:
                pcdob += 1;
                break;
        }
    }

    printf("PT: %d\nPTB: %d\nPMDB: %d\nDEM: %d\nPSDB: %d\nPCdoB: %d\n", pt, ptb, pmdb, dem, psdb, pcdob);

    getch();
}
