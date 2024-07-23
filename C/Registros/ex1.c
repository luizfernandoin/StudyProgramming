#include <stdio.h>
#include <string.h>

const int TAMANHO = 5;

typedef struct tipoPessoa
{
    char nome[50];
    char sexo;
    int idade;
} Pessoa;

void lerPessoa(Pessoa *p){ //* é um ponteiro, recebe um endereço de memoria;
    fflush(stdin);
    printf("Informe o nome da pessoa: ");
    gets(p->nome); //Preciso informar qual o registro e qual o campo;
    //(*p).nome
    fflush(stdin);
    printf("Informe o sexo: ");
    scanf("%c", &p->sexo);
    fflush(stdin);
    printf("Informe a idade: ");
    scanf("%d", &p->idade);
}

void imprimitPessoa(Pessoa vet[TAMANHO], char sexo){
    for (int k=0; k<TAMANHO; k++){
        if (vet[k].sexo == sexo){
            printf("%s\n", vet[k].nome);
            printf("%c\n", vet[k].sexo);
            printf("%d\n\n", vet[k].idade);
        }
    }
}

void main(){
    Pessoa vet[TAMANHO]; //Tipo dos dados que constituem o vetor
    //Para usar o nome: struct tipoPessoa vet[TAMANHO];
    for (int k=0; k<TAMANHO; k++){
        lerPessoa(&vet[k]); //&Mando o endereço de memoria de vet[k];
    }
    printf("Pessoas do sexo masculino:\n");
    imprimitPessoa(vet, 'm');
    printf("Pessoas do sexo feminino:\n");
    imprimitPessoa(vet, 'f');
}
