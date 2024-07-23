#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    float seno;

    printf("Informe o seno: ");
    scanf("%f", &seno);

    float cosseno = sqrt(1 - pow(seno, 2));


    printf("O seno %.2f possui cosseno %.2f", seno, cosseno);

    return 0;
}

