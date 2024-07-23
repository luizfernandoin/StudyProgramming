#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    float angulo1, angulo2;

    printf("1º Angulo: ");
    scanf("%f", &angulo1);

    printf("2º Angulo: ");
    scanf("%f", &angulo2);

    float angulo3 = 180 - (angulo1 + angulo2);

    if (angulo3 <= 0) {
        printf("Os angulos informados são inválidos.");
    }
    else {
        printf("1º Angulo: %.1f\n2º Angulo: %.1f\n3º Angulo: %.1f\n", angulo1, angulo2, angulo3);
    }

    return 0;
}

