#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int n;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("ANTECESSOR E SUCESSOR!\n");
    printf("Digite um n�mero: ");
    scanf("%d", &n);
    printf("N�mero digitado: %d\n", n);
    printf("Antecessor: %d\n", n - 1);
    printf("Sucessor: %d\n", n + 1);

    return 0;
}
