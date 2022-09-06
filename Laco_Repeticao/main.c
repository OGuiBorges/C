#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 1;
    int limitador = 10;

    while(contador <= limitador)
    {
        printf("Loop de numero 1\n");
        printf("Contador - %d\n", contador);
        contador++;
        if(contador > limitador)
        {
            int contador_2 = 9;
            int limitador_2 = 1;
            while(contador_2 >= limitador_2)
            {
                printf("Loop de numero 2\n");
                printf("Contador - %d\n", contador_2);
                contador_2--;
            }
        }
    }
    return 0;
}
