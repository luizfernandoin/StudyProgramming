/*Escreva um programa que leia um número inteiro N e verifique se ele pertence à série
de Fibonacci.
*/


#include <stdio.h>
#include <string.h>

void main() {
    int termoAtual = 1, termoAnterior = 0, proximoTermo;
    int limite, pertence=0;

    printf("Informe o numero que deseja verificar: ");
    scanf("%d", &limite);

    while (proximoTermo <= limite){
        if (proximoTermo == limite && proximoTermo != 0) {
            printf("O numero %d pertence a serie de Fibonacci!", limite);
            pertence = 1;
        }
        proximoTermo = termoAnterior + termoAtual;
        termoAnterior = termoAtual;
        termoAtual = proximoTermo;
    }
    if (pertence == 0){
        printf("O numero %d nao pertence a serie de Fibonacci!", limite);
    }
}
