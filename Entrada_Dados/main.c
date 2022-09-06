#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[256];
    char sobrenome[256];
    int idade;
    int ano_nascimento;

    printf("Ola, qual seu nome?\n");
    scanf("%s", nome);
    printf("\nOtimo %s, me diz ai seu sobrenome\n",nome);
    scanf("%s", sobrenome);
    printf("\nQueria saber tambem uma coisa! qual sua idade?\n");
    scanf("%d", &idade);
    printf("\nMas qual ano voce nasceu?\n");
    scanf("%d", &ano_nascimento);
    printf("\nAaaah entendih. Resumindo seus dados entao:\nSeu nome e %s %s, nascido em %d e tem %d anos.",nome, sobrenome, ano_nascimento, idade);
    return 0;
}
