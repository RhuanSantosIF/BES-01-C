#include <stdio.h>

int main() {

    int dia;
    printf("Digite a idade de uma pessoa em dias: ");
    scanf("%d", &quantidade_dias);
    int as = quantidade_dias / 360;
    int m = (quantidade_dias % 360) / 30;
    int d = (quantidade_dias % 360) % 30;
    printf("A idade da pessoa é: %d anos, %d meses e %d dias\n", anos, meses, dias);

    return 0;
}
