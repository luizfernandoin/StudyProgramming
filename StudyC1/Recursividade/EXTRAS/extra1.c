/*
Escreva um programa em C que leia um número inteiro N e verifique a quantidade de
algarismos desse número. A verificação deve ser feita por meio de um subprograma
recursivo. 
*/

#include <stdio.h>
#include <conio.h>

int totalAlgarismos(int n){
    if (n == 0){
        return 0;
    }
    
    return 1 + totalAlgarismos(n / 10);
}

void main(){
    int num;
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    printf("O numero possui %d algarismos.", totalAlgarismos(num));

    getch();
}