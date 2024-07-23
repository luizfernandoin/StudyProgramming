/*Escreva um programa que leia os valores das coordenadas x e y do centro de uma
circunfer�ncia e o valor do seu raio e, a seguir, leia as coordenadas x e y de um ponto e
verifique se este ponto est� localizado dentro da circunfer�ncia.*/

#include <stdio.h>
#include <math.h>

void main() {
    float pontoX, pontoY, raio, centroX, centroY;

    printf("Informe as coordenadas x e y do centro da circunferencia: ");
    scanf("%f%f", &centroX, &centroY);
    printf("Informe as coordenadas x e y do ponto: ");
    scanf("%f%f", &pontoX, &pontoY);
    printf("Informe o raio da circunferencia: ");
    scanf("%f", &raio);

    float distancia = sqrt(pow(pontoX - centroX, 2) + pow(pontoY - centroY, 2));
    printf("%f %f", distancia, raio);

    if (distancia > raio) {
        printf("O ponto (%.1f, %.1f) nao esta na circunferencia!", pontoX, pontoY);
    }else if (distancia < raio) {
        printf("O ponto (%.1f, %.1f) esta na circunferencia!", pontoX, pontoY);
    }else {
        printf("O ponto (%.1f, %.1f) esta no arco da circunferencia!", pontoX, pontoY);
    }

    getch();
}
