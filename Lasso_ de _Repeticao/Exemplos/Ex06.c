
int mains(){

    int d;

    printf("digite o mes:");
    scanf("%d",&d);
    switch (d)
    {
    case 1:
    case 2:
    case 3:
    printf("Primeiro");
    break;

    case 4:
    case 5:
    case 6:
    printf("Segundo");
    break;
    
    case 7:
    case 8:
    case 9:
    printf("Terceiro");
    break;

    case 10:
    case 11:
    case 12:
    printf("Quarto");
    break;

    default:
        printf("Opção invalida.");
    break;
    }

    return 0;
}