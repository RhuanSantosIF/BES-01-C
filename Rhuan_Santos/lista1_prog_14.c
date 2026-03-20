#include <stdio.h>

int main() {
    
    double v1, v2, v3, v4, media;
    printf("Digite os valores v1, v2, v3 e v4: ");
    scanf("%lf %lf %lf %lf", &v1, &v2, &v3, &v4);
    media = (v1 + v2 + v3 + v4) / 4;
    printf("A média aritmetica é: %.2lf", media);

    return 0;
}
