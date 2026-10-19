#include <stdio.h>

void ler_vetor(int v[], int n){
    for(int i=0; i<n ; i++){
        scanf("%d", &v[i]);
    }    
}

void anos_entre_conquistas (int v[], int n){
    printf("Anos entre conquistas.");
    for(int i=0; i<n ; i++){
        printf("%d", &v[i] - &v[i-1]);
    }
}

int main (){

    int n,ano;
    printf("Informe o numero de titulos; ");
    scanf("%d", &n);
    printf("Informe o ano atual; ");
    scanf("%d", &ano);
    int v[n];
    printf("Informe os ano em q o brasil foi campeõa em ordem crescete; ");

    ler_vetor(v,n);

    anos_entre_conquistas(v,n);
    
    return 0;
}