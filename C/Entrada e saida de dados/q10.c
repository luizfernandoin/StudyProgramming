#include <stdio.h>
#include <math.h>

void main() {
    float cateto1, cateto2;

    printf("Digite o valor do primeiro cateto: ");
    scanf("%f", &cateto1);

    printf("Digite o valor do segundo cateto: ");
    scanf("%f", &cateto2);

    float hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    printf("O valor da hipotenusa é: %.2f\n", hipotenusa);
}
