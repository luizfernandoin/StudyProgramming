/*Escreva um programa que leia o valor total que um cliente consumiu em um
restaurante e determine o valor final da sua conta, considerando que o restaurante
cobra uma taxa de serviço de 10 % e uma taxa de couvert artístico de R$ 10,00.*/


#include <stdio.h>

void main() {
    float valor;
    printf("Informe o valor total: ");
    scanf("%f", &valor);

    float conta = valor + valor * 10/100 + 10;

    printf("O cliente devera pagar: R$%.2f", conta);
    getch();
}
