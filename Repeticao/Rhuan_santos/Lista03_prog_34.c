#include <stdio.h>
#include <math>

int main(){
    int n,oct=0, oct_c=oct, dec=0,pos=0,base=8;

    printf("Insira um numero; ");
    scanf("%d", &n);

    while (oct_c > 0){
        
        int a=oct_c % 10;
        if(a >= base){
            return 0;
        }
        dec +=a * pow(base,pos);
        pos++;
        oct_c = oct_c / 10;

    }

    printf("Oct: %d\n",oct);
    printf("Dec: %d\n",dec);

    return 0;
}