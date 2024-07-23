/*
Escreva um subprograma que receba um ponteiro para uma pilha e verifique qual é o maior numero armazenado na pilha.
*/

int maiorNumero(Pilha * pilha){
    int maior=0;
    Nodo * aux = pilha->topo;
    while (aux!=NULL)
    {
        if (aux->num > maior){
            maior = aux->num;
        }
        aux = aux->proximo;
    }
    return maior;
}