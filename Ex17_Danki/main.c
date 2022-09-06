#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
    //usa o tempo atual como semente
    srand(time(NULL));
    //cria um numero aleatorio de 0 a 9
    int r = rand() % 10;

    //define em variaveis o maximo e o minimo
    int maximo = 6;
    int minimo = 1;
    //formula criada para variar entre numeros
    int r2 = (rand() % (maximo - minimo + 1)) + minimo;

    //Programa de dados
    int v1, v2, v3;
    v1 = (rand() % (maximo - minimo + 1)) + minimo;
    //v1 = (rand() % 6) + 1;
    v2 = (rand() % (maximo - minimo + 1)) + minimo;
    v3 = (rand() % (maximo - minimo + 1)) + minimo;

    int soma = v1 + v2 + v3;

    printf("numero 1: %d\n", v1);
    printf("numero 2: %d\n", v2);
    printf("numero 3: %d\n", v3);
    printf("Soma: %d", soma);
    return 0;
}
