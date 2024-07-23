#include <stdio.h>

void main() {
    float comprimento, largura, quant_litros;

    printf("Comprimento da Cisterna: ");
    scanf("%f", &comprimento);

    printf("Largura da Cisterna: ");
    scanf("%f", &largura);

    printf("Quantidade de Litros: ");
    scanf("%f", &quant_litros);

    //primeiro � preciso calcular o volume da cisterna: volume = comprimento * largura * altura
    float altura = quant_litros / (comprimento * largura);

    printf("Para armazenar %.2f litros, necessita-se encher a cisterna %.2f metros.", quant_litros, altura);
}

