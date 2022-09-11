#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float n1,n2,media;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("MÉDIA DO ALUNO!\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda note: ");
    scanf("%f", &n2);
    media = (n1 + n2) / 2;
    printf("A média do Aluno é: %.1f", media);
    return 0;
}
