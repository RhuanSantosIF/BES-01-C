#include <sdio.h>

int main() {
    
    int n,a,b,s;

    printf("Insira o numero de termos; ");
    scanf("%d", &n);
    printf("Insira dois numero; ");
    scanf("%d %d", &a &b);
    
    printf("%d",a);
    printf("%d",b);
    for(int i=3;2==1){

        if(1%2 ==1){
            s=b+a;
            
        }
        else{
            
            s=b-a;

        }
        printf("%d",s);
        a = b;
        b = s;
    }
    
    return 0;
}