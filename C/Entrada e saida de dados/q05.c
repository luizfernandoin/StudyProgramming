#include <stdio.h>
#include <math.h>

void main() {
    float raio;
    double pi = M_PI;

    printf("Informe o raio da circunferencia: ");
    scanf("%f", &raio);

    float area = pi * pow(raio, 2);
    float perimetro = 2 * pi * raio;

    printf("�rea: %.2f\nPerimetro: %.2f\n", area, perimetro);
}
