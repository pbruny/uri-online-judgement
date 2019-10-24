#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double A, B, C, DELTA, R1, R2;

    scanf("%lf %lf %lf", &A, &B, &C);

    DELTA = (B*B) - (4*A*C);
    R1 = (-B + sqrt(DELTA))/(2*A);
    R2 = (-B - sqrt(DELTA))/(2*A);
    
    if(DELTA < 0){
        printf("Impossivel calcular\n");
        
    }else if(A == 0){
        printf("Impossivel calcular\n");
    }else{
        R1 = (-B + sqrt(DELTA))/(2*A);
        R2 = (-B - sqrt(DELTA))/(2*A);
        printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);
    }
    
    return 0;
}