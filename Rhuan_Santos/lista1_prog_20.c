#include <stdio.h>

int main(){

    int vcompra, vpago, t, n100, n10, n1;

    printf("Digite o valor da compra e o valor pago: ");
    scanf("%d %d", &vcompra, &vpago);
    t = vpago - vcompra;
    n100 = t / 100;
    t %= 100;
    n10 = t / 10;
    t %= 10;
    n1 = t;
    printf("Valor da compra: R$ %d\n", vcompra);
    printf("Valor pago: R$ %d\n", vpago);
    printf("Valor do troco: R$ %d\n", t);
    printf("Notas de 100: %d\n", n100);
    printf("Notas de 10: %d\n", n10);
    printf("Notas de 1: %d\n", n1);
    
    return 0;
}
