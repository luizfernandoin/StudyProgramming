/*Um provedor de internet oferece um plano promocional para os seus clientes. Neste
plano, ele paga uma mensalidade de R$ 80,00 e pode acessar at� 100 GB de dados.
Caso a quantidade de dados acessados seja superior a este limite, ele deve pagar uma
taxa adicional de R$ 5,00 por cada GB extra acessado. Com base nestas informa��es,
escreva um programa que leia a quantidade de dados acessados pelo cliente durante
um m�s (em GB) e calcule o valor da sua conta, considerando que esta quantidade
nunca � inferior a 100 GB..*/

#include <stdio.h>


void main() {
    int totalGB;

    printf("Informe a quantidade de dados utilizados em GB: ");
    scanf("%d", &totalGB);
    int extra = ((totalGB / 100) * (totalGB % 100));
    float valor = 80 + 5 * extra;
    printf("TOTAL CONSUMIDO: %d\n", totalGB);
    printf("EXTRA: %d\n", extra);
    printf("TOTAL A PAGAR: R$%.2f\n", valor);
    getch();
}
