/*
Escreva um subprograma recursivo que receba como entrada um número inteiro não
negativo e calcule o seu fatorial.
*/

#include <stdio.h>
#include <conio.h>

int fatorial(int num){
    if (num == 1){
        return num;
    }

    return num * fatorial(num - 1);
}

//10 = 10 * 9 * 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1

void main(){
    int num;
    printf("Informe um numero: ");
    scanf("%d", &num);
    printf("%d", fatorial(num));
    getch();
}