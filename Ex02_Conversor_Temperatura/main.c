#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    float tc, tf;
    printf("Digite uma temperatura em graus Celsius(somente números): ");
    scanf("%f", &tc);
    tf = (tc * 9/5) + 32;
    printf("A temperatura de %.0fºC em Fahrenheit é de %.0fºF", tc, tf);
    return 0;
}
