/*Carlos chegou ao aeroporto para fazer o check-in do seu v�o. Ao entrar na fila de
passageiros, ele percebeu que a empresa a�rea tinha 5 guich�s para fazer o check-in
dos passageiros, e que estes guich�s eram numerados de 1 a 5. Considerando que os
guich�s iam come�ar a realiza��o dos check-ins no exato momento em que Carlos
entrou na fila, e que cada check-in � realizado em exatamente 15 minutos, escreva um
programa que leia um n�mero inteiro positivo que corresponde � posi��o de Carlos na
fila e determine o n�mero do guich� no qual ele ser� atendido e o tempo que ele vai
ter que esperar para ser atendido.*/

#include <stdio.h>
const CHECK = 15;

void main() {
    int posicao;

    printf("Informe a posi��o de Carlos na fila: ");
    scanf("%d", &posicao);

    int resto = (posicao - 1) % 5;
    int guiche = resto + 1;
    int quociente = (posicao - 1) / 5;
    int tempo = quociente * CHECK;

    printf("Voce sera atendido no %d em %d minutos.", guiche, tempo);
    getch();
}
