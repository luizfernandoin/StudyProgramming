#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    float valor = 300;
    float comprimento, largura;

    printf("Comprimento: ");
    scanf("%f", &comprimento);

    printf("Largura: ");
    scanf("%f", &largura);

    float area = comprimento * largura;
    float custo = area * valor;

    printf("Largura: %.2f\nComprimento: %.2f\n", largura, comprimento);
    printf("O terreno com %.2f m² irá custar R$%.2f reais", area, custo);

    return 0;
}

