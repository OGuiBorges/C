#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    int a, b, aux;
    printf("Digite o valor de 'a': ");
    scanf("%d", &a);
    printf("Digite o valor de 'b': ");
    scanf("%d", &b);
    aux = a;
    a = b;
    b = aux;
    printf("Valor de 'a': %d\n", a);
    printf("Valor de 'b': %d\n", b);
    printf("Valor de 'aux': %d", aux);
    return 0;
}
