#include <stdio.h>

int main(){
    
    double v1, v2;
    printf("Digite o valor 1 e o valor 2:");
    scanf("%lf %lf", &v1, &v2);
    printf("A soma: %.2lf\n", v1 + v2);
    printf("A subtracao: %.2lf\n", v1 - v2);
    printf("A multiplicacao: %.2lf\n", v1 * v2);
    printf("A divisao: %.2lf\n", v1 / v2);

    return 0;
}
