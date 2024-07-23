/*
Escreva um subprograma que receba um ponteiro para uma pilha e um numero inteiro N e verifique quantas vezes o numero N aparece na pilha.
*/

int verificarNumeroPilha(Pilha * pilha, int num){
    int cont = 0;
    Nodo * aux = pilha->topo;
    while (aux!=NULL)
    {
        if (aux->num == num){
            cont++;
        }
        aux = aux->proximo;
    }
    return cont;
}