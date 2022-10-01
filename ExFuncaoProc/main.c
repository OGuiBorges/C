#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <windows.h>

int opcaoMenu;
char clientes[5][50];
char sN;

void mostrarCabecalho()
{
    printf("+");
    for(int i = 0; i < 35;i++)
    {
        printf("=");
    }
    printf("+");
    printf("\n|          EMPRESA MOBILE           |");
    printf("\n+");


    for(int i = 0; i < 35;i++)
    {
        printf("=");
    }
    printf("+\n");
}

void mostrarMenu()
{
    fflush(stdin);
    system("cls");
    printf("+");
    for(int i = 0; i < 35;i++)
    {
        printf("=");
    }
    printf("+");
    printf("\n|          EMPRESA MOBILE           |");
    printf("\n+");


    for(int i = 0; i < 35;i++)
    {
        printf("=");
    }
    printf("+\n");
    printf("|1 - CADASTRAR CLIENTE              |\n");
    printf("|2 - PESQUISAR INDICE DO CLIENTE    |\n");
    printf("|3 - EXCLUIR CLIENTE POR INDICE     | \n");
    printf("|4 - FECHAR PROGRAMA                | \n");
    printf("+");
    for(int i = 0; i < 35;i++)
    {
        printf("=");
    }
    printf("+\n");
    scanf("%d", &opcaoMenu);
}

void cadastrar()
{
    fflush(stdin);
    int i;
    for(i = 0;i < 5;i++)
    {
        if(strcmp(clientes[i], "") == 0)
        {
            printf("Informe o nome do cliente: ");
            scanf("%s", clientes[i]);
            printf("%s\n", clientes[i]);
            break;
        }
        //if(strcmp(clientes[i], "") != )

    }
}

void pesquisar()
{

    int indEncontrado = -1;
    char nomePesq[50];

    printf("Digite o nome a pesquisar: ");
    scanf("%s", nomePesq);

    int i;
    for(i = 0; i < 5; i++)
    {
        if(strcmp(clientes[i], nomePesq) == 0)
        {
            indEncontrado = i;
            break;
        }
    }
    fflush(stdin);
    if(indEncontrado == -1)
    {
        printf("Cliente não encontrado! Deseja cadastrar cliente? s/n\n");
        scanf("%c", &sN);
        if(sN == 's')
        {
            cadastrar();
        }
    }
    else
    {
        printf("Cliente %s encontrado na posição %d \n", nomePesq, indEncontrado);
        printf("Deseja excluir nome? s/n\n");
        scanf("%c", &sN);
        if(sN == 's')
        {
            excluir();
        }
    }
}

void excluir()
{
    int indiceExcluir = 0;
    int i =0;
    int j = 0;
    printf("Digite o indice do nome que deseja excluir: ");
    scanf("%d", &indiceExcluir);
    for(i = 0; i < 5; i++)
    {
        if(indiceExcluir >= 0 && indiceExcluir < 5)
        {

           strcpy(clientes[indiceExcluir], "");

        }
        else
        {
            printf("Indice inválido!");
            //printf("")
        }
    }
}

int main()
{

    setlocale(LC_ALL,"");
    while(opcaoMenu != 4)
    {
        mostrarMenu();
        switch(opcaoMenu)
        {
        case 1:
            cadastrar();
            break;
        case 2:
            pesquisar();
            break;
        case 3:
            excluir();
            break;
        case 4:
            printf("Finalizando");
            for(int k = 0;k<3;k++)
            {
                Sleep(500);
                printf(".");
            }
            break;
        default:
            printf("Opção inválida!\n");
            Sleep(2000);
        }
    }
    printf("\nPrograma Finalizado!");

    return 0;
}
