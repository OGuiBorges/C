#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "");
    char cinema[10][10];
    int i, j, fila, poltrona;
    char opcao;
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            cinema[i][j] = 'O';
        }

    }

    while(opcao != '3')
    {
        fflush(stdin);
        printf("\n1 - RESERVAS\n");
        printf("2 - LAYOUT DO CINEMA\n");
        printf("3 - SAIR\n");
        scanf("%c", &opcao);
        switch(opcao)
        {
        case '1':
        system("cls");
        printf("Fila: ");
        scanf("%d", &fila);
        printf("Poltrona: ");
        scanf("%d", &poltrona);
        if(cinema[fila-1][poltrona-1] == 'O')
        {
            cinema[fila-1][poltrona-1] = 'X';
        }
        else
        {
            printf("Poltrona já ocupada\n");
        }
        break;
        case '2':
        system("cls");
        for(i = 0; i < 10; i++)
        {
            for(j = 0;j < 10;j++)
            {
                printf(" %c",cinema[i][j]);
            }
            printf("\n");
        }
        break;
        }
    }






}
