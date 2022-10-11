#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "");
    char nomePesquisa[30];
    printf("Digite o nome a pesquisar: ");
    fflush(stdin);
    scanf("%s", nomePesquisa);

    if(strcmp(nomePesquisa, "Narnia") == 0)
    {
        printf("Encontrado!!");
    }
    else
    {
        printf("Não encontrado!!");
    }
    return 0;
}
