#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int k;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("Digite um numero inteiro k: ");
    scanf("%d", &k);

    // Calcula o comprimento da palavra
    int comprimento = strlen(palavra);

    if (k <= comprimento && k > 0) {
        printf("A k-esima letra da palavra '%s' eh '%c'\n", palavra, palavra[k-1]);
    }
    else {
        printf("O valor de k eh invalido para a palavra digitada\n");
    }

    return 0;
}
