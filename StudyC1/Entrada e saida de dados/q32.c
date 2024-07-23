/*O carro de João consegue percorrer em média 14 km consumindo 1 litro de
combustível. Escreva um programa que leia o valor da distância que João vai percorrer
durante uma viagem e o preço atual de um litro de combustível e calcule quanto ele
deverá gastar com combustível durante a viagem.*/

#include <stdio.h>


void main() {
    float distancia, preco;

    printf("Distancia para ser percorrida: ");
    scanf("%f", &distancia);
    printf("Preço atual do Litro de combustivel: ");
    scanf("%f", &preco);

    float valor = (distancia / 14) * preco;

    printf("O valor final necessario é: R$%.2f", valor);
}
