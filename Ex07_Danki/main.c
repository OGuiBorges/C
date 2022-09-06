#include <stdio.h>
#include <stdlib.h>

int main()
{
    char l1;
    char l2;
    printf("Digite uma letra: ");
    scanf("%c", &l1);
    fflush(stdin);
    printf("Digite outra letra: ");
    scanf("%c", &l2);
    printf("%c%c", l1,l2);
    return 0;
}
