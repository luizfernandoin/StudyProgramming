#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int numero, elemento;

    printf("Número: ");
    scanf("%d", &numero);

    for (elemento = 1; elemento <= 10; elemento++){
        printf("%*s%dX%d=%d%*s\n", 20, "", elemento, numero, elemento*numero, 10, "");
    }

    return 0;
}
