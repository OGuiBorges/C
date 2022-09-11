#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    float a, b, c, d;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("CADÊ O DELTA\n");
    printf("Digite o A da expressão: ");
    scanf("%f", &a);
    printf("Digite o B da expressão: ");
    scanf("%f", &b);
    printf("Digite o C da expressão: ");
    scanf("%f", &c);
    d = pow(b, 2) - ((4 * a) * c);
    printf("O Delta correspondente a A = %.1f, B = %.1f, C = %.1f é: %.1f", a, b, c, d);

    return 0;
}
