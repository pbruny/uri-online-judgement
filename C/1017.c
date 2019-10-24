#include <stdio.h>

int main() {

    int hours, velocity;
    float liters;

    scanf("%d %d", &hours, &velocity);

    liters = (hours * velocity)/12.0;

    printf("%.3f\n", liters);

    return 0;
}