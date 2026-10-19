
//IMCOMPLETOOOOOOOOOOOOOOOOOOOOOOOOOOO

#include <stdio.h>

int copisar_valores_unicos(int a[], int a_copia[], int n){

    int pos=0;

    for(int i=0; i<n ; i++){
        int pivo = a[i];
        int cont =0 ;
        for(int j=0; j<n; j++){
            if(a{j} == pivo){  
                cont = cont + 1;
            }
            if(cont == 2){
                break;
            }
        }
        if(cont == 1){
            a_copia[pos] = pivo;
            pos = pos + 1;
        }
    }
    return (pos);
}

int main (){
    int a[10]= {1,23,4,5,67,8,9,7,54,12};
    int a_copia[10];

    int n_a = copisar_valores_unicos(a,a_copia, 10);
    
}