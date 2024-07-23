/*Escreva um programa que leia o peso e a altura de uma pessoa e verifique se ela est�
dentro da faixa de peso adequada, ou se est� abaixo ou acima do peso. Caso a pessoa
esteja fora do peso adequado o programa deve informar quantos Kg ela deve ganhar
ou perder para ficar dentro da faixa adequada. Para resolver este programa, considere
que o IMC ideal para uma pessoa deve estar entre 18 e 25.*/

#include <stdio.h>
#include <math.h>

void main() {
    float peso, altura, necessita;

    printf("Informe seu peso: ");
    scanf("%f", &peso);
    printf("Informe sua altura: ");
    scanf("%f", &altura);

    float imc = peso / pow(altura, 2);

    if (imc >= 18 && imc <= 25) {
        printf("Seu IMC eh %.1f, peso ideal!", imc);
    } else {
        if (imc < 18) {
            necessita = (18 * pow(altura, 2)) - peso;
            printf("Seu IMC eh %.1f, abaixo do peso! Precisa de %.1f Kg!", imc, necessita);
        }
        else {
            necessita = peso - (25 * pow(altura, 2));
            printf("Seu IMC eh %.1f, acima do peso! Precisa diminuir %.1f Kg!", imc, necessita);
        }
    }
    getch();
}
