#include <stdio.h>
#include <math.h>

int main() {

    double a, b, c, d;
    printf("Digite os valores de a, b, c e d: ");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    printf("equacao A: %.2f\n", (b / (a + c) + 4 * a) / ((d - 2 * a) / (3 + c)));
    printf("equacao B: %.2f\n", (-b - pow(b, 3) - 4 * a * c + 2 * pow(a, 2)) / (2 * a / pow(b + 1, 2)));
    printf("equacao C: %.2f\n", (a / pow(b, 2)) / ((2 * a - 3 * b) / pow(4 * pow(a, 2) - 3, 3)));
    return 0;
}
