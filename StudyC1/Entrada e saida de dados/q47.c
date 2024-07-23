/*Um banco está realizando uma grande promoção em seus financiamentos. Ele financia
qualquer valor em 5 prestações. O valor da primeira prestação corresponde à 20% do
valor do empréstimo. Os valores das demais prestações correspondem ao valor da
parcela anterior acrescido de uma taxa de juros de 7%. Com base nestas informações,
escreva um programa que leia o valor a ser financiado por um cliente e calcule: o valor
de cada prestação, o valor total que o cliente vai pagar pelo empréstimo e o total de
juros que o cliente vai pagar pelo empréstimo.*/

#include <stdio.h>


void main() {
    float valor;
    printf("Informe o valor financiado: ");
    scanf("%f", &valor);

    float parcela1 = valor * 20/100;
    float parcela2 = parcela1 + parcela1 * 7/100;
    float parcela3 = parcela2 + parcela2 * 7/100;
    float parcela4 = parcela3 + parcela3 * 7/100;
    float parcela5 = parcela4 + parcela4 * 7/100;
    float totalPagar = parcela1 + parcela2 + parcela3 + parcela4 + parcela5;
    float juros = totalPagar - valor;

    printf("Primeira Parcela: R$%.2f\n", parcela1);
    printf("Segunda Parcela: R$%.2f\n", parcela2);
    printf("Terceira Parcela: R$%.2f\n", parcela3);
    printf("Quarta Parcela: R$%.2f\n", parcela4);
    printf("Quinta Parcela: R$%.2f\n", parcela5);
    printf("Total a pagar: R$%.2f\n", totalPagar);
    printf("Juros: R$%.2f\n", juros);
    getch();
}


