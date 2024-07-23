/*
Escreva um subprograma recursivo que receba como entrada o termo inicial e a
razão de uma progressão aritmética e um número inteiro positivo N e calcule o
enésimo termo da progressão.
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int enesimoTermo(int inicio, int razao, int num){
    if (num == 1){
        return inicio;
    }

    return inicio + enesimoTermo(inicio, razao, num-1);
}

/*
2
4 - pg2 + 2
6
8
10
12
14
16
*/

void main(){
    int num, razao, limite;
    printf("Informe um numero: ");
    scanf("%d", &num);
    printf("Informe a razao: ");
    scanf("%d", &razao);
    printf("Informe o limite: ");
    scanf("%d", &limite);
    printf("%d", enesimoTermo(num, razao, limite));

    getch();
}