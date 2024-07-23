#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float raio;

    printf("Raio: ");
    scanf("%f", &raio);

    float volume = (4 * M_PI * pow(raio, 3)) / 3;

    printf("O volume da esfera é %.2f", volume);

    return 0;
}

