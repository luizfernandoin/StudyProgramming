/*Escreva um programa que leia o preço atual de uma ação e o seu preço anterior e
calcule a sua variação em termos percentuais. Por exemplo, se o preço atual for R$
10,00 e o preço anterior era R$ 5,00 a variação foi de 100%.*/

#include <stdio.h>


void main() {
    float preco_atual, preco_anterior;
    printf("Preço atual de uma acao: ");
    scanf("%f", &preco_atual);
    printf("Preço anterior da acao: ");
    scanf("%f", &preco_anterior);

    float variacao = ((preco_atual - preco_anterior) / preco_anterior) * 100;

    printf("A ação teve um aumento de %.1f%%", variacao);
    getch();
}
