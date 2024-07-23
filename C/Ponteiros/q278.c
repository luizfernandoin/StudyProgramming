/*
Escreva um programa que leia vários números inteiros até ler o número 0, que não
deverá ser processado. Após finalizar a leitura, o programa deve imprimir todos os
números lidos na ordem inversa a que eles foram digitados pelo usuário. 
*/


#include <stdio.h>
#include <stdlib.h>

typedef struct nodo
{
    int num;
    struct nodo * proximo;
} Nodo;

//Nodo é uma convenção para especificar os registros de estruturas de dados.

typedef struct
{
    Nodo * topo;
} Pilha;

Pilha * criarPilha(){//|->Tipo de dado que vai ocupar aquela memoria.
    Pilha * pilha = (Pilha *)malloc(sizeof(Pilha));
    //malloc -> pedir mais memoria ao processador.
    //sizeof(Pilha) -> o total de memoria deve ser suficiente para armazenar uma Pilha.
    pilha->topo = NULL;
    return pilha;
}

void push(Pilha * pilha, int n){
    Nodo * novo = (Nodo *)malloc(sizeof(Nodo));
    novo->num = n;
    novo->proximo = pilha->topo;
    pilha->topo = novo;
}

int pop(Pilha * pilha){
    Nodo * aux = pilha->topo;
    int resultado = aux->num;
    pilha->topo = aux->proximo;
    free(aux);
    return resultado;
}

int estaVazia(Pilha * pilha){
    if (pilha->topo == NULL){
        return 1;
    }
    return 0;
}

void main(){
    int n;
    Pilha * pilha = criarPilha();
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);
    while (n != 0)
    {
        push(pilha, n);
        printf("Informe um numero inteiro: ");
        scanf("%d", &n);
    }
    printf("Os numeros informados foram: ");
    while (estaVazia(pilha) == 0)
    {
        printf("%d\n", pop(pilha));
    }
}