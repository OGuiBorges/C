#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int n1 = 0, n2 = 0;
    while((n1 <= 5 || n1 >= 10) || (n2 <= 5 || n2 >= 10)){
        printf("Digite um valor entre 5 e 10: ");
        scanf("%d", &n1);
        printf("Digite outro valor entre 5 e 10: ");
        scanf("%d", &n2);
    }
    /*
    while(!(n1 > 5 && n1 < 10) || !(n2 > 5 && n2 < 10)){
        printf("Digite um valor entre 5 e 10: ");
        scanf("%d", &n1);
        printf("Digite outro valor entre 5 e 10: ");
        scanf("%d", &n2);
    }
    */

    printf("Soma: %d", n1+n2);
    return 0;
}
