#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char nome[] = "";
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("BOAS VINDAS!\n");
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Seja muito bem-vindo/a %s..", nome);
    return 0;
}
