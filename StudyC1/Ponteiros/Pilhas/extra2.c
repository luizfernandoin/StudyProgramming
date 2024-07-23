/*
Escreva um subprograma que receba um ponteiro para uma pilha e calcule a soma de todos os numeros armazenados na pilha.
*/

int somaNumerosPilha(Pilha * pilha){
    int total=0;
    Nodo * aux = pilha->topo;
    while (aux!=NULL)
    {
        total+=aux->num;
        aux = aux->proximo;
    }
    return total;
}