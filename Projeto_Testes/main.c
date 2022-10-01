#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    printf("+");
    for(int i = 0; i < 35;i++)
    {
        printf("=");
    }
    printf("+");
    printf("\n|");
    for(int i = 0; i < 10;i++)
    {
        printf(" ");
    }
    printf("EMPRESA MOBILE");
    for(int i = 0; i < 11;i++)
    {
        printf(" ");
    }
    printf("|");
    printf("\n+");


    for(int i = 0; i < 35;i++)
    {
        printf("=");
    }
    printf("+");

    return 0;
}
