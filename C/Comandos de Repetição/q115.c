/*Escreva um programa que leia o peso e a altura de um grupo de 20 pessoas e calcule o
percentual de pessoas abaixo do peso, o percentual de pessoas acima do peso e o
percentual de pessoas que estão dentro da faixa de peso adequada.*/

#include <stdio.h>
const int QUANTIDADE = 20;
const int PESO_MINIMO = 18;
const int PESO_MAXIMO = 25;

void main() {
    float peso, altura;
    float abaixoPeso=0, acimaPeso=0, idealPeso=0;
    int k;

    for (k=1; k<=QUANTIDADE; k++){
        printf("Informe o peso e altura: ");
        scanf("%f%f", &peso, &altura);

        float imc = peso/(altura*altura);

        if (imc < PESO_MINIMO){
            abaixoPeso++;
        }else if (imc > PESO_MAXIMO){
            acimaPeso++;
        }else {
            idealPeso++;
        }
    }

    abaixoPeso = ((float)abaixoPeso/QUANTIDADE) * 100;
    acimaPeso = ((float)acimaPeso/QUANTIDADE) * 100;
    idealPeso = ((float)idealPeso/QUANTIDADE) * 100;

    printf("ABAIXO DO PESO: %.1f\nACIMA DO PESO: %.1f\nPESO IDEAL: %.1f", abaixoPeso, acimaPeso, idealPeso);
    getch();
}
