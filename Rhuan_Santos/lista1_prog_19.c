#include <stdio.h>

int main(){

    int n,v;
    printf("Digite um valor inteiro positivo menor que 1000: ");
    scanf("%d", &v);
    n = v % 10 + (v / 10) % 10 + (v / 100) % 10;
    printf("A soma dos digitos de %d e: %d\n", v, n);
    
    return 0;
}
