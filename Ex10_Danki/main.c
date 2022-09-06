#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    int r;
    scanf("%d", &n1);
    r = n1%2;
    if(r == 1){
        printf("Número impar");
    }else{
        printf("Numero par");
    }
    return 0;
}
