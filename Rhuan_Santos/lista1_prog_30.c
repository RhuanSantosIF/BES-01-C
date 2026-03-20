#include <stdio.h>
#include <math.h>

int main() {

    double r, a,b,c,d;
    printf("Digite os pontos a e o ponto b :");
    scanf("%lf %lf", &a, &b);
    printf("Digite os pontos c e o ponto d:");
    scanf("%lf %lf", &c, &d);
    r = sqrt(pow(c - a, 2) + pow(d - b, 2));
    printf("A distancia entre os pontos e: %.2lf\n", r);
    
    return 0;
}
