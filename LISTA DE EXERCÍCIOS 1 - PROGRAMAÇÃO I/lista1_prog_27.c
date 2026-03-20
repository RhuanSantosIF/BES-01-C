#include <stdio.h>

int main() {

    int s, d, h, m;
    printf("Digite um intervalo de tempo em segundos: ");
    scanf("%d", &s);
    m = s / 60;
    h = m / 60;
    d = h / 24;
    printf("O intervalo de tempo corresponde a: %d minutos, %d horas e %d dias\n", m, h, d);

    return 0;
}
