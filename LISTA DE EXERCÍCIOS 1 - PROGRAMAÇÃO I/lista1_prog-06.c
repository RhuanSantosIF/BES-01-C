#include <stdio.h>
#include <math.h>

int main() {

    float n;
    printf("Insira um numero: ");
    scanf("%f",&n);
    printf("O quadrado do numero e: ", pow(n,2),"E o cubo do numero e: ", pow(n,3));

    return 0;
}