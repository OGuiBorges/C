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
            cinema[i][j] = "O";
        }

    }
    do
    {
        printf("1 - RESERVAS\n");
        printf("2 - LAYOUT DO CINEMA\n");
        printf("3 - SAIR\n");
        scanf("%c", &opcao);
    }
    while(opcao == "3");
    switch(opcao)
        case '1':
            break;





}
