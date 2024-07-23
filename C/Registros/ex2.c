/*
Escreva um programa que leia o nome, o sexo e a data de nascimento de um grupo de 10 pessoas e, após concluir a leitura, imprima os dados de todas as pessoas que nasceram no período entre os anos de 2002 e 2004.
*/

#include <stdio.h>
#include <string.h>
const int TAMANHO = 5;

typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;


typedef struct
{
    char nome[50];
    char sexo;
    Data anoNascimento;
} Pessoa;

void lerPessoa(Pessoa *p){
    fflush(stdin);
    printf("Informe o nome: ");
    gets(p->nome);
    fflush(stdin);
    printf("Informe o sexo: ");
    scanf("%c", &p->sexo);
    fflush(stdin);
    printf("Informe o dia, mes e ano de nascimento: ");
    scanf("%d%d%d", &p->anoNascimento.dia, &p->anoNascimento.mes, &p->anoNascimento.ano);
}

void imprimirPessoa(Pessoa pessoa){
    printf("%s\n", pessoa.nome);
    printf("%c\n", pessoa.sexo);
    printf("%d/%d/%d\n\n", pessoa.anoNascimento.dia, pessoa.anoNascimento.mes, pessoa.anoNascimento.ano);
}

void imprimirPessoaIntervalo(Pessoa vet[TAMANHO], int anoMenor, int anoMaior){
    for (int k=0; k<TAMANHO; k++){
        if (vet[k].anoNascimento.ano >= anoMenor && vet[k].anoNascimento.ano <= anoMaior){
            imprimirPessoa(vet[k]);
        }
    }
}

void main(){
    Pessoa vet[TAMANHO];

    for (int k=0; k<TAMANHO; k++){
        lerPessoa(&vet[k]);
    }
    imprimirPessoaIntervalo(vet, 2002, 2004);
}