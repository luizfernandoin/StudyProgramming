/*
​Faça um programa que possua um menu com as seguintes opções: 1 - Cadastrar
dados de uma pessoa (nome e cpf) 2- Listar os dados de todas as pessoas
cadastradas no sistema e 3 - Sair. Implemente uma função para exibir o menu e
retornar o valor correspondente à opção selecionada pelo usuário, uma função para
cadastrar dados de uma pessoa e outra para listar os dados das pessoas
cadastradas.
Obs.: Definir um valor máximo de pessoas que podem ser cadastradas.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa{
    char nome[20];
    int cpf;
    struct pessoa *prox;
} Pessoa;

int menu() {
    int opcao;

    printf("\n==== MENU ====");
    printf("\n1 - Cadastrar usuario");
    printf("\n2 - Listar usuarios");
    printf("\n3 - Sair");
    printf("\n Informe a opção desejada [1 - 3]: ");
    scanf("%d", &opcao);

    return opcao;
}

void listarUsuarios(Pessoa *pessoas) {
    
}

Pessoa cadastrarUsuario(Pessoa * pessoas) {
    Pessoa *pessoa = (Pessoa *)malloc(sizeof(Pessoa));
    pessoa->prox = NULL;
    
    printf("---- Cadastro de Usuario");
    printf("Nome: ");
    fgets(pessoa->nome, sizeof(pessoa->nome), stdin);
    printf("CPF: ");
    scanf("%d", &pessoa->cpf);

    getchar();
    
    return *pessoa;
}

void main() {
    Pessoa pessoas;
    int opcao;
    
    do {
        opcao = menu();

        switch (opcao) {
        case 1:
            cadastrarUsuario();
            break;
        case 2:
            listarUsuarios();
            break;
        }
    } while (opcao != 3);
}