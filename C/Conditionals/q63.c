/*Escreva um programa que leia o n�mero de gols marcados pelo time da casa e o
n�mero de gols marcado pelo time visitante e verifique se o jogo foi vencido pelo time
da casa, pelo time visitante ou se terminou empatado.*/

#include <stdio.h>

void main() {
    int gCasa, gFora;

    printf("Numero de gols marcados pelo time da casa: ");
    scanf("%d", &gCasa);
    printf("Numero de gols marcados pelo time visitante: ");
    scanf("%d", &gFora);

    if (gCasa > gFora) {
        printf("O time da casa venceu!");
    } else if (gFora > gCasa) {
        printf("O time visitante venceu!");
    } else {
        printf("O jogo terminou empatado!");
    }

    getch();
}
