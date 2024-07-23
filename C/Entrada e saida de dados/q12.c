#include <stdio.h>
#include <math.h>

void main() {
    int polegadas;

    printf("Polegadas: ");
    scanf("%d", &polegadas);

    float centimetros = polegadas/2.54;

    printf("%d polegadas equivale a %.2f centimetros!\n", polegadas, centimetros);
}
