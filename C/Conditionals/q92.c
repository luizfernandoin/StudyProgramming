/*Escreva um programa que leia um verbo regular no infinitivo (da 1a, 2a ou 3a
conjuga��o) e imprima a sua conjuga��o no presente, pret�rito perfeito e futuro do
presente do modo indicativo.*/

#include <stdio.h>
#include <string.h>

//N�o esta pronto!
void main() {
    char verbo[20], verboTratado[20];
    int len;

    printf("Digite um verbo regular no infinitivo: ");
    scanf("%s", verbo);
    len = strlen(verbo);

    strncpy(verboTratado, verbo, len - 2);

    getch();
}

