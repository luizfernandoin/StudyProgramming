#include <stdio.h>

int main() {
    float peso, altura, peso_total, altura_total;

    for (int tot_equipes = 1; tot_equipes <= 4; tot_equipes++){
        float peso_dupla = 0, altura_dupla = 0;

        for (int tot_atletas = 1; tot_atletas <= 2; tot_atletas++){
            printf("\nPeso: ");
            scanf("%f", &peso);

            printf("Altura: ");
            scanf("%f", &altura);

            peso_dupla += peso;
            altura_dupla += altura;
            peso_total += peso;
            altura_total += altura;
        }

        printf("Peso m�dio da dupla: %.2f\n", peso_dupla/2);
        printf("Altura m�dia da dupla: %.2f\n", altura_dupla/2);
    }

    printf("\nAltura m�dia total: %.2f", altura_total/8);
    printf("Peso m�dio total: %.2f", peso_total/8);

    return 0;
}

