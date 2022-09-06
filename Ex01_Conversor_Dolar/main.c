#include <stdio.h>
#include <stdlib.h>
//biblioteca pra arrumar o idioma
#include <locale.h>

int main()
{
    //Só pra mudar o idioma e funcionar acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");

    //Declaração de Variavel
    float vr, cota, vd;

    //Inicio
    printf("Digite o valor a ser convertido: R$");
    scanf("%f", &vr);
    printf("Digite a cotação do dólar: R$");
    scanf("%f", &cota);
    vd = vr / cota;
    printf("O valor de R$%.2f convertido para dólar é de $%.2f", vr, vd);

    return 0;
}
