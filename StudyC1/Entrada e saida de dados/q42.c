/*Escreva um programa que leia o peso e a altura de uma pessoa e determine o seu
índice de massa corporal.*/


#include <stdio.h>

void main() {
    float peso, altura;
    printf("Informe o peso: ");
    scanf("%f", &peso);
    printf("Informe a altura: ");
    scanf("%f", &altura);
    float imc = peso / (altura * altura);

    printf("Peso: %.2f\nAltura: %.2f\nIMC: %.2f\n", peso, altura, imc);
    getch();
}
