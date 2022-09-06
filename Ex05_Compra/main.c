#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    float vp, vd, vt, vf;
    int qt;
    printf("Digite o preço do produto: R$");
    scanf("%f", &vp);
    printf("Digite a quantidade: ");
    scanf("%d", &qt);
    vt = vp * qt;
    vd = vt * 0.05;
    vf = vt - vd;
    printf("Valor total: R$%.2f\n", vt);
    printf("Desconto: R$%.2f\n", vd);
    printf("Total a pagar: R$%.2f\n", vf);
    return 0;
}
