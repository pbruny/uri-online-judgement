#include <stdio.h>

int main() {

    int hours, minutes, seconds, N;

    scanf("%d", &N);

    minutes = (N/60)%60;
    seconds = N%60;
    hours = N/3600;


    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}