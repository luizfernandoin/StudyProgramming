/*Uma financeira est� oferecendo uma nova modalidade de empr�stimo para os seus
clientes. Nesta modalidade, o cliente pode pagar o valor financiado em at� 120
parcelas, todas as parcelas com o mesmo valor. O valor de cada parcela corresponde
ao valor do empr�stimo dividido pelo n�mero de parcelas, mais uma taxa de 4% sobre
o valor total financiado. Com base nestas informa��es, escreva um programa que leia
um valor a ser financiado pelo cliente e o n�mero de parcelas desejadas e calcule o
valor de cada parcela e o valor total que o cliente pagar� pelo empr�stimo.*/

#include <stdio.h>


void main() {
    float valor;
    int nParcelas;

    printf("Informe o valor financiado: ");
    scanf("%f", &valor);
    printf("Informe o numero de parcelas desejadas [1 - 120]: ");
    scanf("%d", &nParcelas);

    float valorParcela = valor / nParcelas + valor * 4/100;
    float valorTotal = valorParcela * nParcelas;

    printf("VALOR DAS PARCELAS: R$%.2f\n", valorParcela);
    printf("TOTAL A PAGAR: R$%.2f\n", valorTotal);
    getch();
}


