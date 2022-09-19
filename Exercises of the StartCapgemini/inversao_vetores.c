#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int vetorOr[10];
    int vetorInv[10];
    int aux = 9;


    for(int i = 0; i < 10; i++)
    {
        printf("Digite o %dº valor: ", i + 1 );
        scanf("%d", &vetorOr[i]);
        printf("%d\n", vetorOr[i]);
    }
    for(int j = 0; j < 10; j++)
    {
        vetorInv[aux - j] = vetorOr[j];
    }
    for(int k = 0;k < 10;k++)
    {
        printf("%d\n", vetorInv[k]);
    }
}
