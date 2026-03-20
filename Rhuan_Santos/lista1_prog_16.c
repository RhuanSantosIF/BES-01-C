#include <stdio.h>

int main() {
    
    int a, m, d, td;
    printf("Digite sua idade em anos, meses e dias: ");
    scanf("%d %d %d", &a, &m, &d);
    td = (a * 360) + (m * 30) + d;
    printf("Você ja viveu aproximadamente %d dias.\n", td);

    return 0;
}
