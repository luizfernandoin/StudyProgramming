#include <stdio.h>
#include <math.h>

void main() {
    double numero;

    printf("N�mero: ");
    scanf("%lf", &numero);

    printf("N�mero: %f\nAntecessor: %f\nSucessor: %f\n", numero, numero - 1, numero + 1);
}
