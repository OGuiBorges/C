#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(a > 10 || b > 10){
        printf("tem algum maior que 10");
    }else{
        printf("Nenhum maior que 10");
    }
    return 0;
}
