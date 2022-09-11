#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float n;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("DOBRO E TERÇA PARTE!\n");
    printf("Digite um número: ");
    scanf("%f", &n);
    printf("O número digitado foi: %.2f\n", n);
    printf("O dobro de %.2f é: %.2f\n",n,  n * 2);
    printf("A terça parte de %.2f é: %.2f\n",n,  n / 3);
    return 0;
}
