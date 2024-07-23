/*A Cifra de C�sar � um m�todo de criptografia em que cada letra da mensagem original
� substitu�da por outra e a dist�ncia entre cada letra original e a sua substituta na
mensagem enviada � sempre a mesma. Por exemplo, se a letra a da mensagem �
substitu�da pela letra f na mensagem enviada, ent�o a letra b ser� substitu�da pelo g, o
c pelo h, o d pelo i e assim sucessivamente, at� que a letra y ser� substitu�da pelo d e o
z pela letra e. Com base nestas informa��es, escreva um programa que leia um
caractere representando uma das letras da mensagem original, outro caractere
representando a letra que vai substitu�-lo na nova mensagem, e um terceiro caractere
representando outra letra da mensagem original e determine a letra que vai substitu�-
la na nova mensagem.*/

#include <stdio.h>


void main() {
    char letra1, letra2, letra3;

    printf("Digite a primeira letra: ");
    scanf("%c", &letra1);
    fflush(stdin);
    printf("Digite a letra que ira substituir: ");
    scanf("%c", &letra2);
    fflush(stdin);
    printf("Digite a segunda letra: ");
    scanf("%c", &letra3);

    int chave = letra2 - letra1;
    char substituicao = (int)letra3 + chave;

    printf("A chave � %d e a letra %c foi substituida por %c", chave, letra3, substituicao);
    getch();
}
