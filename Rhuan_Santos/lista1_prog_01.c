#include <stdio.h>

int main(){
    float b,a;
    printf("Insira a base e a altura de um triangulo: ");
    scanf("%f %f",&b,&a);
    printf("A area do triangulo e: %.2f", (b*a)/2);

    return 0;
}