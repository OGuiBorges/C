#include <stdio.h>
#include <stdlib.h>


int resultado;
int somaFuncao(int i, int j)
{
        return i + j;
}
void somarProcedimento(int i, int j)
{
    printf("�isso ai\n");
    resultado = somaFuncao(i,j);
}

int main()
{
    printf("A soma de 5 + 5 � %d\n", somaFuncao(5,5));
    somarProcedimento(5,2);
    printf("%d", resultado);
    return 0;
}
