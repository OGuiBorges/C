#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int diasTrabalhados;
    float salTotal;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("CALCULO DE SAL�RIO\n");
    printf("Digite o n�mero de dias trabalhados: ");
    scanf("%d", &diasTrabalhados);
    salTotal = (8 * diasTrabalhados) * 25;
    printf("Dias trabalhados: %d\n", diasTrabalhados);
    printf("Horas trabalhados no m�s: %d\n", diasTrabalhados * 8);
    printf("Sal�rio Total: %.2f", salTotal);
    return 0;
}
