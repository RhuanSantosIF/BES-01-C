#include <stdio.h>

int main(){

    double v, t;
    printf("Digite o valor da prestacao e a taxa de juros (entre 0 e 100):");
    scanf("%lf %lf", &v, &t);
    double r = v + (v * t / 100);
    printf("O valor da prestacao atrasada: %.2lf", r);

    return 0;
}
