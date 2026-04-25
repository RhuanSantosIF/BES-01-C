#include <stdio.h>

int main() {

    float id;
    printf("infeorme a idade do nadador: ");
    scanf("%f",&id);

    if(id>=5 && id<=10){
        printf("Infantil.");
    }
    else if(id>=11 && id<=17){
        printf("Juvenil.");
    }
    else{
        printf("Senior.");
    }

    return 0;
}