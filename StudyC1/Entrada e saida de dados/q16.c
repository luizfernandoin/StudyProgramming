#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    char letra;

    printf("Informe uma letra: ");
    scanf("%c", &letra);

    printf("A letra minúscula '%c' em maiuscula é %c!", letra, toupper(letra));

    return 0;
}
