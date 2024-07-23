#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float termo, razao, tot;

    printf("Termo inicial: ");
    scanf("%f", &termo);

    printf("Razão: ");
    scanf("%f", &razao);

    printf("Progressão aritmetica: ");

    for (tot = 1; tot <= 5; tot+=1){
        printf("%.1f; ", termo);
        termo += razao;
    }

    return 0;
}

