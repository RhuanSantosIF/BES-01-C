#include <stdio.h>

int mains(){

    int d;

    printf("digite 1=Domingo, 2=segunda, 3=terça, 4=quanrta, 5=quinta, 6=sexta e 7=sabado:");
    scanf("%d",&d);
    switch (d)
    {
    case 1:
    case 7:
        printf("Não é util.");
    break;
    
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        printf("É util.");
    break;

    default:
        printf("Opção invalida.");
    break;
    }

    return 0;
}