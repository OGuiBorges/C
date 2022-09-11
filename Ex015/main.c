#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int diasTrabalhados;
    float salTotal;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("CALCULO DE SALÁRIO\n");
    printf("Digite o número de dias trabalhados: ");
    scanf("%d", &diasTrabalhados);
    salTotal = (8 * diasTrabalhados) * 25;
    printf("Dias trabalhados: %d\n", diasTrabalhados);
    printf("Horas trabalhados no mês: %d\n", diasTrabalhados * 8);
    printf("Salário Total: %.2f", salTotal);
    return 0;
}
