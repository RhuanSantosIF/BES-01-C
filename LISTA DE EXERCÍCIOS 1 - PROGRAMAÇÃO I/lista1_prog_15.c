#include <stdio.h>
#include <math.h>

int main() {
    
    double r, al, ar, l, gs, custo;
    printf("Digite o raio e a altura do tanque: ");
    scanf("%lf %lf", &r, &al);
    ar = 2 * 3.14159 * r * (r + al);
    l = (ar * 2) / 3;
    gs = ceil(l / 3.6);
    custo = gs * 60;
    printf("Quantidade de galoes necessarios: %.0lf\n", gs);
    printf("Custo total: R$ %.2lf\n", custo);

    return 0;
}
