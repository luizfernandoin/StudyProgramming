#include <stdio.h>
#include <math.h>

void main() {
    int x1, x2, y1, y2;
    printf("Ponto P:\n");
    printf("Informe as coordenadas X e Y respectivamente: ");
    scanf("%d%d", &x1, &y1);

    printf("Ponto Q:\n");
    printf("Informe as coordenadas X e Y respectivamente: ");
    scanf("%d%d", &x2, &y2);

    int distancia = sqrt((pow(x1 - x2, 2)) + (pow(y1 - y2, 2)));

    printf("A distancia entre os pontos P e Q �: %d", distancia);
}

