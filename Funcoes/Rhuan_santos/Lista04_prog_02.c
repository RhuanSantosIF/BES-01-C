#include <stdio.h>

int dobro (int x){
    return x*2;
}

int main() {
    int n;
    printf("Insirta um numero; \n");
    scanf("%d", &n);
    printf("Seu dobro é: %d", dobro(n));

    return 0;
}