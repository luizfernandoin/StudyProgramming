/*Escreva um programa que leia o valor de uma distância em metros e calcule o seu
valor correspondente em quilômetros, hectômetros, decâmetros, centímetros,
decímetros e milímetros.*/


#include <stdio.h>

void main() {
    float distMetros, distKM, distHM, distDAM, distCM, distDM, distMM;
    printf("Informe a distancia em metros: ");
    scanf("%f", &distMetros);

    distKM = distMetros / 1000;
    distHM = distMetros / 100;
    distDAM = distMetros / 10;
    distCM = distMetros * 100;
    distDM = distMetros * 10;
    distMM = distMetros * 1000;

    printf("%.2f m --> %.2f km\n", distMetros, distKM);
    printf("%.2f m --> %.2f hm\n", distMetros, distHM);
    printf("%.2f m --> %.2f dam\n", distMetros, distDAM);
    printf("%.2f m --> %.2f cm\n", distMetros, distCM);
    printf("%.2f m --> %.2f dm\n", distMetros, distDM);
    printf("%.2f m --> %.2f mm\n", distMetros, distMM);
}
