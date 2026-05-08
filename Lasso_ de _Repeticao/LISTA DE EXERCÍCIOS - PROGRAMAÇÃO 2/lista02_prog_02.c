#include <stdio.h>

int main() {
    
    int a, b, c;
    printf("Digite os valores de A, B e C: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c) {
        printf("A soma de A e B e maior que C\n");
    } else if (a + b < c) {
        printf("A soma de A e B e menor que C\n");
    } else {
        printf("A soma de A e B e igual a C\n");
    }

    return 0;
}