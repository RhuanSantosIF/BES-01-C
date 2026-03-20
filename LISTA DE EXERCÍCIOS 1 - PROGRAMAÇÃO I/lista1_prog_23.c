#include <stdio.h>

int main(){

    double n1, n2, n3;
    printf("Digite as notas das 3 provas: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    double media = ((n1 * 2) + (n2 * 4) + (n3 * 6)) / 3;
    printf("A media final do aluno e: %.2lf", media);

    return 0;
}
