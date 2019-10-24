#include <stdio.h>
 
int main() {
 
    int A, B, X;
    printf("Insira dois numeros: \n");
    scanf("%d %d", &A, &B);
    
    X = A + B;
    
    printf("O resultado da soma foi: \n");
    printf("X = %d\n", X);
 
    return 0;
}