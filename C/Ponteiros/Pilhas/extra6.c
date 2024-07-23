/*
Escreva um programa que leia um numero inteiro não negatico e use uma pilha para imprimir o seu valor correspondente em binario.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct nodo
{
    int num;
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
        push(pilha, n % 2);
        n /= 2;
    }
    printf("Os numeros informados foram: \n");
    while (estaVazia(pilha) == 0)
    {
        printf("%d\n", pop(pilha));
    }
}