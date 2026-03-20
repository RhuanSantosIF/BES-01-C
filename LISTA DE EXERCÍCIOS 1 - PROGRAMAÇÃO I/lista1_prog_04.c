#include <stdio.h>

int maisn() {

    float c,l,a;
    print("Insira o comprimento a largura e a altura de uma caixa retangular: ")
    scanf("%f %f %f",&c,&l,&a);
    printf("O volume da caixa retangular e: %.2f", c*l*a);

    return 0;
}