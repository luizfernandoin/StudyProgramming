/*
Escreva um programa em C que leia um número inteiro N positivo e imprima a figura
abaixo. A impressão deve ser realizada por meio de um subprograma recursivo.

Caso de Teste
N = 5 

Resposta
*
**
***
****
*****
*/

#include <stdio.h>
#include <conio.h>

void imprimirAsteriscos(int num, int cont){
     if (cont <= num){
          for (int c = cont; c > 0; c--){
               printf("*");
          }
          printf("\n");
          imprimirAsteriscos(num, cont + 1);
     }
}

void main(){
     int num;
     printf("Informe um numero: ");
     scanf("%d", &num);
     imprimirAsteriscos(num, 1);
}