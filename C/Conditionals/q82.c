/*Escreva um programa que leia as tr�s notas de um aluno e verifique se o mesmo est�
aprovado por m�dia, se far� prova final ou se est� reprovado por m�dia. Caso o aluno
tenha que fazer a prova final, o programa deve informar quanto ele ter� que tirar na
prova. Voc� pode considerar que a m�dia m�nima para a aprova��o por m�dia � 7 e
que a m�dia m�nima para fazer a prova final � 4. O c�lculo da prova final � calculado
atrav�s da f�rmula abaixo.*/

#include <stdio.h>
#include <math.h>

void main() {
    float nota1, nota2, nota3;

    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);

    float media = (nota1 + nota2 + nota3) / 3;

    if (media >= 7) {
        printf("O aluno teve media %.1f e esta aprovado!", media);
    }else if (media >= 4) {
        media = (25 - (3 * media)) / 2;
        printf("O aluno esta na final e precisara de media %.1f!", media);
    }else {
        printf("O aluno teve media %.1f e esta reprovado!", media);
    }

    getch();
}
