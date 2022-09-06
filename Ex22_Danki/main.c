#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int n1 = 0, resp = 0;
    printf("Digite um número: ");
    scanf("%d", &n1);
    for(int i = 0; i <= 10; i++){
        resp = n1 * i;
        printf("%d * %d = %d\n", n1, i, resp);
        //printf("%d x %d = %d \n", tabuada, i, tabuada * i);
    }
    return 0;
}
