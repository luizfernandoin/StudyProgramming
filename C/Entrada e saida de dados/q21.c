#include <stdio.h>
#include <math.h>

int main() {

    float preco, lucro;

    printf("Preco de producao: ");
    scanf("%f", &preco);

    printf("Lucro desejado: ");
    scanf("%f", &lucro);

    float preco_final = preco + lucro;

    printf("Preço de Produção: %.2f\nLucro Desejado: %.2f\n", preco, lucro);
    printf("O produto deve ser vendido a R$%.2f reais", preco_final);

    return 0;
}

