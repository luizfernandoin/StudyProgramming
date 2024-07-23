/*Jo�o resolveu poupar dinheiro para comprar um carro. Para isso, ele decidiu que todo
m�s ir� poupar 25% do seu sal�rio, at� conseguir juntar um bom valor para ser dado
como entrada. Com base nestas informa��es, escreva um programa que receba como
entrada o valor do sal�rio atual de Jo�o e o valor que ele deseja juntar como entrada e
calcule quanto tempo ele ter� que trabalhar para conseguir juntar o valor desejado. A
resposta deve ser dada na forma x anos e y meses.*/

#include <stdio.h>

void main() {
    float salario, valorCarro;

    printf("Informe o salario: ");
    scanf("%f", &salario);
    printf("Informe o valor do carro: ");
    scanf("%f", &valorCarro);

    float poupanca = salario * 25/100;
    int tempoPoupando = (int)(valorCarro / poupanca);
    int anosPoupando = tempoPoupando / 12;
    int mesesPoupando = tempoPoupando % 12;

    printf("%d anos e %d meses", anosPoupando, mesesPoupando);
    getch();
}
