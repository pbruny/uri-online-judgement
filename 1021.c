#include <stdio.h>

int main() {

    double n100, n50, n20, n10, n5, n2, m1, m50, m25, m10, m5, m01;
    double value, cents;

    scanf("%lf", &value);

    cents = value * 100;

    //cedulas
    n100 = (int)value/100;
    n50 = ((int)value%100)/50;
    n20 = (((int)value%100)%50)/20;
    n10 = ((((int)value%100)%50)%20)/10;
    n5 = (((((int)value%100)%50)%20)%10)/5;
    n2 = ((((((int)value%100)%50)%20)%10)%5)/2;

    //moedas
    
    cents = (int)cents%100;
    m1 = ((((((int)value%100)%50)%20)%10)%5)%2;
    m50 = (int)cents/50;
    m25 = ((int)cents%50)/25;
    m10 = (((int)cents%50)%25)/10;
    m5 = ((((int)cents%50)%25)%10)/5;
    m01 = (((((int)cents%50)%25)%10)%5);
    

    //printf("%.0f nota(s) de R$ 100,00\n%.0f nota(s) de R$ 50,00\n%.0f nota(s) de R$ 20,00\n%.0f nota(s) de R$ 10,00\n%.0f nota(s) de R$ 5,00\n%.0f nota(s) de R$ 2,00\n%.0f nota(s) de R$ 1,00\n", value, n100, n50, n20, n10, n5, n2, m1);
    printf("NOTAS:\n%.0lf nota(s) de R$ 100.00\n", n100);
    printf("%.0lf nota(s) de R$ 50.00\n", n50);
    printf("%.0lf nota(s) de R$ 20.00\n", n20);
    printf("%.0lf nota(s) de R$ 10.00\n", n10);
    printf("%.0lf nota(s) de R$ 5.00\n", n5);
    printf("%.0lf nota(s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n%.0lf moeda(s) de R$ 1.00\n", m1);
    printf("%.0lf moeda(s) de R$ 0.50\n", m50);
    printf("%.0lf moeda(s) de R$ 0.25\n", m25);
    printf("%.0lf moeda(s) de R$ 0.10\n", m10);
    printf("%.0lf moeda(s) de R$ 0.05\n", m5);
    printf("%.0lf moeda(s) de R$ 0.01\n", m01);
    return 0;
}