/*Escreva um programa que leia a quantidade de horas trabalhadas por um funcionário
de uma empresa durante um mês e o valor de cada hora trabalhada e determine o seu
pagamento. O programa deve considerar que a carga-horária mensal do funcionário é
de 160 horas e que o valor de cada hora extra corresponde ao valor da hora
trabalhada acrescido de uma taxa de 50%. Para resolver a questão, considere que a
quantidade de horas trabalhadas nunca será inferior a 160.*/


#include <stdio.h>

void main() {
    int tHoras;
    float valor;

    printf("Informe o total de horas trabalhadas por mes: ");
    scanf("%d", &tHoras);
    printf("Informe o valor da hora: ");
    scanf("%f", &valor);

    float vExtra = (valor + valor * 50/100) * tHoras - 160;
    float total = vExtra + 160 * valor;

    printf("O salario do trabalhador é: R$%.2f", total);
    getch();
}
