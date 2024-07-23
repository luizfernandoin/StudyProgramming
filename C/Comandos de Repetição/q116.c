/*Escreva um programa que leia o nome, o sexo e a idade de um grupo de 20 pessoas e
calcule o percentual de mulheres que tem entre 18 e 21 anos.*/

#include <stdio.h>
#include <string.h>
const int TOTAL = 20;

void main() {
    char nome[50], sexo[20];
    int k, idade, totMulheres=0;

    for (k=1; k<=TOTAL; k++){
        printf("Informe Nome e Sexo: ");
        scanf("%s%s", &nome, &sexo);
        printf("Informe sua idade: ");
        scanf("%d", &idade);

        int k;
        for (k = 0; sexo[k]; k++) {
            sexo[k] = toupper(sexo[k]);
        }

        if (idade >= 18 && idade <= 21){
            if (strcmp(sexo, "MULHER") == 0 || strcmp(sexo, "FEMININO") == 0){
                totMulheres++;
            }
        }

    }

    float perMulheres = ((float)totMulheres / TOTAL) * 100;
    printf("O percentual de mulheres eh %.0f%", perMulheres);

    getch();
}
