#include <stdio.h>
#include <stdlib.h>
//biblioteca pra arrumar o idioma
#include <locale.h>

int main()
{
    //S� pra mudar o idioma e funcionar acentua��o
    setlocale(LC_ALL, "Portuguese_Brazil");

    //Declara��o de Variavel
    float vr, cota, vd;

    //Inicio
    printf("Digite o valor a ser convertido: R$");
    scanf("%f", &vr);
    printf("Digite a cota��o do d�lar: R$");
    scanf("%f", &cota);
    vd = vr / cota;
    printf("O valor de R$%.2f convertido para d�lar � de $%.2f", vr, vd);

    return 0;
}
