#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if((a % 2 == 0) || (b % 2 == 0)){
        printf("Algum é par");
    }else{
        printf("Nenhum é par");
    }
    return 0;
}
