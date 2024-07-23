/*L�zaro est� muito feliz por ter enfim conseguido construir a sua casa pr�pria. Sabendo-
se que a constru��o durou 180 dias de trabalho, escreva um programa que leia o
n�mero de pedreiros que trabalhavam na obra, o n�mero de ajudantes e o valor da
di�ria do pedreiro e calcule quanto L�zaro gastou com m�o de obra. Para resolver este
programa, considere que todos os pedreiros e ajudantes trabalharam todos os dias da
obra e que o valor da di�ria de cada ajudante corresponde � metade do valor da di�ria
do pedreiro.*/

#include <stdio.h>
const DURACAO = 180;

void main() {
    int nPedreiros, nAjudantes;
    float valorDiaria;

    printf("Informe o numero de pedreiros: ");
    scanf("%d", &nPedreiros);
    printf("Informe o numero de ajudantes: ");
    scanf("%d", &nAjudantes);
    printf("Valor da diaria do pedreiro: ");
    scanf("%f", &valorDiaria);

    float valorPedreiros = DURACAO * (nPedreiros * valorDiaria);
    float valorAjudantes = valorPedreiros / 2;
    float valorTotal = valorAjudantes + valorPedreiros;

    printf("VALOR GASTO: R$%.2f", valorTotal);
    getch();
}
