#include <stdio.h>
#include <string.h>

void main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s", &palavra);

    int tamanho = strlen(palavra);

    printf("A palavra %c possui um tamanho igual a %d\n", palavra, tamanho);
}
