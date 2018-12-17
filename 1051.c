#include <stdio.h>

int main()
{
    double salario, reajuste;

    scanf("%lf", &salario);

    if(salario <= 2000.00){
        printf("Isento\n");
    } else if(salario > 2000.00 && salario <= 3000.00) {
        salario -= 2000;
        salario *= 0.08;
        printf("R$ %.2lf\n", salario);
    } else if(salario > 3000.00 && salario <= 4500.00) {
        reajuste = 1000.00 * 0.08;
        salario -= 3000.00;
        salario *= 0.18;
        reajuste += salario;
        printf("R$ %.2lf\n", reajuste);
    } else if(salario > 4500.00){
        reajuste = 1000 * 0.08;
        reajuste += 1500 * 0.18;
        salario -= 4500;
        salario *= 0.28;
        reajuste += salario;
        printf("R$ %.2lf\n", reajuste);
    }

    return 0;
}