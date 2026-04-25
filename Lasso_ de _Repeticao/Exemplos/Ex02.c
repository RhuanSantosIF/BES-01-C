#include <stdio.h>

int main() {

    float id,es,vip;
    printf("infeorme a idade: ");
    scanf("%f",&id);
    printf("infeorme se é estudante (1=verdadeiro 0=falso): ");
    scanf("%f",&es);
    printf("infeorme se é vip (1=verdadeiro 0=falso): ");
    scanf("%f",&vip);

    if(id>65 || es==1 || vip==1){
        printf("Pagar meia entrada.");
    }
    else{
        printf("Paga inteira.");
    }

    return 0;
}