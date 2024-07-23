#include <stdio.h>
#include <math.h>

void main() {
    unsigned int num;

    printf("N�mero: ");
    scanf("%u", &num);

    printf("Dobro: %u\nTriplo: %u\nQuadrado: %.2f\nCubo: %.2f\nRaiz Quadrada: %.2f\n", num*2, num*3, pow(num, 2), pow(num, 3), sqrt(num));
}
