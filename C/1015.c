#include <stdio.h>
#include <math.h>

int main() {

    double A, B, C, D, DIST;

    scanf("%lf %lf", &A, &B);
    scanf("%lf %lf", &C, &D);

    DIST = sqrt(((C-A)*(C-A)) + ((D-B)*(D-B)));

    printf("%.4lf\n", DIST);

    return 0;
}