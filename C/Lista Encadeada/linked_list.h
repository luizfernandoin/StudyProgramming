#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct nodo Nodo;
typedef struct lista Lista;

Lista *criarLista();

// Verificar se a lista está vazia
int listaVazia(Lista *lista);

// Obter o tamanho da lista
int tamanhoLista(Lista *lista);

void inserirInicio(Lista *lista, int data);

// Inserir em uma posição específica
void inserirNaPosicao(Lista *lista, int data, int pos);

void inserirFinal(Lista *lista, int data);

// Remover um elemento específico da lista
void removerElemento(Lista *lista, int data);

// Remover um elemento na posição específica
void removerNaPosicao(Lista *lista, int pos);

void removerInicio(Lista *lista);

void removerFinal(Lista *lista);

void imprimirLista(Lista *lista);

// Buscar um elemento na lista
void buscarElemento(Lista *lista, int pos);

void deletarLista(Lista *lista);

#endif