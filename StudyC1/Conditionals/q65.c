/*Escreva um programa que leia a idade de uma pessoa e verifique se ela � crian�a (0-12
anos), adolescente (13-17 anos), adulta (18-59) ou idosa (acima de 60 anos).*/

#include <stdio.h>

void main() {
    int idade;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if (idade >= 0 && idade <= 12) {
        printf("Voce eh crianca");
    } else if (idade > 12 && idade <= 17) {
        printf("Voce eh adolescente");
    } else if (idade > 17 && idade <= 59){
        printf("Voce eh adulta");
    }else if (idade >= 60){
        printf("Voce eh idosa");
    }else {
        printf("Idade invalida!");
    }

    getch();
}
