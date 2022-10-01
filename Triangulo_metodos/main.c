#include <stdio.h>
#include <stdlib.h>

int lado1, lado2, lado3;

void lerDados()
{
    printf("Lado 1: ");
    scanf("%d", &lado1);
    printf("Lado 2: ");
    scanf("%d", &lado2);
    printf("Lado 3: ");
    scanf("%d", &lado3);
}

int verificarIntegridadeTriangulo()
{
    if (lado1 > (lado2 + lado3) || lado2 > (lado1 + lado3) || lado3 > (lado1 + lado2))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

char* verificarTipoTriangulo()
{
    if(lado1 == lado2 && lado2 == lado3)
    {
        return "Equilátero";
    }
    else if(lado1 == lado2 || lado2 == lado3)
    {
        return "Isósceles";
    }
    else
    {
        return "Escaleno";
    }

}


int main()
{
    lerDados();
    if(verificarIntegridadeTriangulo()==1)
    {
        printf(verificarTipoTriangulo());
    }
    else
    {
        printf("Não é triangulo.");
    }
    return 0;
}
