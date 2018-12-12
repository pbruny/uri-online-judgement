#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, k;

    scanf("%d %d", &a, &b);

    k = b / a;
    if(((b % a) == 0) || ((a % b) == 0)){
        printf("Sao Multiplos\n");
    }else{
        printf("Nao sao Multiplos\n");
    }
}