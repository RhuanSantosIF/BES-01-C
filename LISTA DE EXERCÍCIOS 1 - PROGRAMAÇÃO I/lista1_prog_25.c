#include <stdio.h>
#include <math.h>

int main() {

    double c1, c2,r;
    printf("Digite os valores dos catetos de um tringulo: ");
    scanf("%lf %lf", &c1, &c2);
    r = sqrt(pow(c1, 2) + pow(c2, 2));
    printf("A hipotenusa: %.2lf", r);

    return 0;
}
