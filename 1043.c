#include <stdio.h>
#include <stdlib.h>

int main() {

    float a, b, c, perimetro, area;

    scanf("%f %f %f", &a, &b, &c);

    if((a < (b+c)) && (b < (a + c)) && (c < (a + b))){
        perimetro = a + b + c;
        printf("Perimetro = %.1f\n", perimetro);
    } else {
        area = ((a+b) * c)/2.0;
        printf("Area = %.1f\n", area);
    }
}