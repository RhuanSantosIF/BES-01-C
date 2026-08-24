#include <stdio.h>

float celcius_para_kelvin (float tc){
    return tc + 273.15;
}
float kelvin_para_celcius (float k){
    return k - 273.15;
}

int main() {
    float k,tc;
    int c;
    printf("Insirta a converção desejada (0=kelvin para celcius ou 1=celcius para kelvin); \n");
    scanf("%d", &c);
    if(c==1){
        printf("O temperatura em Kelvin; \n");
        scanf("%f",&k);
        printf("A temperatura em celcius e; %f", kelvin_para_celcius(k));
    }else{
        printf("O temperatura em Celcius; \n");
        scanf("%f",&tc);
        printf("A temperatura em Kelvin e; %f", celcius_para_kelvin(tc));
    }

    return 0;
}