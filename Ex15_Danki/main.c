#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int r = a + b;
    if((r > 0 && r < 10) || (r % 2 == 0) ){
        printf("esta entre 0 e 10 ou é par");
    }else{
        printf("nao atende as condições");
    }
    return 0;
}
