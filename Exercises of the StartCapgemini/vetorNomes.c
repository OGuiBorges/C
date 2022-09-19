#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"");
    char nomes[5][20], nome_P[1][20];
    int i = 0, encontrado = 0;
    for(i = 0; i < 5; i++)
    {
        printf("Digite o %dº nome: ", i + 1);
        fflush(stdin);
        scanf("%s", &nomes[i]);
        system("cls");
    }

    printf("Pesquisar\n\n");
    printf("Digite o nome que deseja procurar: ");
    fflush(stdin);
    gets(nome_P);
    i = 0;

    while(i < 5 && encontrado==0)
    {
        if(strcmp(nomes[i], nome_P[0]) == 0)
        {
            encontrado = 1;
            break;
        }
        i++;
    }
    if(encontrado == 1)
    {
        printf("Encontrado");
    }
    else
    {
        printf("Não encontrado");
    }
}
