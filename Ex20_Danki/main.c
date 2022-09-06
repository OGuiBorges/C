#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int n1, n2;
    do {
        printf("Digite um numero entre 5 e 10!\n");
        scanf("%d", &n1);
        printf("Digite outro numero entre 5 e 10!\n");
        scanf("%d", &n2);
        if((n1 > 5 && n1 < 10) && (n2 > 5 && n2 < 10)){
            int resp = n1 + n2;
            printf("O resultado da soma de dois numeros entre 5 e 10 é: %d", resp);
        }else{
            printf("Não, vamos recomeçar!!\n");
        }
    }while((n1 <= 5 || n1 >= 10) || (n2 <= 5 || n2 >= 10));

    return 0;
}
