#include <stdio.h>

void main() {
    float tot_questoes, tot_acertos;

    printf("Total de Quest�es: ");
    scanf("%f", &tot_questoes);

    printf("Total de acertos do candidato: ");
    scanf("%f", &tot_acertos);

    int tot_erros = tot_questoes - tot_acertos;
    float percentual_acertos = (tot_acertos / tot_questoes) * 100;
    float percentual_erros = (tot_erros / tot_questoes) * 100;


    printf("Percentual de acertos: %.1f%%\n", percentual_acertos);
    printf("Percentual de erros: %.1f%%\n", percentual_erros);
}

