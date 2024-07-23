/*Escreva um programa que leia um número inteiro entre 0 e 999 e calcule o seu
reverso. Você deve sempre considerar que o número lido tem três algarismos. Desta
forma, o reverso de 195 deve ser 591, o de 768 deve ser 867, de 3 deve ser 300, o de
40 deve ser 40, o de 500 deve ser 5, e assim sucessivamente. O programa deve
armazenar o valor do reverso em uma variável antes de exibi-lo para o usuário.*/

#include <stdio.h>


void main() {
    int num, resto;
    printf("Informe o numero inteiro entre 0 e 999: ");
    scanf("%d", &num);
    int centena = num / 100;
    printf("%d\n", centena);
    resto = num % 100;
    printf("resto centena: %d\n", resto);
    int dezena = resto / 10;
    printf("%d\n", dezena);
    int unidade = resto % 10;
    printf("%d\n", unidade);
    int reverso = (unidade * 100 + dezena * 10 + centena);

    printf("O reverso de %d é %d", num, reverso);
    getch();
}


