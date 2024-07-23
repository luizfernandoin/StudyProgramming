/*Escreva um programa que leia o nome e a quantidade de votos recebidos por cada um
dos três candidatos a prefeito de uma cidade e calcule o percentual de votos recebidos
por cada candidato. Para resolver este programa, considere que não houve votos
brancos e nem nulos.*/


#include <stdio.h>

void main() {
    char nome1[100], nome2[100], nome3[100];
    int candidato1, candidato2, candidato3;

    printf("\nInforme o nome e a quantidade de votos do candidato: ");
    scanf("%s%d", &nome1, &candidato1);

    printf("\nInforme o nome e a quantidade de votos do candidato: ");
    scanf("%s%d", &nome2, &candidato2);

    printf("\nInforme o nome e a quantidade de votos do candidato: ");
    scanf("%s%d", &nome3, &candidato3);

    int votos = candidato1 + candidato2 + candidato3;

    float prcCandidato1 = (float)candidato1 / votos * 100;
    float prcCandidato2 = (float)candidato2 / votos * 100;
    float prcCandidato3 = (float)candidato3 / votos * 100;

    printf("%s: %.1f%%", nome1, prcCandidato1);
    printf("\n%s: %.1f%%", nome2, prcCandidato2);
    printf("\n%s: %.1f%%", nome3, prcCandidato3);
}
