#include <stdio.h>
#include <math.h>

int main(){

    double r, a, v;
    printf("Digite o raio e a altura da lata: ");
    scanf("%lf %lf", &r, &a);
    v = 3.1415 * pow(r, 2) * a;
    printf("O volume da lata e: %.2lf", v);
    
    return 0;
}
