#include <stdio.h>

int main(){

    double c, a, l, caixas;
    printf("Digite o comprimento, a altura, a largura e a quantidade de caixas: ");
    scanf("%lf %lf %lf %lf", &c, &a, &l, &caixas);
    double acaixa = 2 * (c * a + c * l + a * l);
    double atotal = acaixa * caixas * 1.1;
    printf("A quantidade de material necessária é: %.2lf ", atotal);

    return 0;
}
