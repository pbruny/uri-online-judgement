#include <stdio.h>

int main() {
    float numbers[6];
    int i, positive = 0;

    for(i = 0; i < 6; i++){
        scanf("%f", &numbers[i]);
    }

    for(i = 0; i < 6; i++){
        if(numbers[i] > 0){
            positive++;
        }
    }

    printf("%d valores positivos\n", positive);

    return 0;
}