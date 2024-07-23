/*Escreva um programa que leia os dois últimos valores da leitura de um medidor de
energia em KWh e calcule o valor da conta de energia, considerando que: o preço de 1
KWh é R$ 0,35, o valor da ICMS corresponde à 17% do valor do consumo e a taxa de
iluminação pública é de R$ 15,00.*/

#include <stdio.h>
#include <math.h>

void main() {
    int valor;
    printf("Informe os dois ultimos valores do leitor [KWh]: ");
    scanf("%d", &valor);

    float consumo = valor * 0.35;
    float preco = consumo + consumo * 17/100  + 15;

    printf("A conta de luz é: R$%.2f", preco);
    getch();
}
