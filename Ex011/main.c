#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    float a, b, c, d;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("CAD� O DELTA\n");
    printf("Digite o A da express�o: ");
    scanf("%f", &a);
    printf("Digite o B da express�o: ");
    scanf("%f", &b);
    printf("Digite o C da express�o: ");
    scanf("%f", &c);
    d = pow(b, 2) - ((4 * a) * c);
    printf("O Delta correspondente a A = %.1f, B = %.1f, C = %.1f �: %.1f", a, b, c, d);

    return 0;
}
