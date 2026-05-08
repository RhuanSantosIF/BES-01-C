#include <stdio.h>

int main() {

    float s, v, c;
    printf("Digite o salario fixo: ");
    scanf("%f", &s);
    printf("Digite o total de vendas: ");
    scanf("%f", &v);

    if (v > 10000) {
        c = v * 0.15;
    } else {
        c = v * 0.075;
    }

    printf("Salario final: R$ %.2f\n", s + c);

    return 0;
}