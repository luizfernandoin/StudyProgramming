#include <stdio.h>
#include <math.h>

void main() {
    double base, altura;

    printf("Base: ");
    scanf("%lf", &base);
    printf("Altura: ");
    scanf("%lf", &altura);

    double area = (base * altura) / 2;
    printf("Base: %.2f\nAltura: %.2f\n�rea: %.2f\n", base, altura, area);
}
