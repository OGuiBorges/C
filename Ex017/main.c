#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    float vel, mul;
    printf("Digite a velocidade: ");
    scanf("%f", &vel);
    if(vel > 80)
    {
        mul = (vel - 80) * 5;
        printf("Você foi multado, pagará R$%.2f", mul);
    }
    else
    {
        printf("Tudo certo por aqui!");
    }
}
