#include <stdio.h>
#include <stdlib.h>

int main() {

    int x[3], y[3], i, j, aux;

    for(i = 0; i < 3; i++){
        scanf("%d", &x[i]);
        y[i] = x[i];
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(x[i] < x[j]){
                aux = x[i];
                x[i] = x[j];
                x[j] = aux;
            }
        }
    }

    for(i = 0; i < 3; i++){
        printf("%d\n", x[i]);
    }
    printf("\n");
    for(i = 0; i < 3; i++){
        printf("%d\n", y[i]);
    }
    

    return 0;
}