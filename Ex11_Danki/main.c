#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d;
    scanf("%d", &d);
    if(d >= 0 && d <= 10){
        printf("N�mero entre 0 e 10!");
    }else if(d < 0){
        printf("N�mero menor que 0!");
    }else{
        printf("N�mero maior que 10!");
    }
    return 0;
}
