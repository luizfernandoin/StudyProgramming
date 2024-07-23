//vista: -10%
//cart�o(3parcelas): pre�o original
//cart�o (10 parcelas): +20%
#include <stdio.h>

void main() {
    float valor;

    printf("Informe o valor da compra: ");
    scanf("%f", &valor);

    float valor_vista = valor - (valor * (10.0/100));
    float valor_cartao3 = valor;
    float valor_cartao10 = valor + (valor * (20.0/100));

    printf("Valor final da compra\n");
    printf("A vista: R$%.2f\n3x Cart�o: R$%.2f\n10x Cart�o: R$%.2f", valor_vista, valor_cartao3, valor_cartao10);
}
