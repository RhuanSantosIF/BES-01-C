#include <stdio.h>

int main() {

    double c, reais, iof, t;
    printf("Digite o valor da compra em dolar:");
    scanf("%lf", &c);
    printf("Digite a taxa de cambio:");
    scanf("%lf", &t);
    reais = c * t;
    iof = reais * 0.0638;
    double t = reais + iof;
    printf("Valor da compra em reais (sem IOF): %.2lf\n", reais);
    printf("Valor do IOF: %.2lf\n", iof);
    printf("Valor total cobrado: %.2lf\n", t);

    return 0;
}
