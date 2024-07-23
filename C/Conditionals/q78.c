/*Alfredo tem um carro flex e sempre fica na d�vida se � melhor abastec�-lo com �lcool
ou gasolina. Um dia um de seus amigos o ensinou a seguinte dica: �Pegue o valor do
pre�o da gasolina e multiplique por 0,7. Se o valor for menor ou igual ao valor do pre�o
do �lcool, abaste�a com gasolina. Caso contr�rio, abaste�a com �lcool.� Com base
nestas informa��es, escreva um programa que leia o pre�o do litro da gasolina e do
�lcool e verifique se � melhor abastecer com �lcool ou com gasolina.*/

#include <stdio.h>

void main() {
    float precoAlcool, precoGasolina;

    printf("Informe o preco do alcool: ");
    scanf("%f", &precoAlcool);
    printf("Informe o preco da gasolina: ");
    scanf("%f", &precoGasolina);

    float preco = precoGasolina * 0.7;

    if (preco <= precoAlcool) {
        printf("Abaste�a com gasolina!");
    }else {
        printf("Abaste�a com alcool!");
    }

    getch();
}
