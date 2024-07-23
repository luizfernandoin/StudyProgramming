/*Escreva um programa que leia o tamanho de um arquivo em MB e a taxa de
transmissão da rede em KB/s e calcule o tempo aproximado necessário para a
transmissão do arquivo. A resposta deve ser dada através de uma mensagem na forma
X horas, Y minutos e Z segundos.*/


#include <stdio.h>
const MB = 1024;

void main() {
    int tamanho, taxa, resto;
    printf("Informe o tamanho do arquivo MB: ");
    scanf("%d", &tamanho);
    printf("Informe a taxa de download da rede: ");
    scanf("%d", &taxa);

    int tamanhoTotal = tamanho * MB;
    int tempoTotal = tamanhoTotal / taxa;
    int horas = tempoTotal / 3600;
    resto = tempoTotal % 3600;
    int minutos = resto / 60;
    resto = minutos % 60;
    int segundos = resto;

    printf("%d:%d:%d para o download!", horas, minutos, segundos);
    getch();
}
