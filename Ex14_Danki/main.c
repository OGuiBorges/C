#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if((a % 2 == 0) || (b % 2 == 0)){
        printf("Algum ? par");
    }else{
        printf("Nenhum ? par");
    }
    return 0;
}
