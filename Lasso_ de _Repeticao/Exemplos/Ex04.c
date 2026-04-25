#include <stdio.h>

int mains(){

    int op;
    float m;
    printf("Informe a qunatidade de metros: ");
    scanf("%f",&m);
    printf("digite 1=quilometros, 2=centimetros, 3=decimetros, 4=milimetros:");
    scanf("%d",&op);
    switch (op)
    {
    case 1:
        printf("%f Metros = %f Quilometros.",m,m/1000);    
    break;

    case 2:
        printf("%f Metros = %f centimetros.",m,m*100);
    break;
    
    case 3:
        printf("%f Metros = %f decimetros.",m,m*10);
    break;

    case 4:
        printf("%f Metros = %f milimetros.",m,m*1000);
    break;

    default:
        printf("Opção invalida.");
    break;
    }

    return 0;
}