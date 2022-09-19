#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    char nome[255];
    char gui[255] = "Guilherme";
    scanf("%s", nome);
    while(nome == gui)
    {
        printf("%s\n", nome);
        printf("%s\n", gui);
    }
    printf("Deu errado!");

    return 0;
}
