#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float salInicial, reajSalario, salFinal;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("REAJUSTE DE SALARIO!\n");
    printf("Digite seu sal�rio: R$");
    scanf("%f", &salInicial);
    reajSalario = 0.15 * salInicial;
    salFinal = reajSalario + salInicial;
    printf("Sal�rio Inicial: R$%.2f\n", salInicial);
    printf("Reajuste: R$%.2f\n", reajSalario);
    printf("Sal�rio Final: R$%.2f", salFinal);

    return 0;
}
