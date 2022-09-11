#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float valReal, valDolar;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("CONVERSOR DE DOLAR");
    printf("\nDigite o valor em reais: R$");
    scanf("%f", &valReal);
    valDolar = valReal / 5.15;
    printf("Com R$%.2f pode comprar $%.2f.", valReal, valDolar);
    return 0;
}
