#include <stdio.h>

int main(){

    double c, valor_venda, r;
    printf("Digite a quantidade de carros vendidos: ");
    scanf("%lf", &c);
    printf("Digite o valor total das vendas: ");
    scanf("%lf", &valor_venda);
    r = 1621.00 + (c * 150) + (valor_venda * 0.5);
    printf("O salario total do vendendor em R$: %.2lf", r);

    return 0;
}
