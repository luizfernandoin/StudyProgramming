#include <stdio.h>
#include <math.h>

void main() {
    float valor, cotacao;

    printf("Valor em R$: ");
    scanf("%f", &valor);
    printf("Cota��o do Dolar: ");
    scanf("%f", &cotacao);

    float tot_dolares = valor/cotacao;

    printf("O valor R$%.2f reais corresponde � $%.2f dolares!\n", valor, tot_dolares);
}
