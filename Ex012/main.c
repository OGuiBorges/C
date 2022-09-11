#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float preco, desconto;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("DESCONTO PROMOCIONAL!\n");
    printf("Digite o preço do produto: ");
    scanf("%f", &preco);
    desconto = preco - (0.05 * preco);
    printf("Valor inicial: R$%.2f\n", preco);
    printf("Valor com desconto de 5%: R$%.2f", desconto);
    return 0;
}
