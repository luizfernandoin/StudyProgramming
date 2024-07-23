/*Escreva um programa que leia as horas, os minutos e o fuso hor�rio e converta o
hor�rio lido para o fuso hor�rio informado. O fuso hor�rio deve ser informado como
um n�mero inteiro. Caso o valor seja positivo, o programa deve considerar que o fuso
hor�rio digitado � maior do que o atual. Caso o valor seja negativo, o programa deve
considerar que o fuso hor�rio � menor do que o atual. Caso o valor seja 0, o programa
deve considerar que o fuso hor�rio � o mesmo do atual. A resposta do programa deve
ser dada no formato hh:mm hs. Por exemplo, se o hor�rio lido foi 10 h e 30 min e o
fuso hor�rio for 4, a resposta do programa deve ser 14:30 hs. Por outro lado, se o
hor�rio lido foi 10 h e30 min e o fuso hor�rio for -4, a resposta do programa deve ser
06:30 hs. Se o hor�rio lido for 22 h e 30 min e o fuso-hor�rio for 3, a resposta deve ser
01:30 hs. Se o hor�rio lido for 2 h e 30 min e o fuso hor�rio for -3, a resposta deve ser
23:30 hs. O hor�rio referente � meia-noite deve ser representado da forma 00:00 hs.*/

#include <stdio.h>

void main() {
    int hora, minuto, fuso_horario;

    printf("Digite a hora (0 a 23): ");
    scanf("%d", &hora);
    printf("Digite o minuto (0 a 59): ");
    scanf("%d", &minuto);
    printf("Digite o fuso horario (-12 a 12): ");
    scanf("%d", &fuso_horario);

    if (fuso_horario == 0) {
        printf("O horario permanece o mesmo: %02d:%02d hs\n", hora, minuto);
    }else {
        hora = hora + fuso_horario;
        if (hora < 0) {
            hora = 24 + hora;
        }else if (hora >= 24) {
            hora = hora - 24;
        }
        printf("Horario no fuso horario informado: %02d:%02d hs\n", hora, minuto);
    }
    getch();
}
