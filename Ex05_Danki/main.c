#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1 = 0;
    int n2 = 0;
    float r = 0;
    printf("Digite o primeiro numero: \n");
    scanf("%d", &n1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &n2);
    r = n1 / n2;
    printf("Resultado de %d / %d: %.2f", n1, n2, r);
    return 0;
}
