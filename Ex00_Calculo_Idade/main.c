#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int id, aa, an;
    printf("Digite seu ano de nascimento: ");
    scanf("%d", &an);
    printf("Digite o ano atual: ");
    scanf("%d", &aa);
    id = aa - an;
    printf("Você tem %d anos!", id);
    return 0;
}
