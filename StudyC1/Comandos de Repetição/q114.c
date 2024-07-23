/*Escreva um programa que leia dois números inteiros M e N e calcule o valor de M^N
. A potenciação deve ser calculada através de um comando de repetição, sem a utilização
de qualquer função oferecida pela linguagem de programação.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {
    int base, expoente, k;
    int potencia = 1;

    printf("Informe a base e o expoente: ");
    scanf("%d%d", &base, &expoente);

    for (k=1; k<= abs(expoente); k++){
        potencia *= base;
    }
    if (expoente > 0 ){
        printf("O resultado eh %d", potencia);
    }
    else {
        printf("O resultado eh 1/%d", potencia);
    }
    getch();
}
