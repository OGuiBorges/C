#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    float a, b, resp;
    int escolha;
    printf("Calculadora\n");
    printf("Digite um numero: ");
    scanf("%f", &a);
    printf("Digite outro numero: ");
    scanf("%f", &b);
    printf("Escolha qual op��o: \n");
    printf("1 - Soma: \n");
    printf("2 - Subtra��o: \n");
    printf("3 - Multiplica��o: \n");
    printf("4 - Divis�o: \n");
    scanf("%d", &escolha);
    switch (escolha)
    {
    case 1:
        resp = a + b;
        printf("Resultado de %.2f + %.2f: %.2f", a, b, resp);
        break;
    case 2:
        resp = a - b;
        printf("Resultado de %.2f - %.2f: %.2f", a, b, resp);
        break;
    case 3:
        resp = a * b;
        printf("Resultado de %.2f * %.2f: %.2f", a, b, resp);
        break;
    case 4:
        resp = a / b;
        printf("Resultado de %.2f / %.2f: %.2f", a, b, resp);
        break;
    default:
        printf("Op��o inv�lida!");
    }

    return 0;
}
