#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    int data;
    struct nodo *prox;
} Nodo;

typedef struct lista {
    Nodo *inicio;
    int tamanho;
} Lista;


Lista *criarLista(){
    Lista *lista = (Lista*)malloc(sizeof(Lista));
    lista->inicio = NULL;
    lista->tamanho = 0;

    return lista;
}

int listaVazia(Lista *lista) {
    return (tamanhoLista(lista) != 0) ? 0 : 1;
}

int tamanhoLista(Lista *lista) {
    return lista->tamanho;
}

void inserirInicio(Lista *lista, int data) {
    Nodo *novoNodo = (Nodo *)malloc(sizeof(Nodo));
    novoNodo->prox = lista->inicio;
    novoNodo->data = data;

    lista->inicio = novoNodo;
    lista->tamanho++;
}

void inserirNaPosicao(Lista *lista, int data, int pos) {
    int estaVazia = listaVazia(lista);

    Nodo *novoNodo = (Nodo *)malloc(sizeof(Nodo));
    novoNodo->data = data;
    novoNodo->prox = NULL;

    if (estaVazia) {
        lista->inicio = novoNodo;
    } else {
        if (pos == 0){
            novoNodo->prox = lista->inicio;
            lista->inicio = novoNodo;
        } else {
            Nodo *aux = lista->inicio;
            int i;
            for (i = 0; aux != NULL && i < pos - 1; i++) {
                aux = aux->prox;
            }

            if (aux == NULL) {
                inserirFinal(lista, data);
                return;
            }
            
            novoNodo->prox = aux->prox;
            aux->prox = novoNodo;
        }
    }

    lista->tamanho++;
}

void inserirFinal(Lista *lista, int data) {
    Nodo *novoNodo = (Nodo *)malloc(sizeof(Nodo));
    novoNodo->data = data;
    novoNodo->prox = NULL;
     
    if (lista->inicio == NULL) {
        lista->inicio = novoNodo;
    } else {
        Nodo *aux = lista->inicio;

        while (aux->prox != NULL) {
            aux = aux->prox;
        }

        aux->prox = novoNodo;
    }

    lista->tamanho++;
}

void removerInicio(Lista *lista) {
    Nodo *aux = lista->inicio;
    lista->inicio = aux->prox;

    free(aux);
}

void removerElemento(Lista *lista, int data) {
    Nodo *aux = lista->inicio;
    Nodo *ant = NULL;

    while (aux != NULL) {
        if (aux->data == data) {
            if (ant == NULL) {
                lista->inicio = aux->prox;
            } else {
                ant->prox = aux->prox;
            }
            free(aux);
            lista->tamanho--;
            aux = (ant == NULL) ? lista->inicio : ant->prox;
        } else {
            ant = aux;
            aux = aux->prox;
        }
    }
}

void removerNaPosicao(Lista *lista, int pos) {
    int estaVazia = listaVazia(lista);
    /* [] -> [1] -> [] -> [] pos = 1 , i = 0
        ^
       aux
    

    */
    if (estaVazia || pos < 0 || pos >= tamanhoLista(lista)) {
        printf("A posição não existe!");
    } else {
        if (pos == 0){
            removerInicio(lista);
        } else if (pos == tamanhoLista(lista) - 1) {
            removerFinal(lista);
        } else {
            Nodo *aux = lista->inicio;
            Nodo *remover = NULL;

            int i;
            for (i = 0; i < pos - 1; i++) {
                aux = aux->prox;
            }

            remover = aux->prox;
            aux->prox = remover->prox;
            free(remover);
        }
        
        lista->tamanho--;
    }
}

void removerFinal(Lista *lista) {
    Nodo *aux = lista->inicio;
    while (aux->prox != NULL) {
        aux = aux->prox;
    }

    free(aux);
}

void imprimirLista(Lista *lista) {
    Nodo *aux = lista->inicio;

    while (aux != NULL)
    {
        printf("%d -> ", aux->data);
        aux = aux->prox;
    }

    printf("NULL\n");
}

int buscarElemento(Lista *lista, int pos) {
    Nodo *aux = lista->inicio;

    int i;
    for (i = 0; i < pos; i++){
        aux = aux->prox;
    }
    
    return aux->data;
}

void deletarLista(Lista *lista) {
    Nodo *aux = lista->inicio;

    while (aux != NULL) {
        lista->inicio = aux->prox;
        free(aux);
        aux = lista->inicio;
    }

    free(lista);
}


void main() {
    Lista *lista = criarLista();

    inserirInicio(lista, 9);

    inserirFinal(lista, 10);

    inserirInicio(lista, 1);

    inserirNaPosicao(lista, 5, 4);

    imprimirLista(lista);

    removerElemento(lista, 1);

    imprimirLista(lista);

    deletarLista(lista);
}