#include <stdio.h>

int main() {

    int n100, n50, n20, n10, n5, n2, n1, value;

    scanf("%d", &value);

    n100 = value/100;
    n50 = (value%100)/50;
    n20 = ((value%100)%50)/20;
    n10 = (((value%100)%50)%20)/10;
    n5 = ((((value%100)%50)%20)%10)/5;
    n2 = (((((value%100)%50)%20)%10)%5)/2;
    n1 = (((((value%100)%50)%20)%10)%5)%2;

    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", value, n100, n50, n20, n10, n5, n2, n1);

    return 0;
}