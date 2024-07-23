#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    float area, valor;

    printf("Informe a área da casa [m2]: ");
    scanf("%f", &area);

    printf("Informe o valor do metro quadrado: ");
    scanf("%f", &valor);

    float custo = area * valor;


    printf("A casa de %.2f m2 custará R$%.2f reais para ser projetada.", area, custo);

    return 0;
}
