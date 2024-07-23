#include <stdio.h>
#include <math.h>

void main() {
    float distancia, tempo;

    printf("Distancia percorrida: ");
    scanf("%f", &distancia);
    printf("Tempo gasto: ");
    scanf("%f", &tempo);

    float velocidadaKMH = distancia/tempo;
    float velocidadeMS = velocidadaKMH / 3.6;

    printf("%.2f km/h\n%.2f m/s\n", velocidadaKMH, velocidadeMS);
}
