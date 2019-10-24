#include <stdio.h>

int main() {

    int number, hours;
    float value, salary;

    scanf("%d %d %f", &number, &hours, &value);

    salary = hours * value;

    printf("NUMBER = %d\nSALARY = U$ %.2f\n", number, salary);

    return 0;
}