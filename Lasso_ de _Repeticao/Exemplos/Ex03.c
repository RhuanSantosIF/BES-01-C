#include <stdio.h>

int main(){

    int ano;
    printf("Insira um ano: \n");
    scanf("%d",&ano);

    if(ano%4==0 && (ano%100!=0 || ano%400==0)){
        printf("E bissexto.");
    }
    else{
        printf("Nao è bissexto.");
    }

    return 0;
}