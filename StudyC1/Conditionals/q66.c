/*Escreva um programa que leia o n�mero de pessoas que v�o participar de um
churrasco e calcule quantos quilos de carne devem ser comprados. Para isso,
considere que cada pessoa consome 250 g de carne. A resposta do programa deve ser
um n�mero inteiro.*/

#include <stdio.h>
const CONSUMO = 250;

void main() {
    int nPessoas;

    printf("Informe o numero de pessoas: ");
    scanf("%d", &nPessoas);

    int consumoTotal = nPessoas * CONSUMO;
    int consumoKG = consumoTotal / 1000;
    int consumoG = consumoTotal % 1000;

    if (consumoTotal < 1000) {
        printf("Devem ser comprados %d gramas de carne!", consumoG);
    }else {
        printf("Devem ser comprados %dKg e %dg de carne!", consumoKG, consumoG);
    }

    getch();
}
