#include <stdio.h>

int main() {

    float vi, v2, media;
    printf("Insira dois numeros: ");
    scanf("%f %f",&v1,&v2);
    media = (v1 + v2) / 2;
    printf("A media dos numeros e: %.2f", media);

    return 0;
}