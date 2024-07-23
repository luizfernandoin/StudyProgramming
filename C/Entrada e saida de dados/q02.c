#include <stdio.h>

int main() {
    float num1, num2, num3, p1, p2, p3;

    printf("Digite o primeiro numero e seu respectivo peso: ");
    scanf("%f%f", &num1, &p1);
    printf("Digite o segundo numero e seu respectivo peso: ");
    scanf("%f%f", &num2, &p2);
    printf("Digite o terceiro numero e seu respectivo peso: ");
    scanf("%f%f", &num3, &p3);

    float media = (num1 * p1 + num2 * p2 + num3 * p3)/(p1 + p2 + p3);

    printf("A m�dia ponderada foi: %.2f", media);
}
