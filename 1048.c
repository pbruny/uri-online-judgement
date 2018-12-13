#include <stdio.h>

int main()
{
    double salario, reajuste;

    scanf("%lf", &salario);

    if(salario <= 400.00){
        reajuste = salario * 0.15;
        salario += reajuste;
    } else if(salario > 400.00 && salario <= 800.00) {
        reajuste = salario * 0.12;
        salario += reajuste;
    } else if(salario > 800.00 && salario <= 1200.00) {
        reajuste = salario * 0.10;
        salario += reajuste;
    } else if(salario > 1200.00 && salario <= 2000.00){
        reajuste = salario * 0.07;
        salario += reajuste;
    } else {
        reajuste = salario * 0.04;
        salario += reajuste;
    }

    printf("Novo salario: %.2lf\n", salario);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %.0lf %%\n", (reajuste/(salario - reajuste)) * 100);

    return 0;
}