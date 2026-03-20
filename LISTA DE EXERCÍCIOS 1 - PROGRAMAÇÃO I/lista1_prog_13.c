1#include <stdio.h>

int main(){

    double n;
    printf("Digite a quantidade de chuva em polegadas: ");
    scanf("%lf", &n);
    printf("A quantidade de chuva em milimetros: %.2lf", n * 25.4);

    return 0;
}
