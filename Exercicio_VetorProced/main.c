#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char gabarito[10];
char opcaoMenu;
int notaFinal;

void mostrarMenu()
{
    fflush(stdin);
    system("cls");
    printf("1 - CADASTRAR GABARITO\n");
    printf("2 - CADASTRAR PROVA\n");
    printf("3 - SAIR\n");
    scanf("%c", &opcaoMenu);
}

void cadastrarGabarito()
{
    for(int i = 0; i < 10; i++)
    {
        fflush(stdin);
        system("cls");
        printf("Informe a resposta da questão %d: ", i + 1);
        scanf("%c", &gabarito[i]);
    }
    mostrarMenu();
}

int cadastrarProva()
{
    int nota = 0;
    char resposta;

    for(int i = 0; i < 10; i++)
    {
        fflush(stdin);
        system("cls");
        printf("Informe a resposta da questão %d: ", i + 1);
        scanf("%c", &resposta);
        if(resposta == gabarito[i])
        {
            nota = nota + 1;
        }
    }
    return nota;
}

char* verificarSituacao(int nota)
{
    if(nota >= 7)
    {
        return "\nAprovado\n";
    }
    else
    {
        return "\nReprovado\n";
    }
}


int main()
{
    char resp = "";
    setlocale(LC_ALL, "Portuguese_Brazil");
    mostrarMenu();
    switch(opcaoMenu)
    {
    case '1':
        cadastrarGabarito();
    case '2':
        notaFinal = cadastrarProva();
        printf(verificarSituacao(notaFinal));
        printf("Deseja cadastrar outra prova? s/n\n");
        fflush(stdin);
        scanf("%c", &resp);
        if(resp == 's

        {
            mostrarMenu();
        }
        else
        {
            break;
        }

    case '3':
        break;
    default:
        printf("Opção Inválida!");
    }
    return 0;
}
