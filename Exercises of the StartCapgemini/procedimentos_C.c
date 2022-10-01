#include <stdio.h>
#include <stdlib.h>

void somarProcedimento(int i, int j, int resultado)
{
    resultado = i + j;
}

int somaFuncao(int i, int j)
{
        return i + j;
}

int main()
{
    int resultado;
    printf("A soma de 5 + 5 é %d", soma(5,5));
    somarProcedimento(5,2, resultado);
    printf("A soma de 5 + 5 é %d", resultado);
    return 0;
}

