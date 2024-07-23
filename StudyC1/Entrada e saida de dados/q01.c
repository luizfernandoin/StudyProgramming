#include <stdio.h>

void main(){
    int n1, n2, n3;

    printf("Digite o 1� n�mero: ");
    scanf("%i", &n1);
    printf("Digite o 2� n�mero: ");
    scanf("%i", &n2);
    printf("Digite o 3� n�mero: ");
    scanf("%i", &n3);

    int media = (n1 + n2 + n3)/3;
    printf("\7M�dia: %i", media);
}
