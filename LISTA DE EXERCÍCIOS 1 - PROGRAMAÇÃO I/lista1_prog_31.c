#include <stdio.h>

int main() {

    double celsius, estevam;
    printf("Digite a temperatura em Celsius:");
    scanf("%lf", &celsius);
    estevam = (celsius - 0) * (150 - 20) / (100 - 0) + 20;
    printf("A temperatura em Estevam e: %.2lf\n", estevam);

    return 0;
}
