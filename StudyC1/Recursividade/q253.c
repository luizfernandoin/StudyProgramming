/*
Escreva um subprograma recursivo que receba como entrada um número inteiro N
positivo e provoque um salto de N linhas na tela do usuário. 
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

void saltarLinhas(int num){
    num = abs(num);
    if (num > 0){
        printf("\n");
        saltarLinhas(num - 1);
    }
}

void main(){
    int num;
    printf("Informe um numero: ");
    scanf("%d", &num);
    saltarLinhas(num);

    getch();
}