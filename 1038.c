#include <stdio.h>

int main(){

    int a, b;
    float total;

    scanf("%d %d", &a, &b);

    if(a == 1){
        total = b * 4.0;;
        printf("Total: R$ %.2f\n", total);
    }else if(a == 2){
        total = b * 4.50;
        printf("Total: R$ %.2f\n", total);
    }else if(a == 3){
        total = b * 5.0;
        printf("Total: R$ %.2f\n", total);
    }else if(a == 4){
        total = b * 2.0;
        printf("Total: R$ %.2f\n", total);
    }else if(a == 5){
        total = b * 1.50;
        printf("Total: R$ %.2f\n", total);
    }
    
    return 0;
}