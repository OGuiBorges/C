#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float alturaParede, larguraParede, areaParede, qtdTinta;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("CALCULADORA DE TINTA!\n");
    printf("Digite a altura da parede: ");
    scanf("%f", &alturaParede);
    printf("Digite a largura da parede: ");
    scanf("%f", &larguraParede);
    areaParede = larguraParede * alturaParede;
    qtdTinta = areaParede / 2;
    printf("Área da parede: %.2fm²", areaParede);
    printf("\nQuantidade de tinta: %.2fl", qtdTinta);
    return 0;
}
