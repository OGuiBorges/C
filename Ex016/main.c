#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int qtdCigarroDia, qtdAnos, cigarrosFumados;
    float minutosFumados, totalDias;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("VIDA DE FUMANTE\n");
    printf("Digite quantos cigarros fuma no dia: ");
    scanf("%d", &qtdCigarroDia);
    printf("Digite há quantos anos fuma: ");
    scanf("%d", &qtdAnos);
    cigarrosFumados = qtdAnos * 365 * qtdCigarroDia;
    minutosFumados = cigarrosFumados * 10;
    totalDias = (minutosFumados / 60) / 24;
    printf("Em %d anos você fumou %d cigarros por dia, o que dá um total de %d cigarros.", qtdAnos, qtdCigarroDia, cigarrosFumados);
    printf("\nPerdendo 10min por cada cigarro fumado, perdeu um total de %.0f dias.", totalDias);
    return 0;
}
