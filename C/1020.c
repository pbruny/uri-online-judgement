#include <stdio.h>

int main() {

    int years, months, days, N;

    scanf("%d", &N);

    years = N/365;
    months = (N%365)/30;
    days = (N%365)%30;


    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);

    return 0;
}