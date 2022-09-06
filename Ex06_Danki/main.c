#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1 = 0;
    float n2 = 0;
    float r = 0;
    printf("Digite um numero decimal: \n");
    scanf("%f", &n1);
    printf("Digite outro numero decimal: \n");
    scanf("%f", &n2);
    r = n1 * n2;
    printf("Resultado de %.2f x %.2f: %.2f", n1, n2, r);
    return 0;
}
