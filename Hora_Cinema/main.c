#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hora_cinema = 20;
    int hora_atual = 20;
    int hora_after = hora_cinema + 30;
    int hora_afore = hora_cinema - 30;

    if(hora_atual > hora_after)
    {
        printf("Passou do horário de entrada!");
    }
    else if(hora_atual < hora_afore)
    {
        printf("Muito cedo!");
    }
    else{
        printf("Pode entrar!");
    }
    return 0;
}
