#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int opcao;
    float vD, vImp;
    printf("1 - IMPORTAÇÃO\n");
    printf("2 - EXPORTAÇÃO\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);
    printf("Digite o valor da operação: ");
    scanf("%f", &vD);
    if(opcao == 1)
    {
        if(vD <= 9000)
        {
            vImp = 0.09 * vD;
        }
        else if(vD <= 13600)
        {
            vImp = 0.14 * vD;
        }
        else
        {
            vImp = 0.18 * vD;
        }
        }
    if(opcao == 2)
    {
        if(vD <= 8000)
        {
            vImp = 0.04 * vD;
        }
        else if(vD <= 14000)
        {
            vImp = 0.06 * vD;
        }
        else
        {
            vImp = 0.08 * vD;
        }
    }

    printf("O valor do imposto é %.2f", vImp);
    return 0;
}
