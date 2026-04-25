#include <stdio.h>

int mian (){

    float a,b,c;
    printf("Insira os tres lsdos de um triangulo:");
    scanf("%f %f %f", &a,&b,&c);

    if(a < b+c && b<a+c && c<a+b){
        printf("É um triangulo ");

        if(a==b && b==c){
            printf("equilatero. ");

        }
        else if(a==b || b==c || c==a){
            printf("isósecel. ");

        }
        else{
                printf("escaleno. ");
        }
    }

    return 0;
}