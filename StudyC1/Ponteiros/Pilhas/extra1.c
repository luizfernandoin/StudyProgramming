/*
Escreva um subprograma que receba um ponteiro para uma pilha e conte quantos registros existem na pilha.
*/


int tamanho(Pilha * pilha){
    int cont = 0;
    Nodo * aux = pilha->topo;
    while (aux!=NULL)
    {
        cont++;
        aux = aux->proximo;
    }
    return cont;
}
//Calcular o tamanho da pilha com recursividade:
int tamanhoRecursivo(Nodo * inicio){
    if (inicio==NULL){
        return 0;
    }
    return 1 + tamanhoRecursivo(inicio->proximo);
}