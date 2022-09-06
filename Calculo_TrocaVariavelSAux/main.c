#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    int a, b;
    printf("Digite o valor de 'a': ");
    scanf("%d", &a);
    printf("Digite o valor de 'b': ");
    scanf("%d", &b);
    if(a > b){
        a = a - b;
        b = a + b;
        a = b - a;
    }else{
        b = b - a;
        a = b + a;
        b = a - b;
    }
    printf("Valor de 'a': %d\n", a);
    printf("Valor de 'b': %d\n", b);
    return 0;
}
