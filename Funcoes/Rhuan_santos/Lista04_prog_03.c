#include <stdio.h>

float soma (float a,float b){
    return a+b;
}
float subtracao (float a, float b){
    return a-b;
}
float multiplicacao (float a,float b){
    return a*b;
}
float divisao (float a, float b){
    return a/b;
}

int main() {
    float n1,n2;
    int op;
    printf("Insirta dois numero; \n");
    scanf("%f", &n1, &n2);
    printf("Insirta a operaçao (1=soma, 2=subtração, 3=multiplicação e 4=divisão); \n");
    scanf("%d", &op);

    switch (op){
        case 1:
            printf("O resultado é; %f", soma(n1,n2));
            break;
        
        case 2:
            printf("O resultado é; %f", subtracao(n1,n2));
            break;
        
        case 3:
            printf("O resultado é; %f", multiplicacao(n1,n2));
            break;
        
        case 4:
            printf("O resultado é; %f", divisao(n1,n2));
            break;
    }
    return 0;
}