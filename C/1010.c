#include <stdio.h>

int main() {

    int code1, piece1, code2, piece2;
    float total, price1, price2;

    scanf("%d %d %f", &code1, &piece1, &price1);
    scanf("%d %d %f", &code2, &piece2, &price2);

    total = piece1 * price1 + piece2 * price2;

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}