/*
Escreva um subprograma recursivo que receba como parâmetros de entrada dois
números inteiros M e N e calcule a soma de todos os números do intervalo [M, N].
*/

#include <stdio.h>
#include <conio.h>

int somaIntervalo(int num1, int num2){
    if (num1 == num2){
        return num1;
    }

    return num1 + somaIntervalo(num1 + 1, num2);
}

void main(){
    int num1, num2;
    printf("Informe um numero: ");
    scanf("%d%d", &num1, &num2);
    printf("%d", somaIntervalo(num1, num2));
    getch();
}
//1 5 = 1 + 2 + 3 + 4 + 5