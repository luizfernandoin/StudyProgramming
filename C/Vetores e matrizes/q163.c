/*
O IFPB precisa de um programa que faça a correção automática das provas do seu
teste de seleção. A prova, que é a mesma para todos os alunos, consiste de dez
questões objetivas, cuja resposta deve ser (a, b, c, d ou e). O programa deve ler o
gabarito da prova e, a seguir, o nome de um candidato e as opções que aparecem no
seu cartão de respostas. Para cada candidato, o programa deve imprimir o seu
percentual de acertos. O processamento deve ser encerrado quando for encontrado
um candidato com o nome ´fim’, que não deve ser processado. O programa deve
imprimir também a pontuação média dos candidatos.
*/

#include <stdio.h>
const int TAMANHO = 10;

void main(){
    char vetGabarito[TAMANHO];
    char vetRespostas[TAMANHO];
    int tot = 0;
    char nome[30];

    for(int k=0; k<TAMANHO; k++){
        printf("Questão %d: ", k+1);
        scanf("%s", &vetGabarito[k]);
    }

    while(strcmp(nome, "fim") != 0){
        fflush(stdin);
        printf("Informe seu nome: ");
        gets(nome);

        if(strcmp(nome, "fim") != 0){
            for(int k=0; k<TAMANHO; k++){
                printf("Resposta %d: ", k+1);
                scanf("%s", &vetRespostas[k]);
            }

            for(int k=0; k<TAMANHO; k++){
                if(vetRespostas[k] == vetGabarito[k]){
                    tot++;
                }
            }
            int percent = 100 * tot/TAMANHO;
            printf("%s acertou %d%%\n", nome, percent);
        }
    }

    getch();
}
