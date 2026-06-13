#include <stdio.h>

int main(){

    int n, i=1;
    printf("Digite um numero: ");
    scanf("%d", &n);

    while(n>i){
        printf("\n %d",i);
        i++;
    }

    return 0;
}