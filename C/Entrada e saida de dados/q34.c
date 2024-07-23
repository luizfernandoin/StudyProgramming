/*Escreva um programa que leia o dia do mês em que o cliente fez uma compra e o
prazo de entrega dado pelo vendedor e calcule o dia do mês (atual ou dos meses
seguintes) em que o cliente deve receber o produto. Para resolver este programa,
considere que cada mês tem exatamente 30 dias.*/

#include <stdio.h>

void main() {
    int diaCompra, prazoEntrega;

    printf("Dia do mes da compra: ");
    scanf("%d", &diaCompra);
    printf("Prazo de entrega: ");
    scanf("%d", &prazoEntrega);

    int entrega = (diaCompra + prazoEntrega) % 30;

    printf("Sua compra sera entregue dia %d", entrega);
    getch();
}

