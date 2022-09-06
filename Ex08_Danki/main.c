#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    int n2;
    int r;
    printf("Digite um valor: ");
    scanf("%d", &n1);
    printf("Digite outro valor: ");
    scanf("%d", &n2);
    r = n1 + n2;
    if(r >= 10){,
        printf("Maior/igual a 10");
    }else{
        printf("Menor que 10");
    }
    return 0;
}
