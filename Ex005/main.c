#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float n1,n2,media;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("M�DIA DO ALUNO!\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda note: ");
    scanf("%f", &n2);
    media = (n1 + n2) / 2;
    printf("A m�dia do Aluno �: %.1f", media);
    return 0;
}
