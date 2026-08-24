#include <stdio.h>

int main(){

    int n;

    printf("Insira um numero maior que 1; ");
    scanf("%d", &n);

    for(int i; i<=n; i++){
        printf("%d \n",&n);
    }

    return(0);
}