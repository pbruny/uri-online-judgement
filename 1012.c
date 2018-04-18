#include <stdio.h>

int main() {

    double A, B, C, pi, triangleArea, circleArea, trapezeArea, squareArea, rectangleArea;

    scanf("%lf %lf %lf", &A, &B, &C);

    pi = 3.14159;

    triangleArea = (A*C)/2.0;
    circleArea = (C*C) * pi;
    trapezeArea = ((A+B) * C)/2.0;
    squareArea = B*B;
    rectangleArea = A * B;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triangleArea, circleArea, trapezeArea, squareArea, rectangleArea);

    return 0;
}