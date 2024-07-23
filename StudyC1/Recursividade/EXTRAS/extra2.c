/*
Escreva um programa em C que leia um número inteiro N e um número inteiro positivo
k e identifique o k-ésimo algarismo do número N (da direita para a esquerda). A
verificação deve ser feita por meio de um subprograma recursivo, que deve receber
como parâmetros o número inteiro N e a posição K a ser verificada. Caso o valor de k
seja maior do que o número de algarismos do número N, a resposta deve ser 0.

   Caso de Teste             Resposta
N = 1987, K = 3      |9
N = 2020, K= 2       |2
N = 35587, K= 1      |7
N = 25, K = 3        |0
N = 2020, K=3        |0
*/


#include <stdio.h>
#include <conio.h>

int totalAlgarismos(int n){
    if (n == 0){
        return 0;
    }
    
    return 1 + totalAlgarismos(n / 10);
}

int kesimoAlgarismo(int num, int posicao){
    if (posicao < totalAlgarismos){
        
    }
}

void main(){
    int num, posicao;

    printf("Informe o numero a ser verificado: ");
    scanf("%d", &num);
    printf("Qual posição verificar? ");
    scanf("%d", &posicao);
}