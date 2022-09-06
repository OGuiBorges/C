#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    int n2;
    scanf("%d", &n1);
    scanf("%d", &n2);
    if(n1 > n2){
        printf("Primeiro numero maior que o segundo!");
    }else if(n1 == n2){
        printf("Numeros iguais!");
    }else{
        printf("Primeiro numero menor que o segundo!");
    }
    return 0;
}
