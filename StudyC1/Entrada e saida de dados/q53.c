/*Escreva um programa que leia o m�s e o ano em que um preso come�ar� a cumprir a
sua pena e o tamanho da pena (em n�mero de anos e n�mero de meses, por exemplo,
18 anos e 5 meses) e determine o m�s e o ano em que ele terminar� de cumprir a sua
pena. Para resolver esta quest�o, considere que o ano ser� sempre maior ou igual a
2000.*/

#include <stdio.h>


void main() {
    int anoAtual, mesAtual, totAnoPena, totMesPena;

    printf("Ano de inicio: ");
    scanf("%d", &anoAtual);
    printf("Mes de inicio: ");
    scanf("%d", &mesAtual);

    printf("Total de anos da pena: ");
    scanf("%d", &totAnoPena);
    printf("Total de meses da pena: ");
    scanf("%d", &totMesPena);

    anoAtual = 2000 + anoAtual % 2000;
    int totAnos = anoAtual + totAnoPena;
    int totMeses = mesAtual + totMesPena;

    totAnos += totMeses / 12;
    totMeses = totMeses % 12;

    printf("Sua pena se encerrara em %d/%d", totMeses, totAnos);
    getch();
}
