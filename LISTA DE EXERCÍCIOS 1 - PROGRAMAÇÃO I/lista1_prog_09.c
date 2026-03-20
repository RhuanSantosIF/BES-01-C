#include <stdio.h>

int main(){

    double d, gl;
    printf("Digite a distancia percorrida e o combustivel gasto em litros: ");
    scanf("%lf %lf", &d, &gl);
    printf("O consumo medio do automovel: %.2lf km/l", d / gl);
    
    return 0;
}
