#include <stdio.h>
#define PI 3.14159

int main() {

    double g, m, s ,rad, graus;
    printf("Digite o valor do angulo em graus, minutos e segundos (separados por espaco): ");
    scanf("%lf %lf %lf", &g, &m, &s);
    graus = g + (m / 60.0) + (s / 3600.0);
    rad = graus * (PI / 180.0);
    printf("O valor do angulo em radianos e: %.4lf", rad);

    return 0;
}
