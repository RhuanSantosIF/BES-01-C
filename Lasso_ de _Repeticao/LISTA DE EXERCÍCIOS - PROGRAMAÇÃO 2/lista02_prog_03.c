#include <stdio.h>

int main() {

    float a1, a2, p1, p2;
    printf("Digite altura e peso da primeira pessoa: ");
    scanf("%f %f", &a1, &p1);
    printf("Digite altura e peso da segunda pessoa: ");
    scanf("%f %f", &a2, &p2);

    if (p1 > p2) {
        printf("Maior peso: %.2f\n", p1);
    } else {
        printf("Maior peso: %.2f\n", p2);
    }

    if (a1 > a2) {
        printf("Maior altura: %.2f\n", a1);
    } else {
        printf("Maior altura: %.2f\n", a2);
    }

    return 0;
}