#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    char nomeCompleto[30];
    char n1[30], n2[30], n3[30], n4[30];
    printf("Digite um nome: ");
    scanf("%s", n1);
    strcpy(n2, n1);
    printf("Nome 1: %s\n", n1);
    printf("Nome 2: %s\n", n2);
    strcpy(n3, "João");
    strcpy(n4, "João");
    if(strcmp(n3, n4)==0)
    {
        printf("Nomes Iguais.\n");
    }
    else
    {
            printf("Nomes diferentes.\n");
    }
    strcpy(nomeCompleto, " ");
    strcat(n1, " ");
    strcat(n1, n2);
    strcat(nomeCompleto, n1);
    printf("nomeCompleto: %s", nomeCompleto);
    return 0;
}
