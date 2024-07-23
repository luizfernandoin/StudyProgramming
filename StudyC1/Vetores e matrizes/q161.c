/*
Escreva um programa que leia um vetor de vinte caracteres e verifique se o vetor é
ou não um palíndromo.
*/

#include <stdio.h>
const int COLUNAS = 20;
const int LINHAS = 2;
int tot = 0;

void main(){
    char mat[LINHAS][COLUNAS];
    char controle;

    for(int k=0; k<LINHAS; k++){
        for(int i=0; i<COLUNAS; i++){
            if(k == 0){
                printf("Informe um numero: ");
                scanf("%s", &mat[k][i]);
            }else if(k > 0 && i<COLUNAS) {
                controle = mat[k-1][i];
                int final = (COLUNAS - 1) - i;
                mat[1][i] = mat[k-1][final];
                mat[1][final] = controle;
                if(mat[k][i] == mat[k-1][i]){
                    tot++;
                }
            }
        }
    }

    if(tot == COLUNAS){
        printf("Palindromo.");
    }else {
        printf("Nao eh palindromo.");
    }

    getch();
}
