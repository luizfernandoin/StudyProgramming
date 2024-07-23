/*Escreva um programa que leia um caractere e verifique se o mesmo � uma letra
mai�scula, uma letra min�scula, um numeral ou nenhum dos tipos anteriores.*/

#include <stdio.h>

void main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    if (caractere >= 'A' && caractere <= 'Z') {
        printf("Letra maiuscula!\n");
    } else if (caractere >= 'a' && caractere <= 'z') {
        printf("Letra minuscula!\n");
    } else if (caractere >= '0' && caractere <= '9') {
        printf("Numeral\n");
    } else {
        printf("Nenhum dos tipos!\n");
    }

    getch();
}
