/*Escreva um programa que leia dois operandos inteiros e um operador (+, -, *, /) e
aplique o operador lido aos dois operandos, na ordem em que os mesmos foram
digitados.*/

#include <stdio.h>
#include <math.h>

void main() {
    int num1, num2, resultado;
    char operador;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);
    printf("Informe o operador [+, -, *, /]: ");
    scanf(" %c", &operador);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("%d x %d = %d\n", num1, num2, resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("%d / %d = %d\n", num1, num2, resultado);
            } else {
                printf("N�o � poss�vel dividir por zero.\n");
            }
            break;
        default:
            printf("Opera��o inv�lida.\n");
            break;
    }

    getch();
}
