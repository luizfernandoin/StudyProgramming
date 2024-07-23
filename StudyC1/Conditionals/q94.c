/*Escreva um programa que leia um valor inteiro a ser sacado pelo usu�rio e identifique
quantas c�dulas de cada tipo devem ser usadas para que o saque seja efetuado. Voc�
pode supor que o caixa tem c�dulas de R$ 10,00, R$ 20,00, R$ 50,00 e R$ 100,00. O
valor m�ximo de um saque � R$ 1000,00 e, para cada saque, deve-se priorizar o uso
das c�dulas maiores.*/

#include <stdio.h>
#include <string.h>

void main() {
    int valor, resto;

    printf("Informe o valor: ");
    scanf("%d", &valor);

    if (valor < 10 || valor > 1000) {
        printf("O valor minimo eh 10 e maximo eh 1000 para saque!");
    }else {
        int cem = valor / 100;
        resto = valor % 100;
        int cinquenta = resto / 50;
        resto = resto % 50;
        int vinte = resto / 20;
        resto = resto % 20;
        int dez = resto / 10;

        int soma = cem * 100 + cinquenta * 50 + vinte * 20 + dez * 10;

        printf("Foi sacado R$%d\n", soma);
        printf("%d cedulas de RS100,00\n", cem);
        printf("%d cedulas de RS50,00\n", cinquenta);
        printf("%d cedulas de RS20,00\n", vinte);
        printf("%d cedulas de RS10,00\n", dez);
    }

    getch();
}
