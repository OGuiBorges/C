#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int vetor[10];
    int i, j, aux;
    for(i = 0; i < 10; i++)
    {

        printf("Digite o %dº número: ", i);
        scanf("%d", &vetor[i]);
        system("cls");
    }

    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            if(vetor[i] < vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    for(i = 0; i < 10; i++)
    {
        printf("%d\n", vetor[i]);
    }

    return 0;
}
