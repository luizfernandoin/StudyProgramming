#include <stdio.h>
#include <stdlib.h>

typedef struct nodo
{
    int numero;
    struct nodo * proximo;
} Nodo;

typedef struct
{
    Nodo * topo;
} Pilha;

Pilha * criarPilha(){
    Pilha * pilha = (Pilha *)malloc(sizeof(Pilha));
    pilha->topo = NULL;
    return pilha;
}

int push(Pilha * pilha, int num){
    Nodo * novo = (Nodo *)malloc(sizeof(Nodo));
    novo->numero = num;
    novo->proximo = pilha->topo;
    pilha->topo = novo;
}

int pop(Pilha * pilha){
    Nodo * aux = pilha->topo;
    int resultado = aux->numero;
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















/*
Escreva um programa que leia um numero inteiro não negatico e use uma pilha para imprimir o seu valor correspondente em binario.
*/


void main(){
    int n;
    Pilha * pilha = criarPilha();
    printf("Informe um numero: ");
    scanf("%d", &n);
    while (n != 0)
    {
        push(pilha, n);
        printf("Informe um numero: ");
        scanf("%d", &n);
    }
    
    while (estaVazia(pilha) == 0)
    {
        printf("%d\n", pop(pilha));
    }
}