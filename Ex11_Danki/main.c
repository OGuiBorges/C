#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d;
    scanf("%d", &d);
    if(d >= 0 && d <= 10){
        printf("Número entre 0 e 10!");
    }else if(d < 0){
        printf("Número menor que 0!");
    }else{
        printf("Número maior que 10!");
    }
    return 0;
}
