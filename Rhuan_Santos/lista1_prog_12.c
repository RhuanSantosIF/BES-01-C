#include <stdio.h>

int main() {
    
    double tf, tc;
    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%lf", &tf);
    tc = (tf - 32) * (5.0 / 9.0);
    printf("A temperatura em graus Celsius e: %.2lf", tc);

    return 0;
}
