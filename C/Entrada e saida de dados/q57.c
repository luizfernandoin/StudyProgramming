/*Escreva um programa que leia o valor de uma passagem em reais e em milhas e, em
seguida, leia o valor da passagem (em reais) que Caio deseja comprar e calcule quantas
milhas ele precisa juntar para que ele n�o precise pagar pela passagem. Para resolver
este programa, considere que a propor��o entre o valor da milha e o valor em reais � a
mesma para todos os v�os da companhia a�rea.*/

#include <stdio.h>

void main() {
    float passagemReais, passagemMilhas, compraReais;

    printf("Informe o valor da passagem em reais: ");
    scanf("%f", &passagemReais);
    printf("Informe o valor da passagem em milhas: ");
    scanf("%f", &passagemMilhas);

    printf("Informe o valor da passagem que Caio deseja comprar em reais: ");
    scanf("%f", &compraReais);

    float proporcao = passagemReais / passagemMilhas;
    float milhasNecessarias = compraReais / proporcao;

    printf("Para comprar uma passagem de R$%.2f, Caio precisa juntar %.2f milhas.\n", compraReais, milhasNecessarias);
    getch();
}

