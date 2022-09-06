#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a > 10 && b > 10 && c > 10){
        printf("Os numeros sao maiores que 10");
    }else{
        printf("Não sao maiores que 10");
    }
    return 0;
}
