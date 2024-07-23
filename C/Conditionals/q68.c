/*Escreva um programa que leia o valor do sal�rio bruto de um empregado e calcule o
seu sal�rio l�quido. Para calcular o valor do sal�rio l�quido, deve-se primeiramente
descontar uma taxa de 11%, correspondente ao valor da contribui��o previdenci�ria.
Depois, do valor restante, deve-se descontar o valor do imposto de renda, que varia de
acordo com o valor do sal�rio. O percentual que deve ser descontado para o imposto
de renda varia de acordo com a tabela abaixo.*/

#include <stdio.h>

void main() {
    float salario;

    printf("Informe o salario: ");
    scanf("%f", &salario);

    float salarioLiquido = (salario - salario * 11/100);

    if (salario > 1903.98 && salario <= 2826.65) {
            salarioLiquido -= salario * 7.5/100;
    }else if (salario > 2826.66 && salario <= 3751.05) {
            salarioLiquido -= salario * 15/100;
    }else if (salario > 3751.06 && salario <= 4664.68) {
            salarioLiquido -= salario * 22.5/100;
    }else if (salario > 4664.68) {
            salarioLiquido -= salario * 27.5/100;
    }

    printf("O salario liquido do empregado eh de R$%.2f", salarioLiquido);
    getch();
}
