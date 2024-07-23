#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int numero1, numero2, multiplo;

    printf("1º Número: ");
    scanf("%d", &numero1);

    printf("2º Número: ");
    scanf("%d", &numero2);

    if (numero1 <= numero2){
        printf("Multiplos: ");
        for (multiplo = numero1; multiplo <= numero2; multiplo += numero1){
            if (multiplo + numero1 > numero2) {
                printf("%d", multiplo);
            }
        }
    }
    else {
        printf("O número a não possue multiplos menores que b!");
    }

    return 0;
}

