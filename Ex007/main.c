#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float n;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("DOBRO E TER�A PARTE!\n");
    printf("Digite um n�mero: ");
    scanf("%f", &n);
    printf("O n�mero digitado foi: %.2f\n", n);
    printf("O dobro de %.2f �: %.2f\n",n,  n * 2);
    printf("A ter�a parte de %.2f �: %.2f\n",n,  n / 3);
    return 0;
}
