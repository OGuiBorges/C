#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int diasRodados;
    float kmRodados, valorAluguel;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("LOCADORA DE CARROS\n");
    printf("Digite quantos dias ficou com o carro: ");
    scanf("%d", &diasRodados);
    printf("Digite quantos Km rodados: ");
    scanf("%f", &kmRodados);
    valorAluguel = (diasRodados * 90) + (kmRodados * 0.20);
    printf("Dias rodados: %d\n", diasRodados);
    printf("Quilometros rodados: %.1f\n", kmRodados);
    printf("Valor total do aluguel: R$%.2f", valorAluguel);
    return 0;
}
