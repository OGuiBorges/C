#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int i = 0;
    int soma = 0;
    for(i = 0; i < 10; i++){
        soma = soma + i;
        printf("i:%d  | Soma: %d \n", i, soma);
    }
    return 0;
}
