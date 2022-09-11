#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int n1, n2, result;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("SOMA DE DOIS NÚMEROS\n");
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    result = n1 + n2;
    printf("A soma entre os números %d e %d é igual a %d.", n1, n2, result);
    return 0;
}
