/*
Escreva um programa que leia os dados de 10 alunos, sendo eles: nome,
número de matrícula e 3 notas obtidas pelo aluno no semestre. Seu programa
deve possuir uma função que determina qual foi a maior média alcançada e
imprime os dados do aluno que obteve a maior média.
*/

#include <stdio.h>

const int TAMANHO = 10;

typedef struct {
    char nome[20];
    int matricula;
    int notas[3];
} Aluno;


void maiorMedia(Aluno alunos[TAMANHO]) {
    int melhorAluno[2];

    for (int i = 0; i < TAMANHO; i++){
        int media = (alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2]) / 3;
        if (i == 0 || media > melhorAluno[0]) {
            melhorAluno[0] = media;
            melhorAluno[1] = i;
        }
    }

    printf("%s(%d): %d", alunos[melhorAluno[1]].nome, alunos[melhorAluno[1]].matricula, melhorAluno[0]);
}

void main() {
    Aluno alunos[TAMANHO];

    for (int i = 0; i < TAMANHO; i++) {
        printf("==== %d ALUNO ====\n", i+1);
        printf("Nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        for (int n = 0; n < 3; n++) {
            printf("%dº nota: ", n+1);
            scanf("%d", &alunos[i].notas[n]);
        }

        getchar();
    }

    maiorMedia(alunos);
}