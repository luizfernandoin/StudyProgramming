/*Seu Joaquim � um motorista que viaja todos os dias de Cajazeiras para Jo�o Pessoa
para fazer entregas para empresa na qual trabalha. Durante o percurso, ele para
realizar entregas em Sousa, Patos, Campina Grande e Jo�o Pessoa. Considerando que
seu Joaquim gasta 50 minutos no percurso de Cajazeiras para Sousa, 2 horas no
percurso entre Sousa e Patos, 2 horas e 30 minutos no percurso entre Patos e Campina
Grande e 2 horas no percurso entre Campina Grande e Jo�o Pessoa, e que cada
entrega demora exatamente 20 minutos, escreva um programa que leia o hor�rio em
que seu Joaquim saiu de Cajazeiras (horas e minutos) e calcule o hor�rio em que ele
chegar� em cada cidade do itiner�rio.*/

#include <stdio.h>


void main() {
    int hora, minutos;

    printf("Informe a hora de saida: ");
    scanf("%d", &hora);
    printf("Informe os minutos de saida: ");
    scanf("%d", &minutos);

    int sousa = minutos + 50;
    hora += sousa / 60;
    minutos = sousa % 60;
    printf("Chegada em Sousa: %d:%d\n", hora, minutos);

    int patos = minutos + 120 + 20;
    hora += patos / 60;
    minutos = patos % 60;
    printf("Chegada em Patos: %d:%d\n", hora, minutos);

    int campina = minutos + 150 + 20;
    hora += campina / 60;
    minutos = campina % 60;
    printf("Chegada em Campina Grande: %d:%d\n", hora, minutos);

    int jp = minutos + 120 + 20;
    hora += jp / 60;
    minutos = jp % 60;
    printf("Chegada em Jo�o Pessoa: %d:%d\n", hora, minutos);
    getch();
}
