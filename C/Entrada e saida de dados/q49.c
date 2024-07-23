/*Uma revendedora de ve�culos resolveu fazer uma promo��o em seus ve�culos. Nesta
revendedora, o pre�o de um ve�culo � calculado atrav�s do seu pre�o de compra, mais
uma taxa de 20% de IPI, 17% de ICMS e uma margem de lucro de 20%. Nesta
promo��o, a revendedora resolveu tirar o valor do IPI. Com base nestas informa��es,
escreva um programa que leia o pre�o atual de um ve�culo e calcule qual deve ser o
seu pre�o na promo��o.*/

#include <stdio.h>


void main() {
    float valor;

    printf("Informe o valor do veiculo: ");
    scanf("%f", &valor);

    float icms = valor * 17/100;
    float lucro = (valor + icms) * 20/100;
    float valorTotal = valor + icms + lucro;

    printf("TOTAL A PAGAR: R$%.2f", valorTotal);
    getch();
}
