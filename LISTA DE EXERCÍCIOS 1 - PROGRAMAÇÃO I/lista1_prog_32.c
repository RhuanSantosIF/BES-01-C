#include <stdio.h>

int main() {
    
    double pix, n;
    printf("Digite o valor do pixel (0 a 255):");
    scanf("%lf", &pix);
    n = (pix - 0) * (1 - (-1)) / (255 - 0) + (-1);

    printf("O valor do pixel normalizado e: %.2lf\n", n);

    return 0;
}
