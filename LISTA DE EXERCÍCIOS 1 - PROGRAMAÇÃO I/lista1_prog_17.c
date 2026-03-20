#include <stdio.h>

int main() {

    int d, m, R;
    printf("Digite o dia e o mes ( separados por espaco ): ");
    scanf("%d %d", &d, &m);
    R = (m - 1) * 30 + d;
    printf("Quantidade de dias passados desde o inicio do ano: %d\n", R);
    
    return 0;
}
