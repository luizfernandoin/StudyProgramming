#include <stdio.h>

void main() {
    float lado;

    printf("Lado do quadrado: ");
    scanf("%f", &lado);

    printf("A �rea do quadrado � %.2f e o perimentro � %.2f.", lado * lado, lado * 4);
}
