/*
Escreva um subprograma que receba um ponteiro para uma pilha e imprima todos os numeros armazenados na pilha.
*/

void numerosInformados(Pilha * pilha){
    Nodo * aux = pilha->topo;
    while (aux!=NULL)
    {
        printf("%d\n", aux->num);
        aux = aux->proximo;
    }
    printf("\n");
}