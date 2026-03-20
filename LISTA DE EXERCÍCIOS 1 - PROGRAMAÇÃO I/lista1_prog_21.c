#include <stdio.h>

int main(){
    double vproducao, timposto, tlucro, trasporte,r;

    printf("Digite custo de produção, custo de transporte, percentual de impostos e percentual de margem de lucro (separados por espaco): ");
    scanf("%lf %lf %lf %lf", &vproducao, &trasporte, &timposto, &tlucro);
    r = vproducao + (vproducao * (timposto / 100) + vproducao * (tlucro / 100) + trasporte);
    printf("Preco final para o cliente é %.2lf", r);
    return 0;
}
