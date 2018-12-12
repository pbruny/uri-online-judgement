#include <stdio.h>

int main()
{

    double a, b, c, aux;

    scanf("%lf %lf %lf", &a, &b, &c);
    if(a < b){
        aux = a;
        a = b;
        b = aux;
    }
    if(a < c){
        aux = a;
        a = c;
        c = aux;
    }
    if(b < c){
        aux = b;
        b = c;
        c = aux;
    }

    double w, y, z;
    w = a*a;
    y = b*b;
    z = c*c;

    if (a >= (b + c)) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (w == (y + z)) {
            printf("TRIANGULO RETANGULO\n");
        }
        if (w > (y + z)) {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if (w < (y + z)) {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if ((a == b) && (b == c)) {
            printf("TRIANGULO EQUILATERO\n");
        } else if ((a == b) || (b == c) || (c == a)) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}