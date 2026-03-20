#include <stdio.h>

int main() {

    double v1, v2, media;
    printf("Digite o valor pago e o preco do produto: ");
    scanf("%lf %lf", &v1, &v2);
    media = (v1 + v2) / 2;
    printf("A media dos valores e: %.2lf", media);

    return 0;
}
