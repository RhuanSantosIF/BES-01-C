#include <stdio.h>

int quadrado (int x){
    return x*x;
}

int main() {
    int n;
    printf("Insirta um numero; \n");
    scanf("%d", &n);
    printf("Seu quadrado é: %d", quadrado(n));

    return 0;
}