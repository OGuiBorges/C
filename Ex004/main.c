#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int n1, n2, result;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("SOMA DE DOIS N�MEROS\n");
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &n1);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &n2);
    result = n1 + n2;
    printf("A soma entre os n�meros %d e %d � igual a %d.", n1, n2, result);
    return 0;
}
